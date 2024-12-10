/*
 * Danfoss MSK linker script for STM32F777ZGT7 MCU with extended Flash and SRAM
 */
__main_stack_size__     = 0x0400;
__process_stack_size__  = 0x0200;
__stacks_total_size__ = __main_stack_size__ + __process_stack_size__;

/* Memory Spaces Definitions */

MEMORY
{

  STACK (xrw)             : ORIGIN = 0x20000000, LENGTH = 0x00000600
  VECTORTABLERAM (xrw)    : ORIGIN = 0x20000800, LENGTH = 0x00000400
  DTCM_RAM (xrw)          : ORIGIN = 0x20000C00, LENGTH = 0x0001F200
  ITCM_RAM (xrw)          : ORIGIN = 0x00000000, LENGTH = 0x00004000
  
  BOOTSHAREDRAM (xrw)     : ORIGIN = 0x20020400, LENGTH = 0x00000040
  SECBOOTSHAREDRAM (xrw)  : ORIGIN = 0x20020440, LENGTH = 0x00000040
  RAM (xrw)               : ORIGIN = 0x20020480, LENGTH = 0x0005BB80
  RAM1 (xrw)              : ORIGIN = 0x2007C000, LENGTH = 0x00004000

  EXT_BUFFER1 ( xrw )     : ORIGIN = 0x60000000, LENGTH = 0x00080000   /* 512kByte Bank 1 of SDRAM Image Buffer (On/Off Screen)*/ 
  EXT_SDRAM1 ( xrw )      : ORIGIN = 0x60080000, LENGTH = 0x00050000   /* 16MByte - 512kByte Bank 1 of SDRAM  possible 0x00F80000*/
  EXT_BUFFER2 ( xrw )     : ORIGIN = 0x61000000, LENGTH = 0x00080000   /* 512kByte Bank 2 of SDRAM Image Buffer (On/Off Screen)*/
  EXT_SDRAM2 ( xrw )      : ORIGIN = 0x61080000, LENGTH = 0x00000000   /* 16MByte - 512kByte Bank 2 of SDRAM possible 0x00F80000*/
  EXT_BUFFER3 ( xrw )     : ORIGIN = 0x62000000, LENGTH = 0x00400000   /* 4MByte Bank 3 of SDRAM Image Buffer*/
  EXT_SDRAM3 ( xrw )      : ORIGIN = 0x62400000, LENGTH = 0x00C00000   /* 12MByte Bank 3 of SDRAM */
  EXT_BUFFER4 ( xrw )     : ORIGIN = 0x63000000, LENGTH = 0x00080000   /* 512kByte Bank 4 of SDRAM Image Buffer*/
  EXT_SDRAM4 ( xrw )      : ORIGIN = 0x63080000, LENGTH = 0x00F80000   /* 16MByte - 512kByte Bank 4 of SDRAM */
  
  BKPSRAM (xrw)           : ORIGIN = 0x40024000, LENGTH = 0x00001000
  
  OTP (rx)                : ORIGIN = 0x1FF0F000, LENGTH = 0x00000400
  KRNVECTORTABLEFLASH (rx): ORIGIN = 0x08008000, LENGTH = 0x00000040 
  KRNVALIDAPPFLASH (rx)   : ORIGIN = 0x08008040, LENGTH = 0x00000004 
  KRNCRCTABLEFLASH (rx)   : ORIGIN = 0x08008044, LENGTH = 0x00000014   /* changing this field requires update of _HEXRANGE */
  RSVDFORSECONDBOOT(rx)   : ORIGIN = 0x08008058, LENGTH = 0x00000008   /* Just to fill the gap */
  KRNFLASH_I(rx)          : ORIGIN = 0x08008060, LENGTH = 0x00003FA0   /* just to satisfy GUIDE tool chain to calculate ROM usage ans to verify at applayer link time it matches in case application is using read only parameter */ 
  KRNFLASH (rx)           : ORIGIN = 0x0800C000, LENGTH = 0x001F4000
  EXT_QSPIFLASH (rx)      : ORIGIN = 0x90000000, LENGTH = 0x02000000   /* 32MByte */
  
}                                          

__ram_start__           = ORIGIN(RAM);
__ram_size__            = LENGTH(RAM);
__ram_end__             = __ram_start__ + __ram_size__;

__shared_boot_ram_start = ORIGIN(BOOTSHAREDRAM);
_otp_base_address       = ORIGIN(OTP);
_validData_size         = LENGTH(KRNVALIDAPPFLASH);
_BkpSRAM_size           = LENGTH(BKPSRAM);

/* Sections Definitions */
/* In case of changes in RAM / ROM definition, the file 'memnames.txt' has to be modified! */

SECTIONS
{
    . = 0;
    
    /* for Cortex devices, the beginning of the start-up code is stored in the .isr_vector section, which goes to FLASH */
    .isr_vector :
    {
       . = ALIGN(4);
       __krn_vector_table_start = .;
       KEEP(*(.isr_vector))       /* NVIC */
       . = ALIGN(4);
       __krn_vector_table_end = .;
    } >KRNVECTORTABLEFLASH
    
    .second_bootloader_flags :
    {
       . = ALIGN(4);
       __second_bootloader_flags_start = .;
       KEEP(*(.second_bootloader_flags))
       . = ALIGN(4);
       __second_bootloader_flags_end = .;
    } >RSVDFORSECONDBOOT

    .validApp :
    {
	. = ALIGN(4);
        _validData = .;
        KEEP(*(.validApp))        /* valid flag code */
    } >KRNVALIDAPPFLASH

    .CRCField :                   /* changing this field requires update of _HEXRANGE */
    {
        . = ALIGN(4);
        PROVIDE(_CRCSTART = .);
        KEEP(*(.CRCField))        /* CRC field code */
        . = ALIGN(4);
    } >KRNCRCTABLEFLASH

    .textKrnl : ALIGN(4)
    {
         *cstart.o(.text.*)
         *AppLayer.a:checksum.o(.text.*)
         *AppLayer.a:unitinfo.o(.text.*)
         *AppLayer.a:vector.o(.text.*)
         *AppLayer.a:chmempools.o(.text.*)
         *AppLayer.a:chheap.o(.text.*)
         *AppLayer.a:KWP2kSocket.o(.text.*)
         *AppLayer.a:chcore_v7m.o(.text.*)
         *AppLayer.a:chschd.o(.text.*)
         *AppLayer.a:EEPROMdrv.o(.text.*)
         *AppLayer.a:chsys.o(.text.*)
         *AppLayer.a:chmtx.o(.text.*)
         *AppLayer.a:system.o(.text.*)
         *AppLayer.a:chthreads.o(.text.*)
         *AppLayer.a:History.o(.text.*)
         *AppLayer.a:CanSTM32f2xx.o(.text.*) 
         *AppLayer.a:RTOS_Chibios.o(.text.*) 
         *AppLayer.a:CAN.o(.text.*) 
         *AppLayer.a:core_cm3.o(.text.*)
         *AppLayer.a:chmemcore.o(.text.*) 
         *AppLayer.a:chvt.o(.text.*)
         *AppLayer.a:SerialDriver.o(.text.*) 
         *AppLayer.a:CalcProgramCrc.o(.text.*)
         . = ALIGN(4);
    } > KRNFLASH_I
    
    .HexRange :                  /* This section needs to be prior the .text section so */
                         /* HexRange is placed in the very beginning of the KRNFLASH sector */
    {
       . = ALIGN(4);
        PROVIDE(_text = .);
        KEEP(*(.HexRange))        /* HexRange field code */
        . = ALIGN(4);
    } >KRNFLASH
 
	/* Instruction Tightly Coupled Memory RAM  */
	.Itcm_Ram :
    {
        PROVIDE(_itcm_start = .);
        PROVIDE(_itcm_end = .);
        . = ALIGN(4);
        *(.ITCM_RAM)
        . = ALIGN(4);
        *(.ITCM_RAM*)
    } >KRNFLASH
/*    } >ITCM_RAM AT>KRNFLASH*/
	_itcm_data_start = LOADADDR(.Itcm_Ram); 
    
    .ctors : ALIGN(4)
    {
        PROVIDE(_ctors_start_ = .);
        KEEP(*(SORT(.ctors.*)))
        KEEP(*(.ctors))
        PROVIDE(_ctors_end_ = .);
        . = ALIGN(4);
    } >KRNFLASH

    .dtors : ALIGN(4)
    {
        PROVIDE(_dtors_start_ = .);
        KEEP(*(SORT(.dtors.*)))
        KEEP(*(.dtors))
        PROVIDE(_dtors_end_ = .);
        . = ALIGN(4);
    } >KRNFLASH


    .ARM.extab : ALIGN(4)
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    }

    __exidx_start = .;
    .ARM.exidx : ALIGN(4)
    {
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
    } > KRNFLASH
    __exidx_end = .;
	.AppLayertext : ALIGN(4) SUBALIGN(4)
    {
        _text = .;
        *AppLayer.a:(.text .gnu.linkonce.t.*)
        *AppLayer.a:(.text.*)
        *AppLayer.a:(.rodata)
        *AppLayer.a:(.rodata.*)
        *AppLayer.a:(.glue_7t)
        *AppLayer.a:(.glue_7)
        *AppLayer.a:(.gcc*)
		*libg.a:(.text .text.* .rodata .rodata*)
		*libm.a:(.text .text.* .rodata .rodata*)
		*libgcc.a:(.text .text.* .rodata .rodata*)
		*libc.a:(.text .text.* .rodata .rodata*)
        . = ALIGN(4);
    } >KRNFLASH

	.AppRodata : ALIGN(4) SUBALIGN(4)
    {
		*(.rodata)
        *(.rodata.*)
        . = ALIGN(4);
    } >EXT_QSPIFLASH
	
	.text : ALIGN(4) SUBALIGN(4)
    {
        _text = .;
        PROVIDE(_app_text_start = .);
        *(.text .text.* .gnu.linkonce.t.*)
        *(.text.*)
        *(.glue_7t)
        *(.glue_7)
        *(.gcc*)
        . = ALIGN(4);
        PROVIDE(_app_text_end = .);
    } >EXT_SDRAM4 AT>EXT_QSPIFLASH
    _app_text_load_start = LOADADDR(.text); 
	
	.qspi_flash :
    {
        PROVIDE(_qspi_flash_start = .);
        . = ALIGN(4);
        *(.qspi_flash)
        . = ALIGN(4);
        *(.qspi_flash*)
        . = ALIGN(4);
        PROVIDE(_qspi_flash_end = .);
    } >EXT_QSPIFLASH
	
    .eh_frame_hdr : {*(.eh_frame_hdr)}

    .eh_frame : ONLY_IF_RO {*(.eh_frame)}

    . = ALIGN(4);
    
    /* locate the shared memory in the beginning of RAM */
    .isr_vector_RAM  (NOLOAD):
    {
        . = ALIGN(4);
	    __ram_vector_table_start = .;
        *(.isr_vector_RAM)            /* NVIC RAM table */
        . = ALIGN(4);
    } >VECTORTABLERAM
     
    /* locate the shared memory in the beginning of RAM */
    .SharedMemory  (NOLOAD):
    {
    . = ALIGN(4);
        *(.SharedMemory)          /* Shared ram memory between bootloader and kernel */
    . = ALIGN(4);
    } >BOOTSHAREDRAM

    .data : ALIGN(4)
    {
        PROVIDE(_sdata_start = .);
        *AppLayer.a:(.data .data.* .gnu.linkonce.d.*)
        . = ALIGN(4);
        *AppLayer.a:(.data.*)
        . = ALIGN(4);
        *AppLayer.a:(.ramtext)
        . = ALIGN(4);
        PROVIDE(_sdata_end = .);
    } >DTCM_RAM AT>KRNFLASH
	_sidata = LOADADDR(.data);	
	
    .UserDMARAMbss (NOLOAD):
    {
        _UserDMARAMbss_start = .;
        . = ALIGN(4);
        *(.UserDMARAMbss)            /* Ram memory for User Working Copies of Serial Flash via DMA */
        . = ALIGN(4);
        _UserDMARAMbss_end = .;
    } > EXT_SDRAM1 

    .UserDTCM_RAMbss (NOLOAD) :
    {
        PROVIDE(_dtcm_start = .);
        . = ALIGN(4);
        *(.bss.mainthread.*)
        . = ALIGN(4);
        *(.bss._idle_thread_wa)
        . = ALIGN(4);
        *(.bss.rlist)
        . = ALIGN(4);
        *(.bss.vtlist)
        . = ALIGN(4);
        *(.bss.endmem)
        . = ALIGN(4);
        *(.bss.nextmem)
        . = ALIGN(4);
        *(.bss.default_heap)
        . = ALIGN(4);
        *(.UserCcmRAMbss)
		. = ALIGN(4);
        PROVIDE(_dtcm_end = .);
    } >DTCM_RAM

    
    .stacks :
    {
        . = ALIGN(8);
        __process_stack_base__ = .;
        __main_thread_stack_base__ = .;
        . += __process_stack_size__;
        . = ALIGN(8);
        __process_stack_end__ = .;
        __main_thread_stack_end__ = .;
        __main_stack_base__ = .;
        . += __main_stack_size__;
        . = ALIGN(8);
        __main_stack_end__ = .;
    } >STACK

    /*
     * Do not load default values for the following RAM sections.  Initialization
     * to zeros will be handled in the cstart.c module.
     */
    .CommRAMbss (NOLOAD) :
    {
        _CommRAMbss_start = .;
        . = ALIGN(4);
        *(.CommRAMbss)
        . = ALIGN(4);
        _CommRAMbss_end = .;
    } >DTCM_RAM

    .UserNVRAMbss (NOLOAD):
    {
        _UserNVRAMbss_start = .;
        . = ALIGN(4);
        *(.UserNVRAMbss)            /* Ram memory for User Non Volatile Working Copies */
        . = ALIGN(4);
        _UserNVRAMbss_end = .;
    } > RAM 
  
    .UserRAMbss (NOLOAD):
    {
        _UserRAMbss_start = .;
        . = ALIGN(4);
        *(.UserRAMbss)            /* Ram memory for User Non Volatile Working Copies */
        . = ALIGN(4);
        _UserRAMbss_end = .;
    } > RAM  
	
    .BkpSRAM (NOLOAD) :
    {
        _BkpSRAM_start = .;
        . = ALIGN(4);
        *(.BkpSRAM)
        . = ALIGN(4);
        _BkpSRAM_end = .;
    } >DTCM_RAM

    /*
     * Do not load default values for the following RAM sections.  Initialization
     * to zeros will be handled in the cstart.c module.
     */

  .AppLayerbss (NOLOAD) : ALIGN(4)
    {
        PROVIDE(_AppLayerbss_start = .);
        *AppLayer.a:(.bss)
        . = ALIGN(4);
        *AppLayer.a:(.bss.*)
        . = ALIGN(4);
        *AppLayer.a:(COMMON)
        . = ALIGN(4);
        *cstart.o(.bss)
        . = ALIGN(4);
        *cstart.o(.bss.*)
        . = ALIGN(4);
        *cstart.o(COMMON)
        . = ALIGN(4);
        PROVIDE(_AppLayerbss_end = .);
    } >DTCM_RAM
   
   .bss (NOLOAD) :
    {
        PROVIDE(_bss_start = .);
        *(.bss .bss.* .gnu.linkonce.b.*)
        . = ALIGN(4);
        *(.bss.*)
        . = ALIGN(4);
        *(COMMON)
        . = ALIGN(4);
        PROVIDE(_bss_end = .);
    } >EXT_SDRAM3

    .dmaRAMbss (NOLOAD) : ALIGN(4)
    {
        _dmaRAM_start = .;
        *(.dmaRAMbss)             /* Reserve for MCU DMA buffers - requires special Safety Cert Handling */
        _dmaRAM_end = .;
    } >DTCM_RAM

	PROVIDE(end = .);
    _end            = .;
    

    .fmc_sdram_bss (NOLOAD) :
    {
        PROVIDE(_fmc_sdram_bss_start = .);
        . = ALIGN(4);
        *(.fmc_sdram_bss)
        . = ALIGN(4);
        *(.fmc_sdram_bss*)
        . = ALIGN(4);
        PROVIDE(_fmc_sdram_bss_end = .);
    } >EXT_BUFFER1

    .fmc_sdram_data :
    {
        PROVIDE(_fmc_data_start = .);
        *(.data .data.* .gnu.linkonce.d.*)
        . = ALIGN(4);
        *(.data.*)
        . = ALIGN(4);
        *(.ramtext)
        . = ALIGN(4);
        *(.fmc_sdram_data)
        . = ALIGN(4);
        *(.fmc_sdram_data*)
        . = ALIGN(4);
        PROVIDE(_fmc_data_end = .);
    } >RAM AT>KRNFLASH
	_fmc_data_load_start = LOADADDR(.fmc_sdram_data);   
    
    
    .fmc_sdram2_bss (NOLOAD) :
    {
        PROVIDE(_fmc_sdram2_bss_start = .);
        . = ALIGN(4);
        *(.fmc_sdram2_bss)
        . = ALIGN(4);
        *(.fmc_sdram2_bss*)
        . = ALIGN(4);
        PROVIDE(_fmc_sdram2_bss_end = .);
    } >EXT_BUFFER2
	
    .fmc_sdram3_bss (NOLOAD) :
    {
        PROVIDE(_fmc_sdram3_bss_start = .);
        . = ALIGN(4);
        *(.fmc_sdram3_bss)
        . = ALIGN(4);
        *(.fmc_sdram3_bss*)
        . = ALIGN(4);
        PROVIDE(_fmc_sdram3_bss_end = .);
    } >EXT_BUFFER3	
	
    .fmc_sdram4_bss (NOLOAD) :
    {
        PROVIDE(_fmc_sdram4_bss_start = .);
        . = ALIGN(4);
        *(.fmc_sdram4_bss)
        . = ALIGN(4);
        *(.fmc_sdram4_bss*)
        . = ALIGN(4);
        PROVIDE(_fmc_sdram4_bss_end = .);
    } >EXT_BUFFER4		

    .os_string : ALIGN(4)
    {
        KEEP(*(.os_string))
        . = ALIGN(4);
    } >KRNFLASH  
    
	/*Those are required for linking ther kernel properly*/
    PROVIDE(_fsmc_flashB1_start = .);
    PROVIDE(_fsmc_flashB1_end = .);

    PROVIDE(_fsmc_data_start = .);
    PROVIDE(_fsmc_data_end = .);

    PROVIDE(_fsmc_null_data_start = .);
    PROVIDE(_fsmc_null_data_end = .);

}

__heap_base__   = _end;
__heap_end__    = __ram_end__;

__krn_vector_table_size = __krn_vector_table_end - __krn_vector_table_start;
