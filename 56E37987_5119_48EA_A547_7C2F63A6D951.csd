<?xml version="1.0" encoding="UTF-8"?><SysXmlForCodeGenerator><SysName>70298408V170</SysName><Controls>
	<NeededToolVersion>10.1.7</NeededToolVersion>
	<ScreenEditor2012>true</ScreenEditor2012>
	<TextEditorEnable>true</TextEditorEnable>
	<ImageEditorEnable>true</ImageEditorEnable>
	<UseInstalledFonts>true</UseInstalledFonts>
	<ApplogEditor2012>true</ApplogEditor2012>
	<DynamicDiagnostics>true</DynamicDiagnostics>
	<SIL2>false</SIL2>
	<CompiledBinaryFile>false</CompiledBinaryFile>
	<ObjectCode>true</ObjectCode>
	<MicroSeconds>true</MicroSeconds>
	<CheckHWNR>false</CheckHWNR>
	<OutputTargetPartNumber></OutputTargetPartNumber>
</Controls><P1Builder ExtraCompilerFlags="-DNUMBER_CANMESSAGES=0" UgpFile="ugp1par.txt" ExrFile="70298408v170.EXR" ImageArchExt=".a"></P1Builder><Ports>
	<Screen>
		<Name>Display.Port</Name>
		<MaxObjectSize X="1024" Y="1024"/>
		<TextJustification>
			<Left Value="0"/>
			<Center Value="1"/>
			<Right Value="2"/>
		</TextJustification>
		<OrthogonalRotation/>
		<TextRotation/>
		<FontType Format="FullUnicodeRLEFontTypeCodeWithOffset"/>
		<Skin ImageName="DM430E_X_X_0_X_skin.svg" RectId="display" Description="Standard Buttons"/>
		<Skin ImageName="DM430E_X_X_1_X_skin.svg" RectId="display" Description="Navigation Buttons"/>
		<Size X="480" Y="272"/>
		<ImageFormatUsage SupportsAlphaChannel="true">
			<DefaultImageFormat Name="24 bit  (32 bit)"/>
			<AlphaReplacements>
				<AlphaReplacement AlphaName="32 bit alpha channel (32 bit)" ReplacementName="16777216 Colors (24 bit)"/>
			</AlphaReplacements>
		</ImageFormatUsage>
		<Imageformat>
			<Name>16777216 Colors (24 bit) with Alpha Layer</Name>
			<Colordepth>32</Colordepth>
			<FileFormat>BMP</FileFormat>
			<OutputFormatData>
				<RLE_RGBA>
					<RunLengthSize>16</RunLengthSize>
					<MaxRunLength>32767</MaxRunLength>
					<A Width="8" Pos="24"/>
					<R Width="8" Pos="16"/>
					<G Width="8" Pos="8"/>
					<B Width="8" Pos="0"/>
				</RLE_RGBA>
			</OutputFormatData>
			<NoTransparentColor>0xFFFFFFFF</NoTransparentColor>
			<Orientation Rotate="0"/>
		</Imageformat>
		<Imageformat>
			<Name>16777216 Colors (24 bit)</Name>
			<Colordepth>24</Colordepth>
			<FileFormat>BMP</FileFormat>
			<OutputFormatData>
				<RLE_RGB>
					<RunLengthSize>16</RunLengthSize>
					<MaxRunLength>32767</MaxRunLength>
					<R Width="8" Pos="16"/>
					<G Width="8" Pos="8"/>
					<B Width="8" Pos="0"/>
				</RLE_RGB>
			</OutputFormatData>
			<NoTransparentColor>0xFFFFFFFF</NoTransparentColor>
			<Orientation Rotate="0"/>
		</Imageformat>
		<Imageformat>
			<Name>Monochrome (1 bit)</Name>
			<Colordepth>1</Colordepth>
			<FileFormat>bmp</FileFormat>
		</Imageformat>
		<Defaults>
			<Name>Display.Port</Name>
		</Defaults>
	</Screen>
</Ports><Ports>
	<DataDrive>
		<BlockSize>262144</BlockSize>
		<Size>33292288</Size>
		<Name>FlashDrive</Name>
		<HWImplementation>
			<Applog>
				<AllocationMode>0</AllocationMode>
				<MaxNumberOfFiles>0</MaxNumberOfFiles>
				<Type>
					<Linear/>
					<Circular/>
				</Type>
				<Defaults>
					<Name>AppLogFile</Name>
					<Size>524288</Size>
					<Type>
						<Circular/>
					</Type>
				</Defaults>
			</Applog>
			<BinaryFile>
				<AllocationMode>0</AllocationMode>
				<MaxNumberOfFiles>1</MaxNumberOfFiles>
			</BinaryFile>
		</HWImplementation>
	</DataDrive>
</Ports><Ports>
	<DataDrive>
		<BlockSize>32768</BlockSize>
		<Size>32768</Size>
		<Name>ROPPort</Name>
		<HWImplementation>
			<Parameters>
				<AllocationMode>0</AllocationMode>
				<MaxNumberOfFiles>0</MaxNumberOfFiles>
			</Parameters>
		</HWImplementation>
	</DataDrive>
</Ports>
<SEHWComponents>
</SEHWComponents>
<MemoryAllocation>
	<Mapformat>STM32F7XX541</Mapformat>
	<AddressUnit>1</AddressUnit>
	<Available>
		<ROM>35618816</ROM>
		<RAM>35455488</RAM>
		<NV>4000</NV>
	</Available>
	<SystemUsed>
		<ROM>124776</ROM>
		<RAM>5572212</RAM>
		<NV>0</NV>
	</SystemUsed>
	<MemoryNames>
		<ROM>
			<SegmentName>.validApp</SegmentName>
			<SegmentName>.CRCField</SegmentName>
			<SegmentName>.text</SegmentName>
			<SegmentName>.textKrnl</SegmentName>
			<SegmentName>.AppRodata</SegmentName>
			<SegmentName>.isr_vector</SegmentName>
			<SegmentName>.data</SegmentName>
			<SegmentName>.Itcm_Ram</SegmentName>
			<SegmentName>.ctors</SegmentName>
			<SegmentName>.dtors</SegmentName>
			<SegmentName>.fmc_sdram_data</SegmentName>
			<SegmentName>.qspi_flash</SegmentName>
			<SegmentName>.AppLayertext</SegmentName>
		</ROM>
		<RAM>
			<SegmentName>.isr_vector_RAM</SegmentName>
			<SegmentName>.SharedMemory</SegmentName>
			<SegmentName>.data</SegmentName>
			<SegmentName>.bss</SegmentName>
			<SegmentName>.CommRAMbss</SegmentName>
			<SegmentName>.AppLayerbss</SegmentName>
			<SegmentName>.UserNVRAMbss</SegmentName>
			<SegmentName>.UserRAMbss</SegmentName>
			<SegmentName>.dmaRAMbss</SegmentName>
			<SegmentName>.stacks</SegmentName>
			<SegmentName>.BkpSRAM</SegmentName>
			<SegmentName>.UserDTCM_RAMbss</SegmentName>
			<SegmentName>.fmc_sdram_bss</SegmentName>
			<SegmentName>.fmc_sdram_data</SegmentName>
			<SegmentName>.fmc_sdram2_bss</SegmentName>
			<SegmentName>.fmc_sdram3_bss</SegmentName>
			<SegmentName>.fmc_sdram4_bss</SegmentName>
			<SegmentName>.text</SegmentName>
		</RAM>
		<NV>
			<VectorName>EE</VectorName>
		</NV>
	</MemoryNames>
</MemoryAllocation>
<FunctionLibrary Type="CCP_STM32F7XX541" Open="true"/>
<SYSSocket Type="dualbootSTM32F7XX541_" Name="W2" Description="Dual Boot" Open="TRUE"/><CanChannelInfo Count="2" />
<ExrFontFiles>
</ExrFontFiles>
<CompilerId>ARM-GCC 5.4 2016Q3-20160926 -BEGIN</CompilerId>
<Components>
U__HWNR2
IC_TIME-US
U__UNTIL
U__REPEAT
O__OBJ-CR-CALL1
O__OBJ-END1
IC_OBJECT-IN1
IC_OBJECT-IN-B1
IC_OBJECT-OUT1
IC_OBJECT-OUT-B1
O__CLASS-DEFINE1
O__CLASS-END1
IC_INIT-OUT
MA_ISIN
MA_ICOS
MA_ITAN
MA_ISQRT
MA_IASIN
MA_IACOS
MA_IATAN
TIMER
T1M
T10M
T100M
T1S
T60S
T1H
TLOOP
IC_BIOS-BI-U1
IC_BIOS-IN-U1
IC_BIOS-SHOW-U1
IC_MODULE-IN-U1
IC_MOD-BUS-IN1
IC_MOD-BUS-OUT
IC_PARAM-NS-U
IC_PARAM-IN-U1
IC_ACC-APP
IC_SET-PULSE
IC_ACC-APP-RAWD
IC_ACC-APP-DIAG
IC_ACC-APP-ERR
IC_ACC-APP-OTH
IC_READ-LOG
IC_ACC-HISTORY
IC_ACC-READ
IC_ACC-WRITE
O__XCLASS-CREATE
O__XFUNC-CALL
IF_ASSIGN
IF_ASSIGN1
IF_ASSIGN_APP
IF_GRAFIC-OUT
IF_LINE-OUT
IF_RSTRING2012
IF_STRINGF-OUT20_APP
IF_RTEXTLIST2012-START
IF_SELECT-LANG
IC_DEFINE-IN1
IC_GLABEL1
O__APPLOG-CALL
O__SCREEN-CALL
IC_CAN-TX
IC_CAN-RX
IC_CAN-RX-M
IC_CAN-RX-A
IC_NV-A1
IC_NV-B1
IC_NV-B2
IC_NV-C1
U__PARAM-CLOSE
O__POU-CALL
</Components></SysXmlForCodeGenerator>
