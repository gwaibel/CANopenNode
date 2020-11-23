// clang-format off
/*******************************************************************************

   File - CO_OD.c/CO_OD.h
   CANopen Object Dictionary.

   This file was automatically generated with libedssharp Object
   Dictionary Editor v0.8-95-gfcc4f7c   DON'T EDIT THIS FILE MANUALLY !!!!
*******************************************************************************/


#ifndef CO_OD_H_
#define CO_OD_H_

/*******************************************************************************
   CANopen DATA TYPES
*******************************************************************************/
   typedef bool_t       BOOLEAN;
   typedef uint8_t      UNSIGNED8;
   typedef uint16_t     UNSIGNED16;
   typedef uint32_t     UNSIGNED32;
   typedef uint64_t     UNSIGNED64;
   typedef int8_t       INTEGER8;
   typedef int16_t      INTEGER16;
   typedef int32_t      INTEGER32;
   typedef int64_t      INTEGER64;
   typedef float32_t    REAL32;
   typedef float64_t    REAL64;
   typedef char_t       VISIBLE_STRING;
   typedef oChar_t      OCTET_STRING;

   #ifdef DOMAIN
   #undef DOMAIN
   #endif

   typedef domain_t     DOMAIN;

#ifndef timeOfDay_t
    typedef union {
        unsigned long long ullValue;
        struct {
            unsigned long ms:28;
            unsigned reserved:4;
            unsigned days:16;
            unsigned reserved2:16;
        };
    }timeOfDay_t;
#endif

    typedef timeOfDay_t TIME_OF_DAY;
    typedef timeOfDay_t TIME_DIFFERENCE;


/*******************************************************************************
   FILE INFO:
      FileName:     
      FileVersion:  0
      CreationTime: 12:00
      CreationDate: 01-01-0001
      CreatedBy:    JP
*******************************************************************************/


/*******************************************************************************
   DEVICE INFO:
      VendorName:     CANopenNode
      VendorNumber:   0
      ProductName:    CANopenNode
      ProductNumber:  0
*******************************************************************************/


/*******************************************************************************
   FEATURES
*******************************************************************************/
  #define CO_NO_SYNC                     1   //Associated objects: 1005-1007
  #define CO_NO_EMERGENCY                1   //Associated objects: 1014, 1015
  #define CO_NO_TIME                     1   //Associated objects: 1012, 1013
  #define CO_NO_SDO_SERVER               1   //Associated objects: 1200-127F
  #define CO_NO_SDO_CLIENT               1   //Associated objects: 1280-12FF
  #define CO_NO_GFC                      0   //Associated objects: 1300
  #define CO_NO_SRDO                     0   //Associated objects: 1301-1341, 1381-13C0
  #define CO_NO_LSS_SERVER               0   //LSS Slave
  #define CO_NO_LSS_CLIENT               0   //LSS Master
  #define CO_NO_RPDO                     4   //Associated objects: 14xx, 16xx
  #define CO_NO_TPDO                     4   //Associated objects: 18xx, 1Axx
  #define CO_NO_NMT_MASTER               0
  #define CO_NO_TRACE                    0


/*******************************************************************************
   OBJECT DICTIONARY
*******************************************************************************/
   #define CO_OD_NoOfElements             65


/*******************************************************************************
   TYPE DEFINITIONS FOR RECORDS
*******************************************************************************/
/*1018      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     vendorID;
               UNSIGNED32     productCode;
               UNSIGNED32     revisionNumber;
               UNSIGNED32     serialNumber;
               }              OD_identity_t;
/*1200      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     COB_IDClientToServer;
               UNSIGNED32     COB_IDServerToClient;
               }              OD_SDOServerParameter_t;
/*1280      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     COB_IDClientToServer;
               UNSIGNED32     COB_IDServerToClient;
               UNSIGNED8      nodeIDOfTheSDOServer;
               }              OD_SDOClientParameter_t;
/*1400      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     COB_IDUsedByRPDO;
               UNSIGNED8      transmissionType;
               }              OD_RPDOCommunicationParameter_t;
/*1600      */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     mappedObject1;
               UNSIGNED32     mappedObject2;
               UNSIGNED32     mappedObject3;
               UNSIGNED32     mappedObject4;
               UNSIGNED32     mappedObject5;
               UNSIGNED32     mappedObject6;
               UNSIGNED32     mappedObject7;
               UNSIGNED32     mappedObject8;
               UNSIGNED32     mappedObject9;
               UNSIGNED32     mappedObject10;
               UNSIGNED32     mappedObject11;
               UNSIGNED32     mappedObject12;
               UNSIGNED32     mappedObject13;
               UNSIGNED32     mappedObject14;
               UNSIGNED32     mappedObject15;
               UNSIGNED32     mappedObject16;
               UNSIGNED32     mappedObject17;
               UNSIGNED32     mappedObject18;
               UNSIGNED32     mappedObject19;
               UNSIGNED32     mappedObject20;
               UNSIGNED32     mappedObject21;
               UNSIGNED32     mappedObject22;
               UNSIGNED32     mappedObject23;
               UNSIGNED32     mappedObject24;
               UNSIGNED32     mappedObject25;
               UNSIGNED32     mappedObject26;
               UNSIGNED32     mappedObject27;
               UNSIGNED32     mappedObject28;
               UNSIGNED32     mappedObject29;
               UNSIGNED32     mappedObject30;
               UNSIGNED32     mappedObject31;
               UNSIGNED32     mappedObject32;
               UNSIGNED32     mappedObject33;
               UNSIGNED32     mappedObject34;
               UNSIGNED32     mappedObject35;
               UNSIGNED32     mappedObject36;
               UNSIGNED32     mappedObject37;
               UNSIGNED32     mappedObject38;
               UNSIGNED32     mappedObject39;
               UNSIGNED32     mappedObject40;
               UNSIGNED32     mappedObject41;
               UNSIGNED32     mappedObject42;
               UNSIGNED32     mappedObject43;
               UNSIGNED32     mappedObject44;
               UNSIGNED32     mappedObject45;
               UNSIGNED32     mappedObject46;
               UNSIGNED32     mappedObject47;
               UNSIGNED32     mappedObject48;
               UNSIGNED32     mappedObject49;
               UNSIGNED32     mappedObject50;
               UNSIGNED32     mappedObject51;
               UNSIGNED32     mappedObject52;
               UNSIGNED32     mappedObject53;
               UNSIGNED32     mappedObject54;
               UNSIGNED32     mappedObject55;
               UNSIGNED32     mappedObject56;
               UNSIGNED32     mappedObject57;
               UNSIGNED32     mappedObject58;
               UNSIGNED32     mappedObject59;
               UNSIGNED32     mappedObject60;
               UNSIGNED32     mappedObject61;
               UNSIGNED32     mappedObject62;
               UNSIGNED32     mappedObject63;
               UNSIGNED32     mappedObject64;
               }              OD_RPDOMappingParameter_t;
/*1800      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     COB_IDUsedByTPDO;
               UNSIGNED8      transmissionType;
               UNSIGNED16     inhibitTime;
               UNSIGNED8      compatibilityEntry;
               UNSIGNED16     eventTimer;
               UNSIGNED8      SYNCStartValue;
               }              OD_TPDOCommunicationParameter_t;
/*1A00      */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     mappedObject1;
               UNSIGNED32     mappedObject2;
               UNSIGNED32     mappedObject3;
               UNSIGNED32     mappedObject4;
               UNSIGNED32     mappedObject5;
               UNSIGNED32     mappedObject6;
               UNSIGNED32     mappedObject7;
               UNSIGNED32     mappedObject8;
               UNSIGNED32     mappedObject9;
               UNSIGNED32     mappedObject10;
               UNSIGNED32     mappedObject11;
               UNSIGNED32     mappedObject12;
               UNSIGNED32     mappedObject13;
               UNSIGNED32     mappedObject14;
               UNSIGNED32     mappedObject15;
               UNSIGNED32     mappedObject16;
               UNSIGNED32     mappedObject17;
               UNSIGNED32     mappedObject18;
               UNSIGNED32     mappedObject19;
               UNSIGNED32     mappedObject20;
               UNSIGNED32     mappedObject21;
               UNSIGNED32     mappedObject22;
               UNSIGNED32     mappedObject23;
               UNSIGNED32     mappedObject24;
               UNSIGNED32     mappedObject25;
               UNSIGNED32     mappedObject26;
               UNSIGNED32     mappedObject27;
               UNSIGNED32     mappedObject28;
               UNSIGNED32     mappedObject29;
               UNSIGNED32     mappedObject30;
               UNSIGNED32     mappedObject31;
               UNSIGNED32     mappedObject32;
               UNSIGNED32     mappedObject33;
               UNSIGNED32     mappedObject34;
               UNSIGNED32     mappedObject35;
               UNSIGNED32     mappedObject36;
               UNSIGNED32     mappedObject37;
               UNSIGNED32     mappedObject38;
               UNSIGNED32     mappedObject39;
               UNSIGNED32     mappedObject40;
               UNSIGNED32     mappedObject41;
               UNSIGNED32     mappedObject42;
               UNSIGNED32     mappedObject43;
               UNSIGNED32     mappedObject44;
               UNSIGNED32     mappedObject45;
               UNSIGNED32     mappedObject46;
               UNSIGNED32     mappedObject47;
               UNSIGNED32     mappedObject48;
               UNSIGNED32     mappedObject49;
               UNSIGNED32     mappedObject50;
               UNSIGNED32     mappedObject51;
               UNSIGNED32     mappedObject52;
               UNSIGNED32     mappedObject53;
               UNSIGNED32     mappedObject54;
               UNSIGNED32     mappedObject55;
               UNSIGNED32     mappedObject56;
               UNSIGNED32     mappedObject57;
               UNSIGNED32     mappedObject58;
               UNSIGNED32     mappedObject59;
               UNSIGNED32     mappedObject60;
               UNSIGNED32     mappedObject61;
               UNSIGNED32     mappedObject62;
               UNSIGNED32     mappedObject63;
               UNSIGNED32     mappedObject64;
               }              OD_TPDOMappingParameter_t;
/*2120      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               INTEGER64      I64;
               UNSIGNED64     U64;
               REAL32         R32;
               REAL64         R64;
               DOMAIN         domain;
               }              OD_testVar_t;
/*2130      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               VISIBLE_STRING string[1];
               UNSIGNED64     epochTimeBaseMs;
               UNSIGNED32     epochTimeOffsetMs;
               }              OD_time_t;
/*2301      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     size;
               UNSIGNED8      axisNo;
               VISIBLE_STRING name[6];
               VISIBLE_STRING color[3];
               UNSIGNED32     map;
               UNSIGNED8      format;
               UNSIGNED8      trigger;
               INTEGER32      threshold;
               }              OD_traceConfig_t;
/*2401      */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     size;
               INTEGER32      value;
               INTEGER32      min;
               INTEGER32      max;
               DOMAIN         plot;
               UNSIGNED32     triggerTime;
               }              OD_trace_t;

/*******************************************************************************
   TYPE DEFINITIONS FOR OBJECT DICTIONARY INDEXES

   some of those are redundant with CO_SDO.h CO_ObjDicId_t <Common CiA301 object
   dictionary entries>
*******************************************************************************/
/*1000 */
        #define OD_1000_deviceType                                  0x1000

/*1001 */
        #define OD_1001_errorRegister                               0x1001

/*1002 */
        #define OD_1002_manufacturerStatusRegister                  0x1002

/*1003 */
        #define OD_1003_preDefinedErrorField                        0x1003

        #define OD_1003_0_preDefinedErrorField_maxSubIndex          0
        #define OD_1003_1_preDefinedErrorField_standardErrorField   1
        #define OD_1003_2_preDefinedErrorField_standardErrorField   2
        #define OD_1003_3_preDefinedErrorField_standardErrorField   3
        #define OD_1003_4_preDefinedErrorField_standardErrorField   4
        #define OD_1003_5_preDefinedErrorField_standardErrorField   5
        #define OD_1003_6_preDefinedErrorField_standardErrorField   6
        #define OD_1003_7_preDefinedErrorField_standardErrorField   7
        #define OD_1003_8_preDefinedErrorField_standardErrorField   8

/*1005 */
        #define OD_1005_COB_ID_SYNCMessage                          0x1005

/*1006 */
        #define OD_1006_communicationCyclePeriod                    0x1006

/*1007 */
        #define OD_1007_synchronousWindowLength                     0x1007

/*1008 */
        #define OD_1008_manufacturerDeviceName                      0x1008

/*1009 */
        #define OD_1009_manufacturerHardwareVersion                 0x1009

/*100A */
        #define OD_100A_manufacturerSoftwareVersion                 0x100A

/*100C */
        #define OD_100C_guardTime                                   0x100C

/*100D */
        #define OD_100D_lifeTimeFactor                              0x100D

/*1010 */
        #define OD_1010_storeParameters                             0x1010

        #define OD_1010_0_storeParameters_maxSubIndex               0
        #define OD_1010_1_storeParameters_saveAllParameters         1

/*1011 */
        #define OD_1011_restoreDefaultParameters                    0x1011

        #define OD_1011_0_restoreDefaultParameters_maxSubIndex      0
        #define OD_1011_1_restoreDefaultParameters_restoreAllDefaultParameters 1

/*1012 */
        #define OD_1012_COB_ID_TIME                                 0x1012

/*1013 */
        #define OD_1013_highResolutionTimeStamp                     0x1013

/*1014 */
        #define OD_1014_COB_ID_EMCY                                 0x1014

/*1015 */
        #define OD_1015_inhibitTimeEMCY                             0x1015

/*1016 */
        #define OD_1016_consumerHeartbeatTime                       0x1016

        #define OD_1016_0_consumerHeartbeatTime_maxSubIndex         0
        #define OD_1016_1_consumerHeartbeatTime_consumerHeartbeatTime 1
        #define OD_1016_2_consumerHeartbeatTime_consumerHeartbeatTime 2
        #define OD_1016_3_consumerHeartbeatTime_consumerHeartbeatTime 3
        #define OD_1016_4_consumerHeartbeatTime_consumerHeartbeatTime 4

/*1017 */
        #define OD_1017_producerHeartbeatTime                       0x1017

/*1018 */
        #define OD_1018_identity                                    0x1018

        #define OD_1018_0_identity_maxSubIndex                      0
        #define OD_1018_1_identity_vendorID                         1
        #define OD_1018_2_identity_productCode                      2
        #define OD_1018_3_identity_revisionNumber                   3
        #define OD_1018_4_identity_serialNumber                     4

/*1019 */
        #define OD_1019_synchronousCounterOverflowValue             0x1019

/*1029 */
        #define OD_1029_errorBehavior                               0x1029

        #define OD_1029_0_errorBehavior_maxSubIndex                 0
        #define OD_1029_1_errorBehavior_communication               1
        #define OD_1029_2_errorBehavior_communicationOther          2
        #define OD_1029_3_errorBehavior_communicationPassive        3
        #define OD_1029_4_errorBehavior_generic                     4
        #define OD_1029_5_errorBehavior_deviceProfile               5
        #define OD_1029_6_errorBehavior_manufacturerSpecific        6

/*1200 */
        #define OD_1200_SDOServerParameter                          0x1200

        #define OD_1200_0_SDOServerParameter_maxSubIndex            0
        #define OD_1200_1_SDOServerParameter_COB_IDClientToServer   1
        #define OD_1200_2_SDOServerParameter_COB_IDServerToClient   2

/*1280 */
        #define OD_1280_SDOClientParameter                          0x1280

        #define OD_1280_0_SDOClientParameter_maxSubIndex            0
        #define OD_1280_1_SDOClientParameter_COB_IDClientToServer   1
        #define OD_1280_2_SDOClientParameter_COB_IDServerToClient   2
        #define OD_1280_3_SDOClientParameter_nodeIDOfTheSDOServer   3

/*1400 */
        #define OD_1400_RPDOCommunicationParameter                  0x1400

        #define OD_1400_0_RPDOCommunicationParameter_maxSubIndex    0
        #define OD_1400_1_RPDOCommunicationParameter_COB_IDUsedByRPDO 1
        #define OD_1400_2_RPDOCommunicationParameter_transmissionType 2

/*1401 */
        #define OD_1401_RPDOCommunicationParameter                  0x1401

        #define OD_1401_0_RPDOCommunicationParameter_maxSubIndex    0
        #define OD_1401_1_RPDOCommunicationParameter_COB_IDUsedByRPDO 1
        #define OD_1401_2_RPDOCommunicationParameter_transmissionType 2

/*1402 */
        #define OD_1402_RPDOCommunicationParameter                  0x1402

        #define OD_1402_0_RPDOCommunicationParameter_maxSubIndex    0
        #define OD_1402_1_RPDOCommunicationParameter_COB_IDUsedByRPDO 1
        #define OD_1402_2_RPDOCommunicationParameter_transmissionType 2

/*1403 */
        #define OD_1403_RPDOCommunicationParameter                  0x1403

        #define OD_1403_0_RPDOCommunicationParameter_maxSubIndex    0
        #define OD_1403_1_RPDOCommunicationParameter_COB_IDUsedByRPDO 1
        #define OD_1403_2_RPDOCommunicationParameter_transmissionType 2

/*1600 */
        #define OD_1600_RPDOMappingParameter                        0x1600

        #define OD_1600_0_RPDOMappingParameter_maxSubIndex          0
        #define OD_1600_1_RPDOMappingParameter_mappedObject1        1
        #define OD_1600_2_RPDOMappingParameter_mappedObject2        2
        #define OD_1600_3_RPDOMappingParameter_mappedObject3        3
        #define OD_1600_4_RPDOMappingParameter_mappedObject4        4
        #define OD_1600_5_RPDOMappingParameter_mappedObject5        5
        #define OD_1600_6_RPDOMappingParameter_mappedObject6        6
        #define OD_1600_7_RPDOMappingParameter_mappedObject7        7
        #define OD_1600_8_RPDOMappingParameter_mappedObject8        8
        #define OD_1600_9_RPDOMappingParameter_mappedObject9        9
        #define OD_1600_10_RPDOMappingParameter_mappedObject10      10
        #define OD_1600_11_RPDOMappingParameter_mappedObject11      11
        #define OD_1600_12_RPDOMappingParameter_mappedObject12      12
        #define OD_1600_13_RPDOMappingParameter_mappedObject13      13
        #define OD_1600_14_RPDOMappingParameter_mappedObject14      14
        #define OD_1600_15_RPDOMappingParameter_mappedObject15      15
        #define OD_1600_16_RPDOMappingParameter_mappedObject16      16
        #define OD_1600_17_RPDOMappingParameter_mappedObject17      17
        #define OD_1600_18_RPDOMappingParameter_mappedObject18      18
        #define OD_1600_19_RPDOMappingParameter_mappedObject19      19
        #define OD_1600_20_RPDOMappingParameter_mappedObject20      20
        #define OD_1600_21_RPDOMappingParameter_mappedObject21      21
        #define OD_1600_22_RPDOMappingParameter_mappedObject22      22
        #define OD_1600_23_RPDOMappingParameter_mappedObject23      23
        #define OD_1600_24_RPDOMappingParameter_mappedObject24      24
        #define OD_1600_25_RPDOMappingParameter_mappedObject25      25
        #define OD_1600_26_RPDOMappingParameter_mappedObject26      26
        #define OD_1600_27_RPDOMappingParameter_mappedObject27      27
        #define OD_1600_28_RPDOMappingParameter_mappedObject28      28
        #define OD_1600_29_RPDOMappingParameter_mappedObject29      29
        #define OD_1600_30_RPDOMappingParameter_mappedObject30      30
        #define OD_1600_31_RPDOMappingParameter_mappedObject31      31
        #define OD_1600_32_RPDOMappingParameter_mappedObject32      32
        #define OD_1600_33_RPDOMappingParameter_mappedObject33      33
        #define OD_1600_34_RPDOMappingParameter_mappedObject34      34
        #define OD_1600_35_RPDOMappingParameter_mappedObject35      35
        #define OD_1600_36_RPDOMappingParameter_mappedObject36      36
        #define OD_1600_37_RPDOMappingParameter_mappedObject37      37
        #define OD_1600_38_RPDOMappingParameter_mappedObject38      38
        #define OD_1600_39_RPDOMappingParameter_mappedObject39      39
        #define OD_1600_40_RPDOMappingParameter_mappedObject40      40
        #define OD_1600_41_RPDOMappingParameter_mappedObject41      41
        #define OD_1600_42_RPDOMappingParameter_mappedObject42      42
        #define OD_1600_43_RPDOMappingParameter_mappedObject43      43
        #define OD_1600_44_RPDOMappingParameter_mappedObject44      44
        #define OD_1600_45_RPDOMappingParameter_mappedObject45      45
        #define OD_1600_46_RPDOMappingParameter_mappedObject46      46
        #define OD_1600_47_RPDOMappingParameter_mappedObject47      47
        #define OD_1600_48_RPDOMappingParameter_mappedObject48      48
        #define OD_1600_49_RPDOMappingParameter_mappedObject49      49
        #define OD_1600_50_RPDOMappingParameter_mappedObject50      50
        #define OD_1600_51_RPDOMappingParameter_mappedObject51      51
        #define OD_1600_52_RPDOMappingParameter_mappedObject52      52
        #define OD_1600_53_RPDOMappingParameter_mappedObject53      53
        #define OD_1600_54_RPDOMappingParameter_mappedObject54      54
        #define OD_1600_55_RPDOMappingParameter_mappedObject55      55
        #define OD_1600_56_RPDOMappingParameter_mappedObject56      56
        #define OD_1600_57_RPDOMappingParameter_mappedObject57      57
        #define OD_1600_58_RPDOMappingParameter_mappedObject58      58
        #define OD_1600_59_RPDOMappingParameter_mappedObject59      59
        #define OD_1600_60_RPDOMappingParameter_mappedObject60      60
        #define OD_1600_61_RPDOMappingParameter_mappedObject61      61
        #define OD_1600_62_RPDOMappingParameter_mappedObject62      62
        #define OD_1600_63_RPDOMappingParameter_mappedObject63      63
        #define OD_1600_64_RPDOMappingParameter_mappedObject64      64

/*1601 */
        #define OD_1601_RPDOMappingParameter                        0x1601

        #define OD_1601_0_RPDOMappingParameter_maxSubIndex          0
        #define OD_1601_1_RPDOMappingParameter_mappedObject1        1
        #define OD_1601_2_RPDOMappingParameter_mappedObject2        2
        #define OD_1601_3_RPDOMappingParameter_mappedObject3        3
        #define OD_1601_4_RPDOMappingParameter_mappedObject4        4
        #define OD_1601_5_RPDOMappingParameter_mappedObject5        5
        #define OD_1601_6_RPDOMappingParameter_mappedObject6        6
        #define OD_1601_7_RPDOMappingParameter_mappedObject7        7
        #define OD_1601_8_RPDOMappingParameter_mappedObject8        8
        #define OD_1601_9_RPDOMappingParameter_mappedObject9        9
        #define OD_1601_10_RPDOMappingParameter_mappedObject10      10
        #define OD_1601_11_RPDOMappingParameter_mappedObject11      11
        #define OD_1601_12_RPDOMappingParameter_mappedObject12      12
        #define OD_1601_13_RPDOMappingParameter_mappedObject13      13
        #define OD_1601_14_RPDOMappingParameter_mappedObject14      14
        #define OD_1601_15_RPDOMappingParameter_mappedObject15      15
        #define OD_1601_16_RPDOMappingParameter_mappedObject16      16
        #define OD_1601_17_RPDOMappingParameter_mappedObject17      17
        #define OD_1601_18_RPDOMappingParameter_mappedObject18      18
        #define OD_1601_19_RPDOMappingParameter_mappedObject19      19
        #define OD_1601_20_RPDOMappingParameter_mappedObject20      20
        #define OD_1601_21_RPDOMappingParameter_mappedObject21      21
        #define OD_1601_22_RPDOMappingParameter_mappedObject22      22
        #define OD_1601_23_RPDOMappingParameter_mappedObject23      23
        #define OD_1601_24_RPDOMappingParameter_mappedObject24      24
        #define OD_1601_25_RPDOMappingParameter_mappedObject25      25
        #define OD_1601_26_RPDOMappingParameter_mappedObject26      26
        #define OD_1601_27_RPDOMappingParameter_mappedObject27      27
        #define OD_1601_28_RPDOMappingParameter_mappedObject28      28
        #define OD_1601_29_RPDOMappingParameter_mappedObject29      29
        #define OD_1601_30_RPDOMappingParameter_mappedObject30      30
        #define OD_1601_31_RPDOMappingParameter_mappedObject31      31
        #define OD_1601_32_RPDOMappingParameter_mappedObject32      32
        #define OD_1601_33_RPDOMappingParameter_mappedObject33      33
        #define OD_1601_34_RPDOMappingParameter_mappedObject34      34
        #define OD_1601_35_RPDOMappingParameter_mappedObject35      35
        #define OD_1601_36_RPDOMappingParameter_mappedObject36      36
        #define OD_1601_37_RPDOMappingParameter_mappedObject37      37
        #define OD_1601_38_RPDOMappingParameter_mappedObject38      38
        #define OD_1601_39_RPDOMappingParameter_mappedObject39      39
        #define OD_1601_40_RPDOMappingParameter_mappedObject40      40
        #define OD_1601_41_RPDOMappingParameter_mappedObject41      41
        #define OD_1601_42_RPDOMappingParameter_mappedObject42      42
        #define OD_1601_43_RPDOMappingParameter_mappedObject43      43
        #define OD_1601_44_RPDOMappingParameter_mappedObject44      44
        #define OD_1601_45_RPDOMappingParameter_mappedObject45      45
        #define OD_1601_46_RPDOMappingParameter_mappedObject46      46
        #define OD_1601_47_RPDOMappingParameter_mappedObject47      47
        #define OD_1601_48_RPDOMappingParameter_mappedObject48      48
        #define OD_1601_49_RPDOMappingParameter_mappedObject49      49
        #define OD_1601_50_RPDOMappingParameter_mappedObject50      50
        #define OD_1601_51_RPDOMappingParameter_mappedObject51      51
        #define OD_1601_52_RPDOMappingParameter_mappedObject52      52
        #define OD_1601_53_RPDOMappingParameter_mappedObject53      53
        #define OD_1601_54_RPDOMappingParameter_mappedObject54      54
        #define OD_1601_55_RPDOMappingParameter_mappedObject55      55
        #define OD_1601_56_RPDOMappingParameter_mappedObject56      56
        #define OD_1601_57_RPDOMappingParameter_mappedObject57      57
        #define OD_1601_58_RPDOMappingParameter_mappedObject58      58
        #define OD_1601_59_RPDOMappingParameter_mappedObject59      59
        #define OD_1601_60_RPDOMappingParameter_mappedObject60      60
        #define OD_1601_61_RPDOMappingParameter_mappedObject61      61
        #define OD_1601_62_RPDOMappingParameter_mappedObject62      62
        #define OD_1601_63_RPDOMappingParameter_mappedObject63      63
        #define OD_1601_64_RPDOMappingParameter_mappedObject64      64

/*1602 */
        #define OD_1602_RPDOMappingParameter                        0x1602

        #define OD_1602_0_RPDOMappingParameter_maxSubIndex          0
        #define OD_1602_1_RPDOMappingParameter_mappedObject1        1
        #define OD_1602_2_RPDOMappingParameter_mappedObject2        2
        #define OD_1602_3_RPDOMappingParameter_mappedObject3        3
        #define OD_1602_4_RPDOMappingParameter_mappedObject4        4
        #define OD_1602_5_RPDOMappingParameter_mappedObject5        5
        #define OD_1602_6_RPDOMappingParameter_mappedObject6        6
        #define OD_1602_7_RPDOMappingParameter_mappedObject7        7
        #define OD_1602_8_RPDOMappingParameter_mappedObject8        8
        #define OD_1602_9_RPDOMappingParameter_mappedObject9        9
        #define OD_1602_10_RPDOMappingParameter_mappedObject10      10
        #define OD_1602_11_RPDOMappingParameter_mappedObject11      11
        #define OD_1602_12_RPDOMappingParameter_mappedObject12      12
        #define OD_1602_13_RPDOMappingParameter_mappedObject13      13
        #define OD_1602_14_RPDOMappingParameter_mappedObject14      14
        #define OD_1602_15_RPDOMappingParameter_mappedObject15      15
        #define OD_1602_16_RPDOMappingParameter_mappedObject16      16
        #define OD_1602_17_RPDOMappingParameter_mappedObject17      17
        #define OD_1602_18_RPDOMappingParameter_mappedObject18      18
        #define OD_1602_19_RPDOMappingParameter_mappedObject19      19
        #define OD_1602_20_RPDOMappingParameter_mappedObject20      20
        #define OD_1602_21_RPDOMappingParameter_mappedObject21      21
        #define OD_1602_22_RPDOMappingParameter_mappedObject22      22
        #define OD_1602_23_RPDOMappingParameter_mappedObject23      23
        #define OD_1602_24_RPDOMappingParameter_mappedObject24      24
        #define OD_1602_25_RPDOMappingParameter_mappedObject25      25
        #define OD_1602_26_RPDOMappingParameter_mappedObject26      26
        #define OD_1602_27_RPDOMappingParameter_mappedObject27      27
        #define OD_1602_28_RPDOMappingParameter_mappedObject28      28
        #define OD_1602_29_RPDOMappingParameter_mappedObject29      29
        #define OD_1602_30_RPDOMappingParameter_mappedObject30      30
        #define OD_1602_31_RPDOMappingParameter_mappedObject31      31
        #define OD_1602_32_RPDOMappingParameter_mappedObject32      32
        #define OD_1602_33_RPDOMappingParameter_mappedObject33      33
        #define OD_1602_34_RPDOMappingParameter_mappedObject34      34
        #define OD_1602_35_RPDOMappingParameter_mappedObject35      35
        #define OD_1602_36_RPDOMappingParameter_mappedObject36      36
        #define OD_1602_37_RPDOMappingParameter_mappedObject37      37
        #define OD_1602_38_RPDOMappingParameter_mappedObject38      38
        #define OD_1602_39_RPDOMappingParameter_mappedObject39      39
        #define OD_1602_40_RPDOMappingParameter_mappedObject40      40
        #define OD_1602_41_RPDOMappingParameter_mappedObject41      41
        #define OD_1602_42_RPDOMappingParameter_mappedObject42      42
        #define OD_1602_43_RPDOMappingParameter_mappedObject43      43
        #define OD_1602_44_RPDOMappingParameter_mappedObject44      44
        #define OD_1602_45_RPDOMappingParameter_mappedObject45      45
        #define OD_1602_46_RPDOMappingParameter_mappedObject46      46
        #define OD_1602_47_RPDOMappingParameter_mappedObject47      47
        #define OD_1602_48_RPDOMappingParameter_mappedObject48      48
        #define OD_1602_49_RPDOMappingParameter_mappedObject49      49
        #define OD_1602_50_RPDOMappingParameter_mappedObject50      50
        #define OD_1602_51_RPDOMappingParameter_mappedObject51      51
        #define OD_1602_52_RPDOMappingParameter_mappedObject52      52
        #define OD_1602_53_RPDOMappingParameter_mappedObject53      53
        #define OD_1602_54_RPDOMappingParameter_mappedObject54      54
        #define OD_1602_55_RPDOMappingParameter_mappedObject55      55
        #define OD_1602_56_RPDOMappingParameter_mappedObject56      56
        #define OD_1602_57_RPDOMappingParameter_mappedObject57      57
        #define OD_1602_58_RPDOMappingParameter_mappedObject58      58
        #define OD_1602_59_RPDOMappingParameter_mappedObject59      59
        #define OD_1602_60_RPDOMappingParameter_mappedObject60      60
        #define OD_1602_61_RPDOMappingParameter_mappedObject61      61
        #define OD_1602_62_RPDOMappingParameter_mappedObject62      62
        #define OD_1602_63_RPDOMappingParameter_mappedObject63      63
        #define OD_1602_64_RPDOMappingParameter_mappedObject64      64

/*1603 */
        #define OD_1603_RPDOMappingParameter                        0x1603

        #define OD_1603_0_RPDOMappingParameter_maxSubIndex          0
        #define OD_1603_1_RPDOMappingParameter_mappedObject1        1
        #define OD_1603_2_RPDOMappingParameter_mappedObject2        2
        #define OD_1603_3_RPDOMappingParameter_mappedObject3        3
        #define OD_1603_4_RPDOMappingParameter_mappedObject4        4
        #define OD_1603_5_RPDOMappingParameter_mappedObject5        5
        #define OD_1603_6_RPDOMappingParameter_mappedObject6        6
        #define OD_1603_7_RPDOMappingParameter_mappedObject7        7
        #define OD_1603_8_RPDOMappingParameter_mappedObject8        8
        #define OD_1603_9_RPDOMappingParameter_mappedObject9        9
        #define OD_1603_10_RPDOMappingParameter_mappedObject10      10
        #define OD_1603_11_RPDOMappingParameter_mappedObject11      11
        #define OD_1603_12_RPDOMappingParameter_mappedObject12      12
        #define OD_1603_13_RPDOMappingParameter_mappedObject13      13
        #define OD_1603_14_RPDOMappingParameter_mappedObject14      14
        #define OD_1603_15_RPDOMappingParameter_mappedObject15      15
        #define OD_1603_16_RPDOMappingParameter_mappedObject16      16
        #define OD_1603_17_RPDOMappingParameter_mappedObject17      17
        #define OD_1603_18_RPDOMappingParameter_mappedObject18      18
        #define OD_1603_19_RPDOMappingParameter_mappedObject19      19
        #define OD_1603_20_RPDOMappingParameter_mappedObject20      20
        #define OD_1603_21_RPDOMappingParameter_mappedObject21      21
        #define OD_1603_22_RPDOMappingParameter_mappedObject22      22
        #define OD_1603_23_RPDOMappingParameter_mappedObject23      23
        #define OD_1603_24_RPDOMappingParameter_mappedObject24      24
        #define OD_1603_25_RPDOMappingParameter_mappedObject25      25
        #define OD_1603_26_RPDOMappingParameter_mappedObject26      26
        #define OD_1603_27_RPDOMappingParameter_mappedObject27      27
        #define OD_1603_28_RPDOMappingParameter_mappedObject28      28
        #define OD_1603_29_RPDOMappingParameter_mappedObject29      29
        #define OD_1603_30_RPDOMappingParameter_mappedObject30      30
        #define OD_1603_31_RPDOMappingParameter_mappedObject31      31
        #define OD_1603_32_RPDOMappingParameter_mappedObject32      32
        #define OD_1603_33_RPDOMappingParameter_mappedObject33      33
        #define OD_1603_34_RPDOMappingParameter_mappedObject34      34
        #define OD_1603_35_RPDOMappingParameter_mappedObject35      35
        #define OD_1603_36_RPDOMappingParameter_mappedObject36      36
        #define OD_1603_37_RPDOMappingParameter_mappedObject37      37
        #define OD_1603_38_RPDOMappingParameter_mappedObject38      38
        #define OD_1603_39_RPDOMappingParameter_mappedObject39      39
        #define OD_1603_40_RPDOMappingParameter_mappedObject40      40
        #define OD_1603_41_RPDOMappingParameter_mappedObject41      41
        #define OD_1603_42_RPDOMappingParameter_mappedObject42      42
        #define OD_1603_43_RPDOMappingParameter_mappedObject43      43
        #define OD_1603_44_RPDOMappingParameter_mappedObject44      44
        #define OD_1603_45_RPDOMappingParameter_mappedObject45      45
        #define OD_1603_46_RPDOMappingParameter_mappedObject46      46
        #define OD_1603_47_RPDOMappingParameter_mappedObject47      47
        #define OD_1603_48_RPDOMappingParameter_mappedObject48      48
        #define OD_1603_49_RPDOMappingParameter_mappedObject49      49
        #define OD_1603_50_RPDOMappingParameter_mappedObject50      50
        #define OD_1603_51_RPDOMappingParameter_mappedObject51      51
        #define OD_1603_52_RPDOMappingParameter_mappedObject52      52
        #define OD_1603_53_RPDOMappingParameter_mappedObject53      53
        #define OD_1603_54_RPDOMappingParameter_mappedObject54      54
        #define OD_1603_55_RPDOMappingParameter_mappedObject55      55
        #define OD_1603_56_RPDOMappingParameter_mappedObject56      56
        #define OD_1603_57_RPDOMappingParameter_mappedObject57      57
        #define OD_1603_58_RPDOMappingParameter_mappedObject58      58
        #define OD_1603_59_RPDOMappingParameter_mappedObject59      59
        #define OD_1603_60_RPDOMappingParameter_mappedObject60      60
        #define OD_1603_61_RPDOMappingParameter_mappedObject61      61
        #define OD_1603_62_RPDOMappingParameter_mappedObject62      62
        #define OD_1603_63_RPDOMappingParameter_mappedObject63      63
        #define OD_1603_64_RPDOMappingParameter_mappedObject64      64

/*1800 */
        #define OD_1800_TPDOCommunicationParameter                  0x1800

        #define OD_1800_0_TPDOCommunicationParameter_maxSubIndex    0
        #define OD_1800_1_TPDOCommunicationParameter_COB_IDUsedByTPDO 1
        #define OD_1800_2_TPDOCommunicationParameter_transmissionType 2
        #define OD_1800_3_TPDOCommunicationParameter_inhibitTime    3
        #define OD_1800_4_TPDOCommunicationParameter_compatibilityEntry 4
        #define OD_1800_5_TPDOCommunicationParameter_eventTimer     5
        #define OD_1800_6_TPDOCommunicationParameter_SYNCStartValue 6

/*1801 */
        #define OD_1801_TPDOCommunicationParameter                  0x1801

        #define OD_1801_0_TPDOCommunicationParameter_maxSubIndex    0
        #define OD_1801_1_TPDOCommunicationParameter_COB_IDUsedByTPDO 1
        #define OD_1801_2_TPDOCommunicationParameter_transmissionType 2
        #define OD_1801_3_TPDOCommunicationParameter_inhibitTime    3
        #define OD_1801_4_TPDOCommunicationParameter_compatibilityEntry 4
        #define OD_1801_5_TPDOCommunicationParameter_eventTimer     5
        #define OD_1801_6_TPDOCommunicationParameter_SYNCStartValue 6

/*1802 */
        #define OD_1802_TPDOCommunicationParameter                  0x1802

        #define OD_1802_0_TPDOCommunicationParameter_maxSubIndex    0
        #define OD_1802_1_TPDOCommunicationParameter_COB_IDUsedByTPDO 1
        #define OD_1802_2_TPDOCommunicationParameter_transmissionType 2
        #define OD_1802_3_TPDOCommunicationParameter_inhibitTime    3
        #define OD_1802_4_TPDOCommunicationParameter_compatibilityEntry 4
        #define OD_1802_5_TPDOCommunicationParameter_eventTimer     5
        #define OD_1802_6_TPDOCommunicationParameter_SYNCStartValue 6

/*1803 */
        #define OD_1803_TPDOCommunicationParameter                  0x1803

        #define OD_1803_0_TPDOCommunicationParameter_maxSubIndex    0
        #define OD_1803_1_TPDOCommunicationParameter_COB_IDUsedByTPDO 1
        #define OD_1803_2_TPDOCommunicationParameter_transmissionType 2
        #define OD_1803_3_TPDOCommunicationParameter_inhibitTime    3
        #define OD_1803_4_TPDOCommunicationParameter_compatibilityEntry 4
        #define OD_1803_5_TPDOCommunicationParameter_eventTimer     5
        #define OD_1803_6_TPDOCommunicationParameter_SYNCStartValue 6

/*1A00 */
        #define OD_1A00_TPDOMappingParameter                        0x1A00

        #define OD_1A00_0_TPDOMappingParameter_maxSubIndex          0
        #define OD_1A00_1_TPDOMappingParameter_mappedObject1        1
        #define OD_1A00_2_TPDOMappingParameter_mappedObject2        2
        #define OD_1A00_3_TPDOMappingParameter_mappedObject3        3
        #define OD_1A00_4_TPDOMappingParameter_mappedObject4        4
        #define OD_1A00_5_TPDOMappingParameter_mappedObject5        5
        #define OD_1A00_6_TPDOMappingParameter_mappedObject6        6
        #define OD_1A00_7_TPDOMappingParameter_mappedObject7        7
        #define OD_1A00_8_TPDOMappingParameter_mappedObject8        8
        #define OD_1A00_9_TPDOMappingParameter_mappedObject9        9
        #define OD_1A00_10_TPDOMappingParameter_mappedObject10      10
        #define OD_1A00_11_TPDOMappingParameter_mappedObject11      11
        #define OD_1A00_12_TPDOMappingParameter_mappedObject12      12
        #define OD_1A00_13_TPDOMappingParameter_mappedObject13      13
        #define OD_1A00_14_TPDOMappingParameter_mappedObject14      14
        #define OD_1A00_15_TPDOMappingParameter_mappedObject15      15
        #define OD_1A00_16_TPDOMappingParameter_mappedObject16      16
        #define OD_1A00_17_TPDOMappingParameter_mappedObject17      17
        #define OD_1A00_18_TPDOMappingParameter_mappedObject18      18
        #define OD_1A00_19_TPDOMappingParameter_mappedObject19      19
        #define OD_1A00_20_TPDOMappingParameter_mappedObject20      20
        #define OD_1A00_21_TPDOMappingParameter_mappedObject21      21
        #define OD_1A00_22_TPDOMappingParameter_mappedObject22      22
        #define OD_1A00_23_TPDOMappingParameter_mappedObject23      23
        #define OD_1A00_24_TPDOMappingParameter_mappedObject24      24
        #define OD_1A00_25_TPDOMappingParameter_mappedObject25      25
        #define OD_1A00_26_TPDOMappingParameter_mappedObject26      26
        #define OD_1A00_27_TPDOMappingParameter_mappedObject27      27
        #define OD_1A00_28_TPDOMappingParameter_mappedObject28      28
        #define OD_1A00_29_TPDOMappingParameter_mappedObject29      29
        #define OD_1A00_30_TPDOMappingParameter_mappedObject30      30
        #define OD_1A00_31_TPDOMappingParameter_mappedObject31      31
        #define OD_1A00_32_TPDOMappingParameter_mappedObject32      32
        #define OD_1A00_33_TPDOMappingParameter_mappedObject33      33
        #define OD_1A00_34_TPDOMappingParameter_mappedObject34      34
        #define OD_1A00_35_TPDOMappingParameter_mappedObject35      35
        #define OD_1A00_36_TPDOMappingParameter_mappedObject36      36
        #define OD_1A00_37_TPDOMappingParameter_mappedObject37      37
        #define OD_1A00_38_TPDOMappingParameter_mappedObject38      38
        #define OD_1A00_39_TPDOMappingParameter_mappedObject39      39
        #define OD_1A00_40_TPDOMappingParameter_mappedObject40      40
        #define OD_1A00_41_TPDOMappingParameter_mappedObject41      41
        #define OD_1A00_42_TPDOMappingParameter_mappedObject42      42
        #define OD_1A00_43_TPDOMappingParameter_mappedObject43      43
        #define OD_1A00_44_TPDOMappingParameter_mappedObject44      44
        #define OD_1A00_45_TPDOMappingParameter_mappedObject45      45
        #define OD_1A00_46_TPDOMappingParameter_mappedObject46      46
        #define OD_1A00_47_TPDOMappingParameter_mappedObject47      47
        #define OD_1A00_48_TPDOMappingParameter_mappedObject48      48
        #define OD_1A00_49_TPDOMappingParameter_mappedObject49      49
        #define OD_1A00_50_TPDOMappingParameter_mappedObject50      50
        #define OD_1A00_51_TPDOMappingParameter_mappedObject51      51
        #define OD_1A00_52_TPDOMappingParameter_mappedObject52      52
        #define OD_1A00_53_TPDOMappingParameter_mappedObject53      53
        #define OD_1A00_54_TPDOMappingParameter_mappedObject54      54
        #define OD_1A00_55_TPDOMappingParameter_mappedObject55      55
        #define OD_1A00_56_TPDOMappingParameter_mappedObject56      56
        #define OD_1A00_57_TPDOMappingParameter_mappedObject57      57
        #define OD_1A00_58_TPDOMappingParameter_mappedObject58      58
        #define OD_1A00_59_TPDOMappingParameter_mappedObject59      59
        #define OD_1A00_60_TPDOMappingParameter_mappedObject60      60
        #define OD_1A00_61_TPDOMappingParameter_mappedObject61      61
        #define OD_1A00_62_TPDOMappingParameter_mappedObject62      62
        #define OD_1A00_63_TPDOMappingParameter_mappedObject63      63
        #define OD_1A00_64_TPDOMappingParameter_mappedObject64      64

/*1A01 */
        #define OD_1A01_TPDOMappingParameter                        0x1A01

        #define OD_1A01_0_TPDOMappingParameter_maxSubIndex          0
        #define OD_1A01_1_TPDOMappingParameter_mappedObject1        1
        #define OD_1A01_2_TPDOMappingParameter_mappedObject2        2
        #define OD_1A01_3_TPDOMappingParameter_mappedObject3        3
        #define OD_1A01_4_TPDOMappingParameter_mappedObject4        4
        #define OD_1A01_5_TPDOMappingParameter_mappedObject5        5
        #define OD_1A01_6_TPDOMappingParameter_mappedObject6        6
        #define OD_1A01_7_TPDOMappingParameter_mappedObject7        7
        #define OD_1A01_8_TPDOMappingParameter_mappedObject8        8
        #define OD_1A01_9_TPDOMappingParameter_mappedObject9        9
        #define OD_1A01_10_TPDOMappingParameter_mappedObject10      10
        #define OD_1A01_11_TPDOMappingParameter_mappedObject11      11
        #define OD_1A01_12_TPDOMappingParameter_mappedObject12      12
        #define OD_1A01_13_TPDOMappingParameter_mappedObject13      13
        #define OD_1A01_14_TPDOMappingParameter_mappedObject14      14
        #define OD_1A01_15_TPDOMappingParameter_mappedObject15      15
        #define OD_1A01_16_TPDOMappingParameter_mappedObject16      16
        #define OD_1A01_17_TPDOMappingParameter_mappedObject17      17
        #define OD_1A01_18_TPDOMappingParameter_mappedObject18      18
        #define OD_1A01_19_TPDOMappingParameter_mappedObject19      19
        #define OD_1A01_20_TPDOMappingParameter_mappedObject20      20
        #define OD_1A01_21_TPDOMappingParameter_mappedObject21      21
        #define OD_1A01_22_TPDOMappingParameter_mappedObject22      22
        #define OD_1A01_23_TPDOMappingParameter_mappedObject23      23
        #define OD_1A01_24_TPDOMappingParameter_mappedObject24      24
        #define OD_1A01_25_TPDOMappingParameter_mappedObject25      25
        #define OD_1A01_26_TPDOMappingParameter_mappedObject26      26
        #define OD_1A01_27_TPDOMappingParameter_mappedObject27      27
        #define OD_1A01_28_TPDOMappingParameter_mappedObject28      28
        #define OD_1A01_29_TPDOMappingParameter_mappedObject29      29
        #define OD_1A01_30_TPDOMappingParameter_mappedObject30      30
        #define OD_1A01_31_TPDOMappingParameter_mappedObject31      31
        #define OD_1A01_32_TPDOMappingParameter_mappedObject32      32
        #define OD_1A01_33_TPDOMappingParameter_mappedObject33      33
        #define OD_1A01_34_TPDOMappingParameter_mappedObject34      34
        #define OD_1A01_35_TPDOMappingParameter_mappedObject35      35
        #define OD_1A01_36_TPDOMappingParameter_mappedObject36      36
        #define OD_1A01_37_TPDOMappingParameter_mappedObject37      37
        #define OD_1A01_38_TPDOMappingParameter_mappedObject38      38
        #define OD_1A01_39_TPDOMappingParameter_mappedObject39      39
        #define OD_1A01_40_TPDOMappingParameter_mappedObject40      40
        #define OD_1A01_41_TPDOMappingParameter_mappedObject41      41
        #define OD_1A01_42_TPDOMappingParameter_mappedObject42      42
        #define OD_1A01_43_TPDOMappingParameter_mappedObject43      43
        #define OD_1A01_44_TPDOMappingParameter_mappedObject44      44
        #define OD_1A01_45_TPDOMappingParameter_mappedObject45      45
        #define OD_1A01_46_TPDOMappingParameter_mappedObject46      46
        #define OD_1A01_47_TPDOMappingParameter_mappedObject47      47
        #define OD_1A01_48_TPDOMappingParameter_mappedObject48      48
        #define OD_1A01_49_TPDOMappingParameter_mappedObject49      49
        #define OD_1A01_50_TPDOMappingParameter_mappedObject50      50
        #define OD_1A01_51_TPDOMappingParameter_mappedObject51      51
        #define OD_1A01_52_TPDOMappingParameter_mappedObject52      52
        #define OD_1A01_53_TPDOMappingParameter_mappedObject53      53
        #define OD_1A01_54_TPDOMappingParameter_mappedObject54      54
        #define OD_1A01_55_TPDOMappingParameter_mappedObject55      55
        #define OD_1A01_56_TPDOMappingParameter_mappedObject56      56
        #define OD_1A01_57_TPDOMappingParameter_mappedObject57      57
        #define OD_1A01_58_TPDOMappingParameter_mappedObject58      58
        #define OD_1A01_59_TPDOMappingParameter_mappedObject59      59
        #define OD_1A01_60_TPDOMappingParameter_mappedObject60      60
        #define OD_1A01_61_TPDOMappingParameter_mappedObject61      61
        #define OD_1A01_62_TPDOMappingParameter_mappedObject62      62
        #define OD_1A01_63_TPDOMappingParameter_mappedObject63      63
        #define OD_1A01_64_TPDOMappingParameter_mappedObject64      64

/*1A02 */
        #define OD_1A02_TPDOMappingParameter                        0x1A02

        #define OD_1A02_0_TPDOMappingParameter_maxSubIndex          0
        #define OD_1A02_1_TPDOMappingParameter_mappedObject1        1
        #define OD_1A02_2_TPDOMappingParameter_mappedObject2        2
        #define OD_1A02_3_TPDOMappingParameter_mappedObject3        3
        #define OD_1A02_4_TPDOMappingParameter_mappedObject4        4
        #define OD_1A02_5_TPDOMappingParameter_mappedObject5        5
        #define OD_1A02_6_TPDOMappingParameter_mappedObject6        6
        #define OD_1A02_7_TPDOMappingParameter_mappedObject7        7
        #define OD_1A02_8_TPDOMappingParameter_mappedObject8        8
        #define OD_1A02_9_TPDOMappingParameter_mappedObject9        9
        #define OD_1A02_10_TPDOMappingParameter_mappedObject10      10
        #define OD_1A02_11_TPDOMappingParameter_mappedObject11      11
        #define OD_1A02_12_TPDOMappingParameter_mappedObject12      12
        #define OD_1A02_13_TPDOMappingParameter_mappedObject13      13
        #define OD_1A02_14_TPDOMappingParameter_mappedObject14      14
        #define OD_1A02_15_TPDOMappingParameter_mappedObject15      15
        #define OD_1A02_16_TPDOMappingParameter_mappedObject16      16
        #define OD_1A02_17_TPDOMappingParameter_mappedObject17      17
        #define OD_1A02_18_TPDOMappingParameter_mappedObject18      18
        #define OD_1A02_19_TPDOMappingParameter_mappedObject19      19
        #define OD_1A02_20_TPDOMappingParameter_mappedObject20      20
        #define OD_1A02_21_TPDOMappingParameter_mappedObject21      21
        #define OD_1A02_22_TPDOMappingParameter_mappedObject22      22
        #define OD_1A02_23_TPDOMappingParameter_mappedObject23      23
        #define OD_1A02_24_TPDOMappingParameter_mappedObject24      24
        #define OD_1A02_25_TPDOMappingParameter_mappedObject25      25
        #define OD_1A02_26_TPDOMappingParameter_mappedObject26      26
        #define OD_1A02_27_TPDOMappingParameter_mappedObject27      27
        #define OD_1A02_28_TPDOMappingParameter_mappedObject28      28
        #define OD_1A02_29_TPDOMappingParameter_mappedObject29      29
        #define OD_1A02_30_TPDOMappingParameter_mappedObject30      30
        #define OD_1A02_31_TPDOMappingParameter_mappedObject31      31
        #define OD_1A02_32_TPDOMappingParameter_mappedObject32      32
        #define OD_1A02_33_TPDOMappingParameter_mappedObject33      33
        #define OD_1A02_34_TPDOMappingParameter_mappedObject34      34
        #define OD_1A02_35_TPDOMappingParameter_mappedObject35      35
        #define OD_1A02_36_TPDOMappingParameter_mappedObject36      36
        #define OD_1A02_37_TPDOMappingParameter_mappedObject37      37
        #define OD_1A02_38_TPDOMappingParameter_mappedObject38      38
        #define OD_1A02_39_TPDOMappingParameter_mappedObject39      39
        #define OD_1A02_40_TPDOMappingParameter_mappedObject40      40
        #define OD_1A02_41_TPDOMappingParameter_mappedObject41      41
        #define OD_1A02_42_TPDOMappingParameter_mappedObject42      42
        #define OD_1A02_43_TPDOMappingParameter_mappedObject43      43
        #define OD_1A02_44_TPDOMappingParameter_mappedObject44      44
        #define OD_1A02_45_TPDOMappingParameter_mappedObject45      45
        #define OD_1A02_46_TPDOMappingParameter_mappedObject46      46
        #define OD_1A02_47_TPDOMappingParameter_mappedObject47      47
        #define OD_1A02_48_TPDOMappingParameter_mappedObject48      48
        #define OD_1A02_49_TPDOMappingParameter_mappedObject49      49
        #define OD_1A02_50_TPDOMappingParameter_mappedObject50      50
        #define OD_1A02_51_TPDOMappingParameter_mappedObject51      51
        #define OD_1A02_52_TPDOMappingParameter_mappedObject52      52
        #define OD_1A02_53_TPDOMappingParameter_mappedObject53      53
        #define OD_1A02_54_TPDOMappingParameter_mappedObject54      54
        #define OD_1A02_55_TPDOMappingParameter_mappedObject55      55
        #define OD_1A02_56_TPDOMappingParameter_mappedObject56      56
        #define OD_1A02_57_TPDOMappingParameter_mappedObject57      57
        #define OD_1A02_58_TPDOMappingParameter_mappedObject58      58
        #define OD_1A02_59_TPDOMappingParameter_mappedObject59      59
        #define OD_1A02_60_TPDOMappingParameter_mappedObject60      60
        #define OD_1A02_61_TPDOMappingParameter_mappedObject61      61
        #define OD_1A02_62_TPDOMappingParameter_mappedObject62      62
        #define OD_1A02_63_TPDOMappingParameter_mappedObject63      63
        #define OD_1A02_64_TPDOMappingParameter_mappedObject64      64

/*1A03 */
        #define OD_1A03_TPDOMappingParameter                        0x1A03

        #define OD_1A03_0_TPDOMappingParameter_maxSubIndex          0
        #define OD_1A03_1_TPDOMappingParameter_mappedObject1        1
        #define OD_1A03_2_TPDOMappingParameter_mappedObject2        2
        #define OD_1A03_3_TPDOMappingParameter_mappedObject3        3
        #define OD_1A03_4_TPDOMappingParameter_mappedObject4        4
        #define OD_1A03_5_TPDOMappingParameter_mappedObject5        5
        #define OD_1A03_6_TPDOMappingParameter_mappedObject6        6
        #define OD_1A03_7_TPDOMappingParameter_mappedObject7        7
        #define OD_1A03_8_TPDOMappingParameter_mappedObject8        8
        #define OD_1A03_9_TPDOMappingParameter_mappedObject9        9
        #define OD_1A03_10_TPDOMappingParameter_mappedObject10      10
        #define OD_1A03_11_TPDOMappingParameter_mappedObject11      11
        #define OD_1A03_12_TPDOMappingParameter_mappedObject12      12
        #define OD_1A03_13_TPDOMappingParameter_mappedObject13      13
        #define OD_1A03_14_TPDOMappingParameter_mappedObject14      14
        #define OD_1A03_15_TPDOMappingParameter_mappedObject15      15
        #define OD_1A03_16_TPDOMappingParameter_mappedObject16      16
        #define OD_1A03_17_TPDOMappingParameter_mappedObject17      17
        #define OD_1A03_18_TPDOMappingParameter_mappedObject18      18
        #define OD_1A03_19_TPDOMappingParameter_mappedObject19      19
        #define OD_1A03_20_TPDOMappingParameter_mappedObject20      20
        #define OD_1A03_21_TPDOMappingParameter_mappedObject21      21
        #define OD_1A03_22_TPDOMappingParameter_mappedObject22      22
        #define OD_1A03_23_TPDOMappingParameter_mappedObject23      23
        #define OD_1A03_24_TPDOMappingParameter_mappedObject24      24
        #define OD_1A03_25_TPDOMappingParameter_mappedObject25      25
        #define OD_1A03_26_TPDOMappingParameter_mappedObject26      26
        #define OD_1A03_27_TPDOMappingParameter_mappedObject27      27
        #define OD_1A03_28_TPDOMappingParameter_mappedObject28      28
        #define OD_1A03_29_TPDOMappingParameter_mappedObject29      29
        #define OD_1A03_30_TPDOMappingParameter_mappedObject30      30
        #define OD_1A03_31_TPDOMappingParameter_mappedObject31      31
        #define OD_1A03_32_TPDOMappingParameter_mappedObject32      32
        #define OD_1A03_33_TPDOMappingParameter_mappedObject33      33
        #define OD_1A03_34_TPDOMappingParameter_mappedObject34      34
        #define OD_1A03_35_TPDOMappingParameter_mappedObject35      35
        #define OD_1A03_36_TPDOMappingParameter_mappedObject36      36
        #define OD_1A03_37_TPDOMappingParameter_mappedObject37      37
        #define OD_1A03_38_TPDOMappingParameter_mappedObject38      38
        #define OD_1A03_39_TPDOMappingParameter_mappedObject39      39
        #define OD_1A03_40_TPDOMappingParameter_mappedObject40      40
        #define OD_1A03_41_TPDOMappingParameter_mappedObject41      41
        #define OD_1A03_42_TPDOMappingParameter_mappedObject42      42
        #define OD_1A03_43_TPDOMappingParameter_mappedObject43      43
        #define OD_1A03_44_TPDOMappingParameter_mappedObject44      44
        #define OD_1A03_45_TPDOMappingParameter_mappedObject45      45
        #define OD_1A03_46_TPDOMappingParameter_mappedObject46      46
        #define OD_1A03_47_TPDOMappingParameter_mappedObject47      47
        #define OD_1A03_48_TPDOMappingParameter_mappedObject48      48
        #define OD_1A03_49_TPDOMappingParameter_mappedObject49      49
        #define OD_1A03_50_TPDOMappingParameter_mappedObject50      50
        #define OD_1A03_51_TPDOMappingParameter_mappedObject51      51
        #define OD_1A03_52_TPDOMappingParameter_mappedObject52      52
        #define OD_1A03_53_TPDOMappingParameter_mappedObject53      53
        #define OD_1A03_54_TPDOMappingParameter_mappedObject54      54
        #define OD_1A03_55_TPDOMappingParameter_mappedObject55      55
        #define OD_1A03_56_TPDOMappingParameter_mappedObject56      56
        #define OD_1A03_57_TPDOMappingParameter_mappedObject57      57
        #define OD_1A03_58_TPDOMappingParameter_mappedObject58      58
        #define OD_1A03_59_TPDOMappingParameter_mappedObject59      59
        #define OD_1A03_60_TPDOMappingParameter_mappedObject60      60
        #define OD_1A03_61_TPDOMappingParameter_mappedObject61      61
        #define OD_1A03_62_TPDOMappingParameter_mappedObject62      62
        #define OD_1A03_63_TPDOMappingParameter_mappedObject63      63
        #define OD_1A03_64_TPDOMappingParameter_mappedObject64      64

/*1F80 */
        #define OD_1F80_NMTStartup                                  0x1F80

/*2100 */
        #define OD_2100_errorStatusBits                             0x2100

/*2101 */
        #define OD_2101_CANNodeID                                   0x2101

/*2102 */
        #define OD_2102_CANBitRate                                  0x2102

/*2103 */
        #define OD_2103_SYNCCounter                                 0x2103

/*2104 */
        #define OD_2104_SYNCTime                                    0x2104

/*2106 */
        #define OD_2106_powerOnCounter                              0x2106

/*2107 */
        #define OD_2107_performance                                 0x2107

        #define OD_2107_0_performance_maxSubIndex                   0
        #define OD_2107_1_performance_cyclesPerSecond               1
        #define OD_2107_2_performance_timerCycleTime                2
        #define OD_2107_3_performance_timerCycleMaxTime             3
        #define OD_2107_4_performance_mainCycleTime                 4
        #define OD_2107_5_performance_mainCycleMaxTime              5

/*2108 */
        #define OD_2108_temperature                                 0x2108

        #define OD_2108_0_temperature_maxSubIndex                   0
        #define OD_2108_1_temperature_mainPCB                       1

/*2109 */
        #define OD_2109_voltage                                     0x2109

        #define OD_2109_0_voltage_maxSubIndex                       0
        #define OD_2109_1_voltage_mainPCBSupply                     1

/*2110 */
        #define OD_2110_variableInt32                               0x2110

        #define OD_2110_0_variableInt32_maxSubIndex                 0
        #define OD_2110_1_variableInt32_int32                       1
        #define OD_2110_2_variableInt32_int32                       2
        #define OD_2110_3_variableInt32_int32                       3
        #define OD_2110_4_variableInt32_int32                       4
        #define OD_2110_5_variableInt32_int32                       5
        #define OD_2110_6_variableInt32_int32                       6
        #define OD_2110_7_variableInt32_int32                       7
        #define OD_2110_8_variableInt32_int32                       8
        #define OD_2110_9_variableInt32_int32                       9
        #define OD_2110_10_variableInt32_int32                      10
        #define OD_2110_11_variableInt32_int32                      11
        #define OD_2110_12_variableInt32_int32                      12
        #define OD_2110_13_variableInt32_int32                      13
        #define OD_2110_14_variableInt32_int32                      14
        #define OD_2110_15_variableInt32_int32                      15
        #define OD_2110_16_variableInt32_int32                      16

/*2111 */
        #define OD_2111_variableROM_Int32                           0x2111

        #define OD_2111_0_variableROM_Int32_maxSubIndex             0
        #define OD_2111_1_variableROM_Int32_int32                   1
        #define OD_2111_2_variableROM_Int32_int32                   2
        #define OD_2111_3_variableROM_Int32_int32                   3
        #define OD_2111_4_variableROM_Int32_int32                   4
        #define OD_2111_5_variableROM_Int32_int32                   5
        #define OD_2111_6_variableROM_Int32_int32                   6
        #define OD_2111_7_variableROM_Int32_int32                   7
        #define OD_2111_8_variableROM_Int32_int32                   8
        #define OD_2111_9_variableROM_Int32_int32                   9
        #define OD_2111_10_variableROM_Int32_int32                  10
        #define OD_2111_11_variableROM_Int32_int32                  11
        #define OD_2111_12_variableROM_Int32_int32                  12
        #define OD_2111_13_variableROM_Int32_int32                  13
        #define OD_2111_14_variableROM_Int32_int32                  14
        #define OD_2111_15_variableROM_Int32_int32                  15
        #define OD_2111_16_variableROM_Int32_int32                  16

/*2112 */
        #define OD_2112_variableNV_Int32                            0x2112

        #define OD_2112_0_variableNV_Int32_maxSubIndex              0
        #define OD_2112_1_variableNV_Int32_int32                    1
        #define OD_2112_2_variableNV_Int32_int32                    2
        #define OD_2112_3_variableNV_Int32_int32                    3
        #define OD_2112_4_variableNV_Int32_int32                    4
        #define OD_2112_5_variableNV_Int32_int32                    5
        #define OD_2112_6_variableNV_Int32_int32                    6
        #define OD_2112_7_variableNV_Int32_int32                    7
        #define OD_2112_8_variableNV_Int32_int32                    8
        #define OD_2112_9_variableNV_Int32_int32                    9
        #define OD_2112_10_variableNV_Int32_int32                   10
        #define OD_2112_11_variableNV_Int32_int32                   11
        #define OD_2112_12_variableNV_Int32_int32                   12
        #define OD_2112_13_variableNV_Int32_int32                   13
        #define OD_2112_14_variableNV_Int32_int32                   14
        #define OD_2112_15_variableNV_Int32_int32                   15
        #define OD_2112_16_variableNV_Int32_int32                   16

/*2120 */
        #define OD_2120_testVar                                     0x2120

        #define OD_2120_0_testVar_maxSubIndex                       0
        #define OD_2120_1_testVar_I64                               1
        #define OD_2120_2_testVar_U64                               2
        #define OD_2120_3_testVar_R32                               3
        #define OD_2120_4_testVar_R64                               4
        #define OD_2120_5_testVar_domain                            5

/*2130 */
        #define OD_2130_time                                        0x2130

        #define OD_2130_0_time_maxSubIndex                          0
        #define OD_2130_1_time_string                               1
        #define OD_2130_2_time_epochTimeBaseMs                      2
        #define OD_2130_3_time_epochTimeOffsetMs                    3

/*2301 */
        #define OD_2301_traceConfig                                 0x2301

        #define OD_2301_0_traceConfig_maxSubIndex                   0
        #define OD_2301_1_traceConfig_size                          1
        #define OD_2301_2_traceConfig_axisNo                        2
        #define OD_2301_3_traceConfig_name                          3
        #define OD_2301_4_traceConfig_color                         4
        #define OD_2301_5_traceConfig_map                           5
        #define OD_2301_6_traceConfig_format                        6
        #define OD_2301_7_traceConfig_trigger                       7
        #define OD_2301_8_traceConfig_threshold                     8

/*2302 */
        #define OD_2302_traceConfig                                 0x2302

        #define OD_2302_0_traceConfig_maxSubIndex                   0
        #define OD_2302_1_traceConfig_size                          1
        #define OD_2302_2_traceConfig_axisNo                        2
        #define OD_2302_3_traceConfig_name                          3
        #define OD_2302_4_traceConfig_color                         4
        #define OD_2302_5_traceConfig_map                           5
        #define OD_2302_6_traceConfig_format                        6
        #define OD_2302_7_traceConfig_trigger                       7
        #define OD_2302_8_traceConfig_threshold                     8

/*2400 */
        #define OD_2400_traceEnable                                 0x2400

/*2401 */
        #define OD_2401_trace                                       0x2401

        #define OD_2401_0_trace_maxSubIndex                         0
        #define OD_2401_1_trace_size                                1
        #define OD_2401_2_trace_value                               2
        #define OD_2401_3_trace_min                                 3
        #define OD_2401_4_trace_max                                 4
        #define OD_2401_5_trace_plot                                5
        #define OD_2401_6_trace_triggerTime                         6

/*2402 */
        #define OD_2402_trace                                       0x2402

        #define OD_2402_0_trace_maxSubIndex                         0
        #define OD_2402_1_trace_size                                1
        #define OD_2402_2_trace_value                               2
        #define OD_2402_3_trace_min                                 3
        #define OD_2402_4_trace_max                                 4
        #define OD_2402_5_trace_plot                                5
        #define OD_2402_6_trace_triggerTime                         6

/*6000 */
        #define OD_6000_readInput8Bit                               0x6000

        #define OD_6000_0_readInput8Bit_maxSubIndex                 0
        #define OD_6000_1_readInput8Bit_input                       1
        #define OD_6000_2_readInput8Bit_input                       2
        #define OD_6000_3_readInput8Bit_input                       3
        #define OD_6000_4_readInput8Bit_input                       4
        #define OD_6000_5_readInput8Bit_input                       5
        #define OD_6000_6_readInput8Bit_input                       6
        #define OD_6000_7_readInput8Bit_input                       7
        #define OD_6000_8_readInput8Bit_input                       8

/*6200 */
        #define OD_6200_writeOutput8Bit                             0x6200

        #define OD_6200_0_writeOutput8Bit_maxSubIndex               0
        #define OD_6200_1_writeOutput8Bit_output                    1
        #define OD_6200_2_writeOutput8Bit_output                    2
        #define OD_6200_3_writeOutput8Bit_output                    3
        #define OD_6200_4_writeOutput8Bit_output                    4
        #define OD_6200_5_writeOutput8Bit_output                    5
        #define OD_6200_6_writeOutput8Bit_output                    6
        #define OD_6200_7_writeOutput8Bit_output                    7
        #define OD_6200_8_writeOutput8Bit_output                    8

/*6401 */
        #define OD_6401_readAnalogueInput16Bit                      0x6401

        #define OD_6401_0_readAnalogueInput16Bit_maxSubIndex        0
        #define OD_6401_1_readAnalogueInput16Bit_input              1
        #define OD_6401_2_readAnalogueInput16Bit_input              2
        #define OD_6401_3_readAnalogueInput16Bit_input              3
        #define OD_6401_4_readAnalogueInput16Bit_input              4
        #define OD_6401_5_readAnalogueInput16Bit_input              5
        #define OD_6401_6_readAnalogueInput16Bit_input              6
        #define OD_6401_7_readAnalogueInput16Bit_input              7
        #define OD_6401_8_readAnalogueInput16Bit_input              8
        #define OD_6401_9_readAnalogueInput16Bit_input              9
        #define OD_6401_10_readAnalogueInput16Bit_input             10
        #define OD_6401_11_readAnalogueInput16Bit_input             11
        #define OD_6401_12_readAnalogueInput16Bit_input             12

/*6411 */
        #define OD_6411_writeAnalogueOutput16Bit                    0x6411

        #define OD_6411_0_writeAnalogueOutput16Bit_maxSubIndex      0
        #define OD_6411_1_writeAnalogueOutput16Bit_output           1
        #define OD_6411_2_writeAnalogueOutput16Bit_output           2
        #define OD_6411_3_writeAnalogueOutput16Bit_output           3
        #define OD_6411_4_writeAnalogueOutput16Bit_output           4
        #define OD_6411_5_writeAnalogueOutput16Bit_output           5
        #define OD_6411_6_writeAnalogueOutput16Bit_output           6
        #define OD_6411_7_writeAnalogueOutput16Bit_output           7
        #define OD_6411_8_writeAnalogueOutput16Bit_output           8

/*******************************************************************************
   STRUCTURES FOR VARIABLES IN DIFFERENT MEMORY LOCATIONS
*******************************************************************************/
#define  CO_OD_FIRST_LAST_WORD     0x55 //Any value from 0x01 to 0xFE. If changed, EEPROM will be reinitialized.

/***** Structure for ROM variables ********************************************/
struct sCO_OD_ROM{
               UNSIGNED32     FirstWord;

/*100C      */ UNSIGNED16     guardTime;
/*1012      */ UNSIGNED32     COB_ID_TIME;

               UNSIGNED32     LastWord;
};

/***** Structure for RAM variables ********************************************/
struct sCO_OD_RAM{
               UNSIGNED32     FirstWord;

/*1000      */ UNSIGNED32     deviceType;
/*1001      */ UNSIGNED8      errorRegister;
/*1002      */ UNSIGNED32     manufacturerStatusRegister;
/*1003      */ UNSIGNED32      preDefinedErrorField[8];
/*1005      */ UNSIGNED32     COB_ID_SYNCMessage;
/*1006      */ UNSIGNED32     communicationCyclePeriod;
/*1007      */ UNSIGNED32     synchronousWindowLength;
/*1008      */ VISIBLE_STRING manufacturerDeviceName[11];
/*1009      */ VISIBLE_STRING manufacturerHardwareVersion[4];
/*100A      */ VISIBLE_STRING manufacturerSoftwareVersion[4];
/*100D      */ UNSIGNED8      lifeTimeFactor;
/*1010      */ UNSIGNED32      storeParameters[1];
/*1011      */ UNSIGNED32      restoreDefaultParameters[1];
/*1013      */ UNSIGNED32     highResolutionTimeStamp;
/*1014      */ UNSIGNED32     COB_ID_EMCY;
/*1015      */ UNSIGNED16     inhibitTimeEMCY;
/*1016      */ UNSIGNED32      consumerHeartbeatTime[4];
/*1017      */ UNSIGNED16     producerHeartbeatTime;
/*1018      */ OD_identity_t   identity;
/*1019      */ UNSIGNED8      synchronousCounterOverflowValue;
/*1029      */ UNSIGNED8       errorBehavior[6];
/*1200      */ OD_SDOServerParameter_t SDOServerParameter[1];
/*1280      */ OD_SDOClientParameter_t SDOClientParameter[1];
/*1400      */ OD_RPDOCommunicationParameter_t RPDOCommunicationParameter[4];
/*1600      */ OD_RPDOMappingParameter_t RPDOMappingParameter[4];
/*1800      */ OD_TPDOCommunicationParameter_t TPDOCommunicationParameter[4];
/*1A00      */ OD_TPDOMappingParameter_t TPDOMappingParameter[4];
/*1F80      */ UNSIGNED32     NMTStartup;
/*2100      */ OCTET_STRING   errorStatusBits[10];
/*2101      */ UNSIGNED8      CANNodeID;
/*2102      */ UNSIGNED16     CANBitRate;
/*2103      */ UNSIGNED16     SYNCCounter;
/*2104      */ UNSIGNED16     SYNCTime;
/*2106      */ UNSIGNED32     powerOnCounter;
/*2107      */ UNSIGNED16      performance[5];
/*2108      */ INTEGER16       temperature[1];
/*2109      */ INTEGER16       voltage[1];
/*2110      */ INTEGER32       variableInt32[16];
/*2111      */ INTEGER32       variableROM_Int32[16];
/*2112      */ INTEGER32       variableNV_Int32[16];
/*2120      */ OD_testVar_t    testVar;
/*2130      */ OD_time_t       time;
/*2301      */ OD_traceConfig_t traceConfig[2];
/*2400      */ UNSIGNED8      traceEnable;
/*2401      */ OD_trace_t      trace[2];
/*6000      */ UNSIGNED8       readInput8Bit[8];
/*6200      */ UNSIGNED8       writeOutput8Bit[8];
/*6401      */ INTEGER16       readAnalogueInput16Bit[12];
/*6411      */ INTEGER16       writeAnalogueOutput16Bit[8];

               UNSIGNED32     LastWord;
};

/***** Structure for EEPROM variables ********************************************/
struct sCO_OD_EEPROM{
               UNSIGNED32     FirstWord;


               UNSIGNED32     LastWord;
};

/***** Declaration of Object Dictionary variables *****************************/
extern struct sCO_OD_ROM CO_OD_ROM;

extern struct sCO_OD_RAM CO_OD_RAM;

extern struct sCO_OD_EEPROM CO_OD_EEPROM;

/*******************************************************************************
   ALIASES FOR OBJECT DICTIONARY VARIABLES
*******************************************************************************/
/*1000, Data Type: UNSIGNED32 */
        #define OD_deviceType                                       CO_OD_RAM.deviceType

/*1001, Data Type: UNSIGNED8 */
        #define OD_errorRegister                                    CO_OD_RAM.errorRegister

/*1002, Data Type: UNSIGNED32 */
        #define OD_manufacturerStatusRegister                       CO_OD_RAM.manufacturerStatusRegister

/*1003, Data Type: UNSIGNED32, Array[8] */
        #define OD_preDefinedErrorField                             CO_OD_RAM.preDefinedErrorField
        #define ODL_preDefinedErrorField_arrayLength                8
        #define ODA_preDefinedErrorField_standardErrorField         0

/*1005, Data Type: UNSIGNED32 */
        #define OD_COB_ID_SYNCMessage                               CO_OD_RAM.COB_ID_SYNCMessage

/*1006, Data Type: UNSIGNED32 */
        #define OD_communicationCyclePeriod                         CO_OD_RAM.communicationCyclePeriod

/*1007, Data Type: UNSIGNED32 */
        #define OD_synchronousWindowLength                          CO_OD_RAM.synchronousWindowLength

/*1008, Data Type: VISIBLE_STRING */
        #define OD_manufacturerDeviceName                           CO_OD_RAM.manufacturerDeviceName
        #define ODL_manufacturerDeviceName_stringLength             11

/*1009, Data Type: VISIBLE_STRING */
        #define OD_manufacturerHardwareVersion                      CO_OD_RAM.manufacturerHardwareVersion
        #define ODL_manufacturerHardwareVersion_stringLength        4

/*100A, Data Type: VISIBLE_STRING */
        #define OD_manufacturerSoftwareVersion                      CO_OD_RAM.manufacturerSoftwareVersion
        #define ODL_manufacturerSoftwareVersion_stringLength        4

/*100C, Data Type: UNSIGNED16 */
        #define OD_guardTime                                        CO_OD_ROM.guardTime

/*100D, Data Type: UNSIGNED8 */
        #define OD_lifeTimeFactor                                   CO_OD_RAM.lifeTimeFactor

/*1010, Data Type: UNSIGNED32, Array[1] */
        #define OD_storeParameters                                  CO_OD_RAM.storeParameters
        #define ODL_storeParameters_arrayLength                     1
        #define ODA_storeParameters_saveAllParameters               0

/*1011, Data Type: UNSIGNED32, Array[1] */
        #define OD_restoreDefaultParameters                         CO_OD_RAM.restoreDefaultParameters
        #define ODL_restoreDefaultParameters_arrayLength            1
        #define ODA_restoreDefaultParameters_restoreAllDefaultParameters 0

/*1012, Data Type: UNSIGNED32 */
        #define OD_COB_ID_TIME                                      CO_OD_ROM.COB_ID_TIME

/*1013, Data Type: UNSIGNED32 */
        #define OD_highResolutionTimeStamp                          CO_OD_RAM.highResolutionTimeStamp

/*1014, Data Type: UNSIGNED32 */
        #define OD_COB_ID_EMCY                                      CO_OD_RAM.COB_ID_EMCY

/*1015, Data Type: UNSIGNED16 */
        #define OD_inhibitTimeEMCY                                  CO_OD_RAM.inhibitTimeEMCY

/*1016, Data Type: UNSIGNED32, Array[4] */
        #define OD_consumerHeartbeatTime                            CO_OD_RAM.consumerHeartbeatTime
        #define ODL_consumerHeartbeatTime_arrayLength               4
        #define ODA_consumerHeartbeatTime_consumerHeartbeatTime     0

/*1017, Data Type: UNSIGNED16 */
        #define OD_producerHeartbeatTime                            CO_OD_RAM.producerHeartbeatTime

/*1018, Data Type: identity_t */
        #define OD_identity                                         CO_OD_RAM.identity

/*1019, Data Type: UNSIGNED8 */
        #define OD_synchronousCounterOverflowValue                  CO_OD_RAM.synchronousCounterOverflowValue

/*1029, Data Type: UNSIGNED8, Array[6] */
        #define OD_errorBehavior                                    CO_OD_RAM.errorBehavior
        #define ODL_errorBehavior_arrayLength                       6
        #define ODA_errorBehavior_communication                     0
        #define ODA_errorBehavior_communicationOther                1
        #define ODA_errorBehavior_communicationPassive              2
        #define ODA_errorBehavior_generic                           3
        #define ODA_errorBehavior_deviceProfile                     4
        #define ODA_errorBehavior_manufacturerSpecific              5

/*1200, Data Type: SDOServerParameter_t */
        #define OD_SDOServerParameter                               CO_OD_RAM.SDOServerParameter

/*1280, Data Type: SDOClientParameter_t */
        #define OD_SDOClientParameter                               CO_OD_RAM.SDOClientParameter

/*1400, Data Type: RPDOCommunicationParameter_t */
        #define OD_RPDOCommunicationParameter                       CO_OD_RAM.RPDOCommunicationParameter

/*1600, Data Type: RPDOMappingParameter_t */
        #define OD_RPDOMappingParameter                             CO_OD_RAM.RPDOMappingParameter

/*1800, Data Type: TPDOCommunicationParameter_t */
        #define OD_TPDOCommunicationParameter                       CO_OD_RAM.TPDOCommunicationParameter

/*1A00, Data Type: TPDOMappingParameter_t */
        #define OD_TPDOMappingParameter                             CO_OD_RAM.TPDOMappingParameter

/*1F80, Data Type: UNSIGNED32 */
        #define OD_NMTStartup                                       CO_OD_RAM.NMTStartup

/*2100, Data Type: OCTET_STRING */
        #define OD_errorStatusBits                                  CO_OD_RAM.errorStatusBits
        #define ODL_errorStatusBits_stringLength                    10

/*2101, Data Type: UNSIGNED8 */
        #define OD_CANNodeID                                        CO_OD_RAM.CANNodeID

/*2102, Data Type: UNSIGNED16 */
        #define OD_CANBitRate                                       CO_OD_RAM.CANBitRate

/*2103, Data Type: UNSIGNED16 */
        #define OD_SYNCCounter                                      CO_OD_RAM.SYNCCounter

/*2104, Data Type: UNSIGNED16 */
        #define OD_SYNCTime                                         CO_OD_RAM.SYNCTime

/*2106, Data Type: UNSIGNED32 */
        #define OD_powerOnCounter                                   CO_OD_RAM.powerOnCounter

/*2107, Data Type: UNSIGNED16, Array[5] */
        #define OD_performance                                      CO_OD_RAM.performance
        #define ODL_performance_arrayLength                         5
        #define ODA_performance_cyclesPerSecond                     0
        #define ODA_performance_timerCycleTime                      1
        #define ODA_performance_timerCycleMaxTime                   2
        #define ODA_performance_mainCycleTime                       3
        #define ODA_performance_mainCycleMaxTime                    4

/*2108, Data Type: INTEGER16, Array[1] */
        #define OD_temperature                                      CO_OD_RAM.temperature
        #define ODL_temperature_arrayLength                         1
        #define ODA_temperature_mainPCB                             0

/*2109, Data Type: INTEGER16, Array[1] */
        #define OD_voltage                                          CO_OD_RAM.voltage
        #define ODL_voltage_arrayLength                             1
        #define ODA_voltage_mainPCBSupply                           0

/*2110, Data Type: INTEGER32, Array[16] */
        #define OD_variableInt32                                    CO_OD_RAM.variableInt32
        #define ODL_variableInt32_arrayLength                       16
        #define ODA_variableInt32_int32                             0

/*2111, Data Type: INTEGER32, Array[16] */
        #define OD_variableROM_Int32                                CO_OD_RAM.variableROM_Int32
        #define ODL_variableROM_Int32_arrayLength                   16
        #define ODA_variableROM_Int32_int32                         0

/*2112, Data Type: INTEGER32, Array[16] */
        #define OD_variableNV_Int32                                 CO_OD_RAM.variableNV_Int32
        #define ODL_variableNV_Int32_arrayLength                    16
        #define ODA_variableNV_Int32_int32                          0

/*2120, Data Type: testVar_t */
        #define OD_testVar                                          CO_OD_RAM.testVar

/*2130, Data Type: time_t */
        #define OD_time                                             CO_OD_RAM.time

/*2301, Data Type: traceConfig_t */
        #define OD_traceConfig                                      CO_OD_RAM.traceConfig

/*2400, Data Type: UNSIGNED8 */
        #define OD_traceEnable                                      CO_OD_RAM.traceEnable

/*2401, Data Type: trace_t */
        #define OD_trace                                            CO_OD_RAM.trace

/*6000, Data Type: UNSIGNED8, Array[8] */
        #define OD_readInput8Bit                                    CO_OD_RAM.readInput8Bit
        #define ODL_readInput8Bit_arrayLength                       8
        #define ODA_readInput8Bit_input                             0

/*6200, Data Type: UNSIGNED8, Array[8] */
        #define OD_writeOutput8Bit                                  CO_OD_RAM.writeOutput8Bit
        #define ODL_writeOutput8Bit_arrayLength                     8
        #define ODA_writeOutput8Bit_output                          0

/*6401, Data Type: INTEGER16, Array[12] */
        #define OD_readAnalogueInput16Bit                           CO_OD_RAM.readAnalogueInput16Bit
        #define ODL_readAnalogueInput16Bit_arrayLength              12
        #define ODA_readAnalogueInput16Bit_input                    0

/*6411, Data Type: INTEGER16, Array[8] */
        #define OD_writeAnalogueOutput16Bit                         CO_OD_RAM.writeAnalogueOutput16Bit
        #define ODL_writeAnalogueOutput16Bit_arrayLength            8
        #define ODA_writeAnalogueOutput16Bit_output                 0

#endif
// clang-format on
