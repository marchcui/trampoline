//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'goil_alarm_verif.cpp'                         *
//                        Generated by version 1.8.0                         *
//                       march 5th, 2009, at 9h28'14"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 451
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "goil_alarm_verif.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_alarm_verif.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of routine "counters_of_alarms_defined"           *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_counters_of_alarms_defined (C_Compiler & _inLexique,
                                GGS_alarm_map   var_cas_alarms,
                                GGS_counter_map   var_cas_counters COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_counters_of_alarms_defined at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  {
    GGS_alarm_map::cEnumerator enumerator_320 (var_cas_alarms, true) ;
    const GGS_alarm_map::cElement * operand_320 = NULL ;
    while (((operand_320 = enumerator_320.nextObject ()))) {
      macroValidPointer (operand_320) ;
      GGS_lstring  var_cas_counter ;
      var_cas_counter = operand_320->mInfo.alarm.reader_counter_name (_inLexique COMMA_SOURCE_FILE_AT_LINE (17)) ;
      if ((((var_cas_counters.reader_hasKey (_inLexique, var_cas_counter.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (18)) COMMA_SOURCE_FILE_AT_LINE (18)))._operator_not ())._operator_and ((var_cas_counter.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (18)))._operator_isNotEqual (GGS_string (true, "SystemCounter")))).isBuiltAndTrue ()) {
        var_cas_counter.reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, ((GGS_string (true, "counter "))._operator_concat (var_cas_counter.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (19))))._operator_concat (GGS_string (true, " is not defined !")) COMMA_SOURCE_FILE_AT_LINE (20)) ;
      }else{
        { const GGS_autostart_obj _var_2223 = operand_320->mInfo.alarm.reader_autostart_params (_inLexique COMMA_SOURCE_FILE_AT_LINE (26)) ; // CAST instruction
          if (_var_2223.getPtr () != NULL) {
            macroValidPointer (_var_2223.getPtr ()) ;
            if (typeid (cPtr_alarm_autostart_true) == typeid (* (_var_2223.getPtr ()))) {
              const GGS_alarm_autostart_true var_cas_a (_var_2223.getPtr ()) ;
              GGS_location  var_cas_alarm_loc ;
              var_cas_alarm_loc = var_cas_a.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (28)) ;
              GGS_uint  var_cas_alarm_time ;
              var_cas_alarm_time = var_cas_a.reader_alarm_time (_inLexique COMMA_SOURCE_FILE_AT_LINE (29)).reader_uint64 (_inLexique COMMA_SOURCE_FILE_AT_LINE (29)).reader_uint (_inLexique COMMA_SOURCE_FILE_AT_LINE (29)) ;
              GGS_uint  var_cas_cycle_time ;
              var_cas_cycle_time = var_cas_a.reader_cycle_time (_inLexique COMMA_SOURCE_FILE_AT_LINE (30)).reader_uint64 (_inLexique COMMA_SOURCE_FILE_AT_LINE (30)).reader_uint (_inLexique COMMA_SOURCE_FILE_AT_LINE (30)) ;
              if (((var_cas_alarm_time)._operator_isEqual (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
                if (((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (34))))._operator_isEqual (GGS_bool (true, true))).isBuiltAndTrue ()) {
                  var_cas_a.reader_alarm_time (_inLexique COMMA_SOURCE_FILE_AT_LINE (35)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "ALARMTIME must be > 0") COMMA_SOURCE_FILE_AT_LINE (36)) ;
                }else{
                  var_cas_a.reader_alarm_time (_inLexique COMMA_SOURCE_FILE_AT_LINE (37)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticWarning (_inLexique, GGS_string (true, "ALARMTIME equal to 0 has an undefined behavior") COMMA_SOURCE_FILE_AT_LINE (37)) ;
                }
              }
              if (((var_cas_counter.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (42)))._operator_isEqual (GGS_string (true, "SystemCounter"))).isBuiltAndTrue ()) {
                if (((var_cas_alarm_time)._operator_strictSup (GGS_uint (true, 32767U))).isBuiltAndTrue ()) {
                  var_cas_a.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (44)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "ALARMTIME is greater than counter MAXALLOWEDVALUE") COMMA_SOURCE_FILE_AT_LINE (45)) ;
                }
                if (((var_cas_cycle_time)._operator_strictSup (GGS_uint (true, 32767U))).isBuiltAndTrue ()) {
                  var_cas_a.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (47)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "CYCLETIME is greater than counter MAXALLOWEDVALUE") COMMA_SOURCE_FILE_AT_LINE (48)) ;
                }
              }else{
                GGS_counter_obj  var_cas_ct ;
                const GGS_counter_map  _temp_1763 = var_cas_counters ;
                if (_temp_1763._isBuilt ()) {
                  _temp_1763 (HERE)->method_get (_inLexique, var_cas_counter, var_cas_ct COMMA_SOURCE_FILE_AT_LINE (51)) ;
                }
                { const GGS_basic_type _var_2184 = var_cas_ct.reader_max_allowed_value (_inLexique COMMA_SOURCE_FILE_AT_LINE (52)) ; // CAST instruction
                  if (_var_2184.getPtr () != NULL) {
                    macroValidPointer (_var_2184.getPtr ()) ;
                    if (typeid (cPtr_uint32_class) == typeid (* (_var_2184.getPtr ()))) {
                      const GGS_uint32_class var_cas_mc (_var_2184.getPtr ()) ;
                      if (((var_cas_alarm_time)._operator_strictSup (var_cas_mc.reader_value (_inLexique COMMA_SOURCE_FILE_AT_LINE (54)))).isBuiltAndTrue ()) {
                        var_cas_a.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (55)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "ALARMTIME is greater than counter MAXALLOWEDVALUE") COMMA_SOURCE_FILE_AT_LINE (56)) ;
                      }
                      if (((var_cas_cycle_time)._operator_strictSup (var_cas_mc.reader_value (_inLexique COMMA_SOURCE_FILE_AT_LINE (57)))).isBuiltAndTrue ()) {
                        var_cas_a.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (58)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "CYCLETIME is greater than counter MAXALLOWEDVALUE") COMMA_SOURCE_FILE_AT_LINE (59)) ;
                      }
                    }else{
                    }
                  }
                }
              }
            }else{
            }
          }
        }
      }
    }
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_counters_of_alarms_defined\n") ;
  #endif
}

//---------------------------------------------------------------------------*

