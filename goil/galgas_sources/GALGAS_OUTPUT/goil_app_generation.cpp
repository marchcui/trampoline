//---------------------------------------------------------------------------*
//                                                                           *
//                      File 'goil_app_generation.cpp'                       *
//                        Generated by version 1.8.0                         *
//                      march 7th, 2009, at 15h47'22"                        *
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
#include "goil_app_generation.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_app_generation.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of routine "generate_vector"                 *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_vector (C_Compiler & _inLexique,
                                GGS_string  var_cas_vec,
                                GGS_string & var_cas_res,
                                GGS_uint  & var_cas_byte_count COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_vector at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  var_cas_byte_count = var_cas_vec.reader_length (_inLexique COMMA_SOURCE_FILE_AT_LINE (47))._divide_operation (_inLexique, GGS_uint (true, 8U) COMMA_SOURCE_FILE_AT_LINE (47)) ;
  if (((var_cas_vec.reader_length (_inLexique COMMA_SOURCE_FILE_AT_LINE (48))._modulo_operation (_inLexique, GGS_uint (true, 8U) COMMA_SOURCE_FILE_AT_LINE (48)))._operator_isNotEqual (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
    var_cas_byte_count._increment_operation (_inLexique COMMA_SOURCE_FILE_AT_LINE (48)) ;
  }
  GGS_stringlist  var_cas_data ;
  var_cas_data = GGS_stringlist ::constructor_emptyList () ;
  GGS_uint  var_cas_i ;
  var_cas_i = GGS_uint (true, 0U) ;
  GGS_uint  var_cas_start ;
  var_cas_start = GGS_uint (true, 0U) ;
  GGS_uint _variant_1799 = var_cas_byte_count ;
  GGS_bool _condition_1799 (_variant_1799._isBuilt (), true) ;
  while (_condition_1799.isBuiltAndTrue ()) {
    _condition_1799 = (var_cas_i)._operator_strictInf (var_cas_byte_count) ;
    if (_condition_1799.isBuiltAndTrue ()) {
      if (_variant_1799.uintValue () == 0) {
        _inLexique.onTheFlyRunTimeError ("loop variant error" COMMA_SOURCE_FILE_AT_LINE (73)) ;
        _condition_1799 = GGS_bool (true, false) ;
      }else{
        _variant_1799._decrement_operation (_inLexique COMMA_HERE) ;
        GGS_string var_cas_byte ;
        var_cas_byte = var_cas_vec.reader_subString (_inLexique, var_cas_start, GGS_uint (true, 8U) COMMA_SOURCE_FILE_AT_LINE (57)).reader_reversedString (_inLexique COMMA_SOURCE_FILE_AT_LINE (57)) ;
        GGS_uint  var_cas_bit_pos ;
        var_cas_bit_pos = GGS_uint (true, 0U) ;
        GGS_uint  var_cas_val ;
        var_cas_val = GGS_uint (true, 0U) ;
        GGS_uint _variant_1723 = GGS_uint (true, 8U) ;
        GGS_bool _condition_1723 (_variant_1723._isBuilt (), true) ;
        while (_condition_1723.isBuiltAndTrue ()) {
          _condition_1723 = (var_cas_bit_pos)._operator_strictInf (var_cas_byte.reader_length (_inLexique COMMA_SOURCE_FILE_AT_LINE (62))) ;
          if (_condition_1723.isBuiltAndTrue ()) {
            if (_variant_1723.uintValue () == 0) {
              _inLexique.onTheFlyRunTimeError ("loop variant error" COMMA_SOURCE_FILE_AT_LINE (69)) ;
              _condition_1723 = GGS_bool (true, false) ;
            }else{
              _variant_1723._decrement_operation (_inLexique COMMA_HERE) ;
              GGS_char var_cas_bit ;
              var_cas_bit = var_cas_byte.reader_characterAtIndex (_inLexique, var_cas_bit_pos COMMA_SOURCE_FILE_AT_LINE (63)) ;
              var_cas_val = var_cas_val._left_shift_operation (_inLexique, GGS_uint (true, 1U) COMMA_SOURCE_FILE_AT_LINE (64)) ;
              if (((var_cas_bit)._operator_isEqual (GGS_char (true, '1'))).isBuiltAndTrue ()) {
                var_cas_val._increment_operation (_inLexique COMMA_SOURCE_FILE_AT_LINE (66)) ;
              }
              var_cas_bit_pos._increment_operation (_inLexique COMMA_SOURCE_FILE_AT_LINE (68)) ;
            }
          }
        }
        var_cas_data._addAssign_operation (var_cas_val.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (70))) ;
        var_cas_i._increment_operation (_inLexique COMMA_SOURCE_FILE_AT_LINE (71)) ;
        var_cas_start = var_cas_start._add_operation (_inLexique, GGS_uint (true, 8U) COMMA_SOURCE_FILE_AT_LINE (72)) ;
      }
    }
  }
  var_cas_res = GGS_string::constructor_componentsJoinedByString (_inLexique, var_cas_data, GGS_string (true, ",") COMMA_HERE) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_vector\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//                Implementation of routine "generate_apps"                  *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_apps (C_Compiler & _inLexique,
                                GGS_app_map   var_cas_apps,
                                GGS_task_map   var_cas_tasks,
                                GGS_isr_map   var_cas_isrs,
                                GGS_alarm_map   var_cas_alarms,
                                GGS_resource_map   var_cas_rezs,
                                GGS_scheduletable_map   var_cas_sts,
                                GGS_counter_map   var_cas_cnts,
                                GGS_string & /* var_cas_head */,
                                GGS_string & var_cas_obj_head,
                                GGS_string & var_cas_imp COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_apps at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_string var_cas_res ;
  var_cas_res = GGS_string (true, "") ;
  GGS_stringlist  var_cas_app_list ;
  var_cas_app_list = GGS_stringlist ::constructor_emptyList () ;
  GGS_string var_cas_ids ;
  var_cas_ids = GGS_string (true, "") ;
  ::routine_doReplace (_inLexique,  var_cas_obj_head,  GGS_string (true, "$APP_COUNT$"),  var_cas_apps.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (95)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (95)) COMMA_SOURCE_FILE_AT_LINE (95)) ;
  if (((var_cas_apps.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (97)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
    GGS_tasks_by_type  var_cas_stasks ;
    var_cas_stasks = GGS_tasks_by_type ::constructor_emptySortedList () ;
    {
      GGS_task_map::cEnumerator enumerator_2569 (var_cas_tasks, true) ;
      const GGS_task_map::cElement * operand_2569 = NULL ;
      while (((operand_2569 = enumerator_2569.nextObject ()))) {
        macroValidPointer (operand_2569) ;
        if (((operand_2569->mInfo.task.reader_events (_inLexique COMMA_SOURCE_FILE_AT_LINE (103)).reader_length (_inLexique COMMA_SOURCE_FILE_AT_LINE (103)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          var_cas_stasks._addAssign_operation (GGS_uint (true, 0U), operand_2569->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (104))) ;
        }else{
          var_cas_stasks._addAssign_operation (GGS_uint (true, 1U), operand_2569->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (106))) ;
        }
      }
    }
    {
        GGS_uint var_cas_n (true, 0) ;
      GGS_app_map::cEnumerator enumerator_2736 (var_cas_apps, true) ;
      const GGS_app_map::cElement * operand_2736 = NULL ;
      while (((operand_2736 = enumerator_2736.nextObject ()))) {
        macroValidPointer (operand_2736) ;
        var_cas_app_list._addAssign_operation (((GGS_string (true, "&"))._operator_concat (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (112))))._operator_concat (GGS_string (true, "_app_access"))) ;
        var_cas_ids.appendCstring ("#define ") ;
        var_cas_ids._dotAssign_operation (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (113))) ;
        var_cas_ids.appendCstring ("_id ") ;
        var_cas_ids._dotAssign_operation (var_cas_n.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (113))) ;
        var_cas_ids.appendCstring ("\n") ;
        var_cas_ids.appendCstring ("CONST(tpl_app_id, OS_APPL_CONST) ") ;
        var_cas_ids._dotAssign_operation (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (114))) ;
        var_cas_ids.appendCstring (" = ") ;
        var_cas_ids._dotAssign_operation (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (114))) ;
        var_cas_ids.appendCstring ("_id;\n") ;
        GGS_string var_cas_vectors ;
        var_cas_vectors = GGS_string (true, "") ;
        GGS_string var_cas_vec ;
        var_cas_vec = GGS_string (true, "") ;
        GGS_string var_cas_init ;
        GGS_uint  var_cas_count ;
        GGS_string var_cas_tpl ;
        ::routine_retrieveTemplateString (_inLexique,  var_cas_tpl,  GGS_string (true, "app") COMMA_SOURCE_FILE_AT_LINE (121)) ;
        ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$APP_NAME$"),  operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (123)) COMMA_SOURCE_FILE_AT_LINE (123)) ;
        {
          GGS_tasks_by_type::cEnumerator enumerator_3353 (var_cas_stasks, true) ;
          const GGS_tasks_by_type::cElement * operand_3353 = NULL ;
          while (((operand_3353 = enumerator_3353.nextObject ()))) {
            macroValidPointer (operand_3353) ;
            if ((operand_2736->mInfo.app.reader_tasks (_inLexique COMMA_SOURCE_FILE_AT_LINE (129)).reader_hasKey (_inLexique, operand_3353->name COMMA_SOURCE_FILE_AT_LINE (129))).isBuiltAndTrue ()) {
              var_cas_vec.appendCstring ("11") ;
            }else{
              var_cas_vec.appendCstring ("0") ;
              GGS_task_obj  var_cas_t ;
              const GGS_task_map  _temp_3542 = var_cas_tasks ;
              if (_temp_3542._isBuilt ()) {
                _temp_3542 (HERE)->method_get (_inLexique, GGS_lstring ::constructor_new (_inLexique, operand_3353->name, GGS_location (_inLexique) COMMA_HERE), var_cas_t COMMA_SOURCE_FILE_AT_LINE (135)) ;
              }
              GGS_bool var_cas_found ;
              GGS_lstring  automatic_var_0 ;
              ::routine_is_in_lstringlist (_inLexique,  var_cas_t.reader_acc_apps (_inLexique COMMA_SOURCE_FILE_AT_LINE (137)),  operand_2736->mKey,  automatic_var_0,  var_cas_found COMMA_SOURCE_FILE_AT_LINE (137)) ;
              if ((var_cas_found).isBuiltAndTrue ()) {
                var_cas_vec.appendCstring ("1") ;
              }else{
                var_cas_vec.appendCstring ("0") ;
              }
            }
          }
        }
        {
          GGS_isr_map::cEnumerator enumerator_3799 (var_cas_isrs, true) ;
          const GGS_isr_map::cElement * operand_3799 = NULL ;
          while (((operand_3799 = enumerator_3799.nextObject ()))) {
            macroValidPointer (operand_3799) ;
            if ((operand_2736->mInfo.app.reader_isrs (_inLexique COMMA_SOURCE_FILE_AT_LINE (144)).reader_hasKey (_inLexique, operand_3799->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (144)) COMMA_SOURCE_FILE_AT_LINE (144))).isBuiltAndTrue ()) {
              var_cas_vec.appendCstring ("11") ;
            }else{
              var_cas_vec.appendCstring ("0") ;
              GGS_bool var_cas_found ;
              GGS_lstring  automatic_var_1 ;
              ::routine_is_in_lstringlist (_inLexique,  operand_3799->mInfo.isr.reader_acc_apps (_inLexique COMMA_SOURCE_FILE_AT_LINE (149)),  operand_2736->mKey,  automatic_var_1,  var_cas_found COMMA_SOURCE_FILE_AT_LINE (149)) ;
              if ((var_cas_found).isBuiltAndTrue ()) {
                var_cas_vec.appendCstring ("1") ;
              }else{
                var_cas_vec.appendCstring ("0") ;
              }
            }
          }
        }
        ::routine_generate_vector (_inLexique,  var_cas_vec,  var_cas_init,  var_cas_count COMMA_SOURCE_FILE_AT_LINE (155)) ;
        if (((var_cas_count)._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          var_cas_vectors.appendCstring ("u8 ") ;
          var_cas_vectors._dotAssign_operation (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (157))) ;
          var_cas_vectors.appendCstring ("_procs_access[") ;
          var_cas_vectors._dotAssign_operation (var_cas_count.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (157))) ;
          var_cas_vectors.appendCstring ("] = {") ;
          var_cas_vectors._dotAssign_operation (var_cas_init) ;
          var_cas_vectors.appendCstring ("};\n") ;
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$PROC_ACCESS$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (158)))._operator_concat (GGS_string (true, "_procs_access")) COMMA_SOURCE_FILE_AT_LINE (158)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$PROC_ACCESS$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (160)) ;
        }
        var_cas_vec = GGS_string (true, "") ;
        {
          GGS_alarm_map::cEnumerator enumerator_4538 (var_cas_alarms, true) ;
          const GGS_alarm_map::cElement * operand_4538 = NULL ;
          while (((operand_4538 = enumerator_4538.nextObject ()))) {
            macroValidPointer (operand_4538) ;
            if ((operand_2736->mInfo.app.reader_alarms (_inLexique COMMA_SOURCE_FILE_AT_LINE (166)).reader_hasKey (_inLexique, operand_4538->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (166)) COMMA_SOURCE_FILE_AT_LINE (166))).isBuiltAndTrue ()) {
              var_cas_vec.appendCstring ("11") ;
            }else{
              var_cas_vec.appendCstring ("0") ;
              GGS_bool var_cas_found ;
              GGS_lstring  automatic_var_2 ;
              ::routine_is_in_lstringlist (_inLexique,  operand_4538->mInfo.alarm.reader_acc_apps (_inLexique COMMA_SOURCE_FILE_AT_LINE (171)),  operand_2736->mKey,  automatic_var_2,  var_cas_found COMMA_SOURCE_FILE_AT_LINE (171)) ;
              if ((var_cas_found).isBuiltAndTrue ()) {
                var_cas_vec.appendCstring ("1") ;
              }else{
                var_cas_vec.appendCstring ("0") ;
              }
            }
          }
        }
        ::routine_generate_vector (_inLexique,  var_cas_vec,  var_cas_init,  var_cas_count COMMA_SOURCE_FILE_AT_LINE (177)) ;
        if (((var_cas_count)._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          var_cas_vectors.appendCstring ("u8 ") ;
          var_cas_vectors._dotAssign_operation (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (179))) ;
          var_cas_vectors.appendCstring ("_alarms_access[") ;
          var_cas_vectors._dotAssign_operation (var_cas_count.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (179))) ;
          var_cas_vectors.appendCstring ("] = {") ;
          var_cas_vectors._dotAssign_operation (var_cas_init) ;
          var_cas_vectors.appendCstring ("};\n") ;
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ALARM_ACCESS$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (180)))._operator_concat (GGS_string (true, "_alarms_access")) COMMA_SOURCE_FILE_AT_LINE (180)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ALARM_ACCESS$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (182)) ;
        }
        var_cas_vec = GGS_string (true, "") ;
        {
          GGS_resource_map::cEnumerator enumerator_5287 (var_cas_rezs, true) ;
          const GGS_resource_map::cElement * operand_5287 = NULL ;
          while (((operand_5287 = enumerator_5287.nextObject ()))) {
            macroValidPointer (operand_5287) ;
            if ((operand_2736->mInfo.app.reader_resources (_inLexique COMMA_SOURCE_FILE_AT_LINE (189)).reader_hasKey (_inLexique, operand_5287->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (189)) COMMA_SOURCE_FILE_AT_LINE (189))).isBuiltAndTrue ()) {
              var_cas_vec.appendCstring ("11") ;
            }else{
              var_cas_vec.appendCstring ("0") ;
              GGS_bool var_cas_found ;
              GGS_lstring  automatic_var_3 ;
              ::routine_is_in_lstringlist (_inLexique,  operand_5287->mInfo.resource.reader_acc_apps (_inLexique COMMA_SOURCE_FILE_AT_LINE (194)),  operand_2736->mKey,  automatic_var_3,  var_cas_found COMMA_SOURCE_FILE_AT_LINE (194)) ;
              if ((var_cas_found).isBuiltAndTrue ()) {
                var_cas_vec.appendCstring ("1") ;
              }else{
                var_cas_vec.appendCstring ("0") ;
              }
            }
          }
        }
        var_cas_vec.appendCstring ("01") ;
        ::routine_generate_vector (_inLexique,  var_cas_vec,  var_cas_init,  var_cas_count COMMA_SOURCE_FILE_AT_LINE (204)) ;
        if (((var_cas_count)._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          var_cas_vectors.appendCstring ("u8 ") ;
          var_cas_vectors._dotAssign_operation (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (206))) ;
          var_cas_vectors.appendCstring ("_rezs_access[") ;
          var_cas_vectors._dotAssign_operation (var_cas_count.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (206))) ;
          var_cas_vectors.appendCstring ("] = {") ;
          var_cas_vectors._dotAssign_operation (var_cas_init) ;
          var_cas_vectors.appendCstring ("};\n") ;
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$REZ_ACCESS$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (207)))._operator_concat (GGS_string (true, "_rezs_access")) COMMA_SOURCE_FILE_AT_LINE (207)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$REZ_ACCESS$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (209)) ;
        }
        var_cas_vec = GGS_string (true, "") ;
        {
          GGS_scheduletable_map::cEnumerator enumerator_6087 (var_cas_sts, true) ;
          const GGS_scheduletable_map::cElement * operand_6087 = NULL ;
          while (((operand_6087 = enumerator_6087.nextObject ()))) {
            macroValidPointer (operand_6087) ;
            if ((operand_2736->mInfo.app.reader_schedtables (_inLexique COMMA_SOURCE_FILE_AT_LINE (216)).reader_hasKey (_inLexique, operand_6087->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (216)) COMMA_SOURCE_FILE_AT_LINE (216))).isBuiltAndTrue ()) {
              var_cas_vec.appendCstring ("11") ;
            }else{
              var_cas_vec.appendCstring ("0") ;
              GGS_bool var_cas_found ;
              GGS_lstring  automatic_var_4 ;
              ::routine_is_in_lstringlist (_inLexique,  operand_6087->mInfo.st.reader_acc_apps (_inLexique COMMA_SOURCE_FILE_AT_LINE (221)),  operand_2736->mKey,  automatic_var_4,  var_cas_found COMMA_SOURCE_FILE_AT_LINE (221)) ;
              if ((var_cas_found).isBuiltAndTrue ()) {
                var_cas_vec.appendCstring ("1") ;
              }else{
                var_cas_vec.appendCstring ("0") ;
              }
            }
          }
        }
        ::routine_generate_vector (_inLexique,  var_cas_vec,  var_cas_init,  var_cas_count COMMA_SOURCE_FILE_AT_LINE (226)) ;
        if (((var_cas_count)._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          var_cas_vectors.appendCstring ("u8 ") ;
          var_cas_vectors._dotAssign_operation (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (228))) ;
          var_cas_vectors.appendCstring ("_sts_access[") ;
          var_cas_vectors._dotAssign_operation (var_cas_count.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (228))) ;
          var_cas_vectors.appendCstring ("] = {") ;
          var_cas_vectors._dotAssign_operation (var_cas_init) ;
          var_cas_vectors.appendCstring ("};\n") ;
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ST_ACCESS$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (229)))._operator_concat (GGS_string (true, "_sts_access")) COMMA_SOURCE_FILE_AT_LINE (229)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ST_ACCESS$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (231)) ;
        }
        var_cas_vec = GGS_string (true, "") ;
        {
          GGS_counter_map::cEnumerator enumerator_6801 (var_cas_cnts, true) ;
          const GGS_counter_map::cElement * operand_6801 = NULL ;
          while (((operand_6801 = enumerator_6801.nextObject ()))) {
            macroValidPointer (operand_6801) ;
            if ((operand_2736->mInfo.app.reader_counters (_inLexique COMMA_SOURCE_FILE_AT_LINE (238)).reader_hasKey (_inLexique, operand_6801->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (238)) COMMA_SOURCE_FILE_AT_LINE (238))).isBuiltAndTrue ()) {
              var_cas_vec.appendCstring ("11") ;
            }else{
              var_cas_vec.appendCstring ("0") ;
              GGS_bool var_cas_found ;
              GGS_lstring  automatic_var_5 ;
              ::routine_is_in_lstringlist (_inLexique,  operand_6801->mInfo.counter.reader_acc_apps (_inLexique COMMA_SOURCE_FILE_AT_LINE (243)),  operand_2736->mKey,  automatic_var_5,  var_cas_found COMMA_SOURCE_FILE_AT_LINE (243)) ;
              if ((var_cas_found).isBuiltAndTrue ()) {
                var_cas_vec.appendCstring ("1") ;
              }else{
                var_cas_vec.appendCstring ("0") ;
              }
            }
          }
        }
        ::routine_generate_vector (_inLexique,  var_cas_vec,  var_cas_init,  var_cas_count COMMA_SOURCE_FILE_AT_LINE (248)) ;
        if (((var_cas_count)._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          var_cas_vectors.appendCstring ("u8 ") ;
          var_cas_vectors._dotAssign_operation (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (250))) ;
          var_cas_vectors.appendCstring ("_cnts_access[") ;
          var_cas_vectors._dotAssign_operation (var_cas_count.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (250))) ;
          var_cas_vectors.appendCstring ("] = {") ;
          var_cas_vectors._dotAssign_operation (var_cas_init) ;
          var_cas_vectors.appendCstring ("};\n") ;
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$CNT_ACCESS$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (251)))._operator_concat (GGS_string (true, "_cnts_access")) COMMA_SOURCE_FILE_AT_LINE (251)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$CNT_ACCESS$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (253)) ;
        }
        ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ACCESS_VEC$"),  var_cas_vectors COMMA_SOURCE_FILE_AT_LINE (256)) ;
        GGS_string var_cas_ownership_vec ;
        var_cas_ownership_vec = GGS_string (true, "") ;
        GGS_lstringlist  var_cas_procs ;
        var_cas_procs = (operand_2736->mInfo.app.reader_tasks (_inLexique COMMA_SOURCE_FILE_AT_LINE (260)).reader_keyList (_inLexique COMMA_SOURCE_FILE_AT_LINE (260)))._operator_concat (operand_2736->mInfo.app.reader_isrs (_inLexique COMMA_SOURCE_FILE_AT_LINE (260)).reader_keyList (_inLexique COMMA_SOURCE_FILE_AT_LINE (260))) ;
        GGS_string var_cas_table ;
        var_cas_table = GGS_string (true, "") ;
        {
          GGS_lstringlist::cEnumerator enumerator_7625 (var_cas_procs, true) ;
          const GGS_lstringlist::cElement * operand_7625 = enumerator_7625.nextObject () ;
          if ((operand_7625 != NULL)) {
            var_cas_table = ((((GGS_string (true, "tpl_proc_id "))._operator_concat (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (263))))._operator_concat (GGS_string (true, "_proc_own [")))._operator_concat (var_cas_procs.reader_length (_inLexique COMMA_SOURCE_FILE_AT_LINE (263)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (263))))._operator_concat (GGS_string (true, "] = {")) ;
            bool _foreach_loop_7625 ;
            do{
              macroValidPointer (operand_7625) ;
              var_cas_table._dotAssign_operation (operand_7625->mValue.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (264))) ;
              var_cas_table.appendCstring ("_id") ;
              operand_7625 = enumerator_7625.nextObject () ;
              _foreach_loop_7625 = ((operand_7625 != NULL)) ;
              if (_foreach_loop_7625) {
                var_cas_table.appendCstring (",") ;
              }
            }while (_foreach_loop_7625) ;
            var_cas_table.appendCstring ("};\n") ;
          }
        }
        var_cas_ownership_vec._dotAssign_operation (var_cas_table) ;
        ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$PROC_COUNT$"),  var_cas_procs.reader_length (_inLexique COMMA_SOURCE_FILE_AT_LINE (269)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (269)) COMMA_SOURCE_FILE_AT_LINE (269)) ;
        if (((var_cas_table)._operator_isNotEqual (GGS_string (true, ""))).isBuiltAndTrue ()) {
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$PROC_OWNERSHIP$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (271)))._operator_concat (GGS_string (true, "_proc_own")) COMMA_SOURCE_FILE_AT_LINE (271)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$PROC_OWNERSHIP$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (273)) ;
        }
        var_cas_table = GGS_string (true, "") ;
        {
          GGS_ident_map::cEnumerator enumerator_8160 (operand_2736->mInfo.app.reader_alarms (_inLexique COMMA_SOURCE_FILE_AT_LINE (277)), true) ;
          const GGS_ident_map::cElement * operand_8160 = enumerator_8160.nextObject () ;
          if ((operand_8160 != NULL)) {
            var_cas_table = ((((GGS_string (true, "tpl_alarm_id "))._operator_concat (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (278))))._operator_concat (GGS_string (true, "_alarm_own [")))._operator_concat (operand_2736->mInfo.app.reader_alarms (_inLexique COMMA_SOURCE_FILE_AT_LINE (278)).reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (278)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (278))))._operator_concat (GGS_string (true, "] = {")) ;
            bool _foreach_loop_8160 ;
            do{
              macroValidPointer (operand_8160) ;
              var_cas_table._dotAssign_operation (operand_8160->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (279))) ;
              var_cas_table.appendCstring ("_id") ;
              operand_8160 = enumerator_8160.nextObject () ;
              _foreach_loop_8160 = ((operand_8160 != NULL)) ;
              if (_foreach_loop_8160) {
                var_cas_table.appendCstring (",") ;
              }
            }while (_foreach_loop_8160) ;
            var_cas_table.appendCstring ("};\n") ;
          }
        }
        var_cas_ownership_vec._dotAssign_operation (var_cas_table) ;
        ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ALARM_COUNT$"),  operand_2736->mInfo.app.reader_alarms (_inLexique COMMA_SOURCE_FILE_AT_LINE (284)).reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (284)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (284)) COMMA_SOURCE_FILE_AT_LINE (284)) ;
        if (((var_cas_table)._operator_isNotEqual (GGS_string (true, ""))).isBuiltAndTrue ()) {
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ALARM_OWNERSHIP$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (286)))._operator_concat (GGS_string (true, "_alarm_own")) COMMA_SOURCE_FILE_AT_LINE (286)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ALARM_OWNERSHIP$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (288)) ;
        }
        var_cas_table = GGS_string (true, "") ;
        {
          GGS_ident_map::cEnumerator enumerator_8707 (operand_2736->mInfo.app.reader_resources (_inLexique COMMA_SOURCE_FILE_AT_LINE (292)), true) ;
          const GGS_ident_map::cElement * operand_8707 = enumerator_8707.nextObject () ;
          if ((operand_8707 != NULL)) {
            var_cas_table = ((((GGS_string (true, "tpl_resource_id "))._operator_concat (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (293))))._operator_concat (GGS_string (true, "_rez_own [")))._operator_concat (operand_2736->mInfo.app.reader_resources (_inLexique COMMA_SOURCE_FILE_AT_LINE (293)).reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (293)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (293))))._operator_concat (GGS_string (true, "] = {")) ;
            bool _foreach_loop_8707 ;
            do{
              macroValidPointer (operand_8707) ;
              var_cas_table._dotAssign_operation (operand_8707->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (294))) ;
              var_cas_table.appendCstring ("_id") ;
              operand_8707 = enumerator_8707.nextObject () ;
              _foreach_loop_8707 = ((operand_8707 != NULL)) ;
              if (_foreach_loop_8707) {
                var_cas_table.appendCstring (",") ;
              }
            }while (_foreach_loop_8707) ;
            var_cas_table.appendCstring ("};\n") ;
          }
        }
        var_cas_ownership_vec._dotAssign_operation (var_cas_table) ;
        ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$REZ_COUNT$"),  operand_2736->mInfo.app.reader_resources (_inLexique COMMA_SOURCE_FILE_AT_LINE (299)).reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (299)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (299)) COMMA_SOURCE_FILE_AT_LINE (299)) ;
        if (((var_cas_table)._operator_isNotEqual (GGS_string (true, ""))).isBuiltAndTrue ()) {
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$REZ_OWNERSHIP$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (301)))._operator_concat (GGS_string (true, "_rez_own")) COMMA_SOURCE_FILE_AT_LINE (301)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$REZ_OWNERSHIP$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (303)) ;
        }
        var_cas_table = GGS_string (true, "") ;
        {
          GGS_ident_map::cEnumerator enumerator_9256 (operand_2736->mInfo.app.reader_schedtables (_inLexique COMMA_SOURCE_FILE_AT_LINE (307)), true) ;
          const GGS_ident_map::cElement * operand_9256 = enumerator_9256.nextObject () ;
          if ((operand_9256 != NULL)) {
            var_cas_table = ((((GGS_string (true, "tpl_schedtable_id "))._operator_concat (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (308))))._operator_concat (GGS_string (true, "_st_own [")))._operator_concat (operand_2736->mInfo.app.reader_schedtables (_inLexique COMMA_SOURCE_FILE_AT_LINE (308)).reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (308)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (308))))._operator_concat (GGS_string (true, "] = {")) ;
            bool _foreach_loop_9256 ;
            do{
              macroValidPointer (operand_9256) ;
              var_cas_table._dotAssign_operation (operand_9256->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (309))) ;
              var_cas_table.appendCstring ("_id") ;
              operand_9256 = enumerator_9256.nextObject () ;
              _foreach_loop_9256 = ((operand_9256 != NULL)) ;
              if (_foreach_loop_9256) {
                var_cas_table.appendCstring (",") ;
              }
            }while (_foreach_loop_9256) ;
            var_cas_table.appendCstring ("};\n") ;
          }
        }
        var_cas_ownership_vec._dotAssign_operation (var_cas_table) ;
        ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ST_COUNT$"),  operand_2736->mInfo.app.reader_schedtables (_inLexique COMMA_SOURCE_FILE_AT_LINE (314)).reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (314)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (314)) COMMA_SOURCE_FILE_AT_LINE (314)) ;
        if (((var_cas_table)._operator_isNotEqual (GGS_string (true, ""))).isBuiltAndTrue ()) {
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ST_OWNERSHIP$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (316)))._operator_concat (GGS_string (true, "_st_own")) COMMA_SOURCE_FILE_AT_LINE (316)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$ST_OWNERSHIP$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (318)) ;
        }
        var_cas_table = GGS_string (true, "") ;
        {
          GGS_ident_map::cEnumerator enumerator_9808 (operand_2736->mInfo.app.reader_counters (_inLexique COMMA_SOURCE_FILE_AT_LINE (322)), true) ;
          const GGS_ident_map::cElement * operand_9808 = enumerator_9808.nextObject () ;
          if ((operand_9808 != NULL)) {
            var_cas_table = ((((GGS_string (true, "tpl_counter_id "))._operator_concat (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (323))))._operator_concat (GGS_string (true, "_cnt_own [")))._operator_concat (operand_2736->mInfo.app.reader_counters (_inLexique COMMA_SOURCE_FILE_AT_LINE (323)).reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (323)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (323))))._operator_concat (GGS_string (true, "] = {")) ;
            bool _foreach_loop_9808 ;
            do{
              macroValidPointer (operand_9808) ;
              var_cas_table._dotAssign_operation (operand_9808->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (324))) ;
              var_cas_table.appendCstring ("_id") ;
              operand_9808 = enumerator_9808.nextObject () ;
              _foreach_loop_9808 = ((operand_9808 != NULL)) ;
              if (_foreach_loop_9808) {
                var_cas_table.appendCstring (",") ;
              }
            }while (_foreach_loop_9808) ;
            var_cas_table.appendCstring ("};\n") ;
          }
        }
        var_cas_ownership_vec._dotAssign_operation (var_cas_table) ;
        ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$CNT_COUNT$"),  operand_2736->mInfo.app.reader_counters (_inLexique COMMA_SOURCE_FILE_AT_LINE (329)).reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (329)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (329)) COMMA_SOURCE_FILE_AT_LINE (329)) ;
        if (((var_cas_table)._operator_isNotEqual (GGS_string (true, ""))).isBuiltAndTrue ()) {
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$CNT_OWNERSHIP$"),  (operand_2736->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (331)))._operator_concat (GGS_string (true, "_cnt_own")) COMMA_SOURCE_FILE_AT_LINE (331)) ;
        }else{
          ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$CNT_OWNERSHIP$"),  GGS_string (true, "NULL") COMMA_SOURCE_FILE_AT_LINE (333)) ;
        }
        { const GGS_basic_type _var_10566 = operand_2736->mInfo.app.reader_restart (_inLexique COMMA_SOURCE_FILE_AT_LINE (339)) ; // CAST instruction
          if (_var_10566.getPtr () != NULL) {
            macroValidPointer (_var_10566.getPtr ()) ;
            if (typeid (cPtr_string_class) == typeid (* (_var_10566.getPtr ()))) {
              const GGS_string_class var_cas_rst (_var_10566.getPtr ()) ;
              ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$RESTART$"),  (var_cas_rst.reader_value (_inLexique COMMA_SOURCE_FILE_AT_LINE (341)))._operator_concat (GGS_string (true, "_id")) COMMA_SOURCE_FILE_AT_LINE (341)) ;
            }else{
              ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$RESTART$"),  GGS_string (true, "INVALID_TASK") COMMA_SOURCE_FILE_AT_LINE (343)) ;
            }
          }
        }
        ::routine_doReplace (_inLexique,  var_cas_tpl,  GGS_string (true, "$OWNERSHIP_VEC$"),  var_cas_ownership_vec COMMA_SOURCE_FILE_AT_LINE (346)) ;
        var_cas_res._dotAssign_operation (var_cas_tpl) ;
        var_cas_n.mValue ++ ;
      }
    }
    var_cas_res.appendCstring ("CONSTP2CONST(tpl_app_access, AUTOMATIC, OS_APPL_CONST) tpl_app_table[APP_COUNT] = {\n") ;
    var_cas_res.appendCstring ("  ") ;
    var_cas_res._dotAssign_operation (GGS_string::constructor_componentsJoinedByString (_inLexique, var_cas_app_list, GGS_string (true, ",\n"
      "  ") COMMA_HERE)) ;
    var_cas_res.appendCstring ("\n"
      "};\n") ;
  }
  ::routine_doReplace (_inLexique,  var_cas_imp,  GGS_string (true, "$OSAPPLICATIONS$"),  var_cas_res COMMA_SOURCE_FILE_AT_LINE (358)) ;
  ::routine_doReplace (_inLexique,  var_cas_imp,  GGS_string (true, "$OSAPPIDS$"),  var_cas_ids COMMA_SOURCE_FILE_AT_LINE (359)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_apps\n") ;
  #endif
}

//---------------------------------------------------------------------------*

