/*
 * Copyright (c) 2011 by Sauer-Danfoss AB
 * All rights reserved
 *
 * Description:
 *    This is the application interface to the
 *    driver that is used to read data from the
 *    application log.
 *
 *    ClearCase location of the implementation specification:
 *    \shared_ALM_Plus1Tool_Doc\ALM_Plus1Tool_Doc_comp\Docu\Specification\
 *    Implementation\Completed in 4.3\
 *    F00058 - Read Application Log Feature specification .doc
 *
 *    The specification has precedence in the case that the following
 *    description is in conflict with it.
 *
 * ***PLUS+1 GUIDE symbol***
 *
 *           .-------------------------.
 *           |                         |
 *           |              Line Count +- X6 U32
 *           |                         |
 *           | V1 File Name        Tag +- X5 UINT
 *           |                         |
 *           |            Access Right +- X4 UINT
 *           |   ------                |
 *           |   ------         .------+- X3 U32
 *           |   ------       <-+->    |
 *  UINT A2 -+-->------ --|> -------- -+- X2 ARRAY[]UINT
 *           |   ------    |           |
 *  BOOL A1 -+-------------+    Status +- X1 U32 Bit field
 *           '-------------------------'
 *                              X1 Status Bit Field
 *                               Bit |32..5|4|3|2|1|0
 *                                   |     | | | | |Data Not Ready
 *                                   |     | | | |Line Index overflow
 *                                   |     | | |Line Data overflow
 *                                   |     | |Write Operation In Progress
 *                                   |     |Line Count Not Ready
 *                                   |Reserved Bits (always read as zero)
 *
 * Change history:
 *    When?      Who?          What?
 *    2011-03-10 Jonas Hörberg Create file
 */

#ifndef _IC_READ_LOG_PUBLIC_H
#define _IC_READ_LOG_PUBLIC_H

/*-------------------------------------------------------
   Type declarations
   -------------------------------------------------------*/

/*
 * The design decision to define the Buffer member
 * of the read log handler as a plain array or
 * pointer make it necessary to have a set of handler
 * struct types that match the type of its buffer.
 * Another approach would have been to design the
 * struct so that the generic members became separated
 * from the type of the buffer. This could be done by
 * putting the Buffer member in an union or by defining
 * a struct to contain the common members.
 *
 * The implementation is coded in a way that is not
 * in fully compliance with the C standard. This was
 * done to simplify the implementation. It is believed
 * that all compilers in existence generate code that
 * work as intended.
 *
 * The implementation expects that a set of structs
 * with a common initial sequence can be cast to
 * each other and still give access to the common
 * members. The C99 standard only guarantees this
 * for structs that are members of a common union.
 *
 * From 6.5.2.3#5 in the C99 standard:
 * "if a union contains several structures that share a
 * common initial sequence, and if the union object
 * currently contains one of these structures, it is
 * permitted to inspect the common initial part of any
 * of them anywhere that a declaration of the complete
 * type of the union is visible."
 */
#define _IC_READ_LOG_COMMON_INITIAL_SEQUENCE \
   U32    Index;                             \
   U32    PreviousIndex;                     \
   BOOL   Enable;                            \
   BOOL   PreviousEnable;                    \
   U8     Tag;                               \
   U8     Access;                            \
   U32    ByteLength;                        \
   U32    LineCount;                         \
   U32    PreviousLineCount;                 \
   U32    Status;

#define _IC_READ_LOG_DEFINE_STRUCT(Type, NoOfElements) \
   struct                                              \
   {                                                   \
      _IC_READ_LOG_COMMON_INITIAL_SEQUENCE             \
      Type   Buffer[NoOfElements];                     \
   }

typedef struct _IC_READ_LOG_S
{
   MsgFile_T *LogFile;
   U8    Status;
   U32   NoOfElements;

   /* ElementSize is used to select the right member of the union */
   U8   ElementSize;
   union
   {
      /*
       * All handles has its own struct type but we pretend that
       * only three types exist. One for U8, U16 and U32. Each
       * with a single element sized buffer.
       * The pointee Buffer probably contain more than one
       * element and the code will therefore read outside the
       * boundaries of the types below. This is allowed in C.
       */
      _IC_READ_LOG_DEFINE_STRUCT(U8, 1) * U8;
      _IC_READ_LOG_DEFINE_STRUCT(U16, 1) * U16;
      _IC_READ_LOG_DEFINE_STRUCT(U32, 1) * U32;
   }Handle;
   struct _IC_READ_LOG_S  *Next;
}_IC_READ_LOG_T;

/*-------------------------------------------------------
   Definitions
   -------------------------------------------------------*/

/* The PLUS+1 GUIDE code uses only the following three macros */

/*lint -esym( 961, 19.13 ) operator used in macro*/
/* Declare a read log handler and its accompanying buffer */
#define                                                                     \
   _CREATE_READLOGFILE_HANDLER(HandlerName, LogFileHandler, BuffSize, Type) \
   _IC_READ_LOG_DEFINE_STRUCT(Type, BuffSize) HandlerName;                  \
   _IC_READ_LOG_T   HandlerName##WorkOrder = {                              \
      .LogFile      = &LogFileHandler,                                      \
      .Handle       = { (void *)&HandlerName },                             \
      .NoOfElements = BuffSize,                                             \
      .ElementSize  = sizeof(Type)                                          \
   };

/* This macro must be used on all read log handlers when _INITTASK is run. */
#define _READLOGFILE_INIT(HandlerName)   IcReadLogInit(&HandlerName##WorkOrder);

/* This macro can be used at any time by _MAINTASK. */
#define _READLOGFILE_PROCESS(HandlerName) \
   IcReadLogProcess(&HandlerName##WorkOrder);
/*lint +esym( 961, 19.13 ) operator used in macro*/

/*-------------------------------------------------------
   Prototype functions
   -------------------------------------------------------*/

/*
 * Initialize a read log handle.
 * The handle can not be used before this is done
 * and the data members must not be read.
 */
extern void IcReadLogInit(const _IC_READ_LOG_T *WorkOrder);

/*
 * Queue a read log operation or update the status of a just
 * finished operation.
 */
extern void IcReadLogProcess(_IC_READ_LOG_T *WorkOrder);

#endif /* #ifndef _IC_READ_LOG_PUBLIC_H */

