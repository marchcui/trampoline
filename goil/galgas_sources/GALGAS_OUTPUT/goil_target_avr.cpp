//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_target_avr.cpp'                         *
//                        Generated by version 1.8.0                         *
//                       march 5th, 2009, at 9h29'9"                         *
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
#include "goil_target_avr.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_target_avr.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of routine "generate_target_avr"               *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_target_avr (C_Compiler & _inLexique,
                                const GGS_lstring   var_cas_name,
                                const GGS_ident_map   var_cas_others,
                                const GGS_oil_obj   /* var_cas_exe */,
                                GGS_string & var_cas_result COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_target_avr at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  ::routine_doReplace (_inLexique,  var_cas_result,  GGS_string (true, "$STACK_ZONE$"),  (var_cas_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (52)))._operator_concat (GGS_string (true, "_stack")) COMMA_SOURCE_FILE_AT_LINE (52)) ;
  ::routine_doReplace (_inLexique,  var_cas_result,  GGS_string (true, "$EXEC_INTEGER_CONTEXT$"),  (var_cas_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (53)))._operator_concat (GGS_string (true, "_int_context")) COMMA_SOURCE_FILE_AT_LINE (53)) ;
  GGS_uint  var_cas_stack_size ;
  ::routine_additional_int_key_required (_inLexique,  GGS_string (true, "STACKSIZE"),  var_cas_others,  var_cas_name,  var_cas_stack_size COMMA_SOURCE_FILE_AT_LINE (56)) ;
  ::routine_doReplace (_inLexique,  var_cas_result,  GGS_string (true, "$STACK_SIZE$"),  var_cas_stack_size.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (57)) COMMA_SOURCE_FILE_AT_LINE (57)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_target_avr\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of routine "generate_isr_avr"                *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_isr_avr (C_Compiler & _inLexique,
                                const GGS_isr_map   var_cas_isrs,
                                GGS_string & var_cas_code COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_isr_avr at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_string var_cas_result ;
  var_cas_result = GGS_string (true, "") ;
  {
    GGS_isr_map::cEnumerator enumerator_1737 (var_cas_isrs, true) ;
    const GGS_isr_map::cElement * operand_1737 = NULL ;
    while (((operand_1737 = enumerator_1737.nextObject ()))) {
      macroValidPointer (operand_1737) ;
      GGS_ident_map  var_cas_others ;
      var_cas_others = operand_1737->mInfo.isr.reader_other_fields (_inLexique COMMA_SOURCE_FILE_AT_LINE (66)) ;
      GGS_string var_cas_tmp ;
      ::routine_retrieveTemplateString (_inLexique,  var_cas_tmp,  GGS_string (true, "isr_list_specific") COMMA_SOURCE_FILE_AT_LINE (70)) ;
      ::routine_doReplace (_inLexique,  var_cas_tmp,  GGS_string (true, "$EXEC_NAME$"),  operand_1737->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (72)) COMMA_SOURCE_FILE_AT_LINE (72)) ;
      var_cas_result._dotAssign_operation (var_cas_tmp) ;
    }
  }
  ::routine_doReplace (_inLexique,  var_cas_code,  GGS_string (true, "$ISR_LIST$"),  var_cas_result COMMA_SOURCE_FILE_AT_LINE (75)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_isr_avr\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of routine "generate_counter_avr"              *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_counter_avr (C_Compiler & _inLexique,
                                const GGS_counter_map   var_cas_counters,
                                GGS_string & var_cas_code COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_counter_avr at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_string var_cas_result ;
  var_cas_result = GGS_string (true, "") ;
  {
    GGS_counter_map::cEnumerator enumerator_2236 (var_cas_counters, true) ;
    const GGS_counter_map::cElement * operand_2236 = NULL ;
    while (((operand_2236 = enumerator_2236.nextObject ()))) {
      macroValidPointer (operand_2236) ;
      { const GGS_counter_type _var_2544 = operand_2236->mInfo.counter.reader_type (_inLexique COMMA_SOURCE_FILE_AT_LINE (84)) ; // CAST instruction
        if (_var_2544.getPtr () != NULL) {
          macroValidPointer (_var_2544.getPtr ()) ;
          if (typeid (cPtr_software_counter) == typeid (* (_var_2544.getPtr ()))) {
          }else{
            GGS_string var_cas_tmp ;
            ::routine_retrieveTemplateString (_inLexique,  var_cas_tmp,  GGS_string (true, "counter_list_specific") COMMA_SOURCE_FILE_AT_LINE (88)) ;
            ::routine_doReplace (_inLexique,  var_cas_tmp,  GGS_string (true, "$COUNTER$"),  (operand_2236->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (89)))._operator_concat (GGS_string (true, "_counter_desc")) COMMA_SOURCE_FILE_AT_LINE (89)) ;
            var_cas_result._dotAssign_operation (var_cas_tmp) ;
          }
        }
      }
    }
  }
  ::routine_doReplace (_inLexique,  var_cas_code,  GGS_string (true, "$COUNTER_LIST$"),  var_cas_result COMMA_SOURCE_FILE_AT_LINE (94)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_counter_avr\n") ;
  #endif
}

//---------------------------------------------------------------------------*

