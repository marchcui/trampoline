//---------------------------------------------------------------------------*
//                                                                           *
//                          File 'goil_obj_com.h'                            *
//                        Generated by version 1.8.0                         *
//                      march 26th, 2009, at 10h50'14"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_obj_com_DEFINED
#define goil_obj_com_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/C_GGS_Object.h"
#include "galgas/GGS_location.h"
#include "galgas/GGS_lbool.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_lstring.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_binaryset.h"
#include "galgas/GGS_filewrapper.h"
#include "galgas/predefined_types.h"
#include "galgas/AC_galgas_class.h"
#include "galgas/AC_galgas_domain.h"
#include "galgas/AC_galgas_mapindex.h"
#include "galgas/AC_galgas_map.h"
#include "galgas/AC_galgas_listmap.h"
#include "galgas/AC_galgas_list.h"
#include "galgas/AC_galgas_sortedlist.h"

//---------------------------------------------------------------------------*

#include "goil_lexique.h"

// Include imported semantics
#include "com_type.h"
#include "goil_options.h"
#include "goil_semantics.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                  Parser class goil_obj_com declaration                    *
//                                                                           *
//---------------------------------------------------------------------------*

class goil_obj_com {
  public : virtual ~goil_obj_com (void) {}

  protected : virtual void nt_com_ (goil_lexique &,
                                GGS_com  &) = 0 ;

  protected : virtual void nt_comtimebase_ (goil_lexique &,
                                GGS_basic_type  &) = 0 ;

  protected : virtual void nt_comerrorhook_ (goil_lexique &,
                                GGS_basic_type  &) = 0 ;

  protected : virtual void nt_comusegetserviceid_ (goil_lexique &,
                                GGS_basic_type  &) = 0 ;

  protected : virtual void nt_comuseparameteraccess_ (goil_lexique &,
                                GGS_basic_type  &) = 0 ;

  protected : virtual void nt_comstartcomextension_ (goil_lexique &,
                                GGS_basic_type  &) = 0 ;

  protected : virtual void nt_comappmode_ (goil_lexique &,
                                GGS_lstringlist  &) = 0 ;

  protected : virtual void nt_comstatus_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_use_ (goil_lexique &,
                                GGS_lstringlist  &) = 0 ;

  protected : virtual void nt_boolean_ (goil_lexique &,
                                GGS_lbool  &) = 0 ;

  protected : virtual void nt_description_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : void pr_com_goil_obj_com_48_10_ (goil_lexique &,
                                GGS_com  &) ;

  protected : virtual sint16 select_repeat_goil_obj_com_0 (goil_lexique &) = 0 ;

  protected : void pr_comtimebase_goil_obj_com_92_18_ (goil_lexique &,
                                GGS_basic_type  &) ;

  protected : void pr_comerrorhook_goil_obj_com_107_19_ (goil_lexique &,
                                GGS_basic_type  &) ;

  protected : void pr_comusegetserviceid_goil_obj_com_116_25_ (goil_lexique &,
                                GGS_basic_type  &) ;

  protected : void pr_comuseparameteraccess_goil_obj_com_125_28_ (goil_lexique &,
                                GGS_basic_type  &) ;

  protected : void pr_comstartcomextension_goil_obj_com_134_27_ (goil_lexique &,
                                GGS_basic_type  &) ;

  protected : void pr_comappmode_goil_obj_com_143_17_ (goil_lexique &,
                                GGS_lstringlist  &) ;

  protected : void pr_comstatus_goil_obj_com_152_16_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : virtual sint16 select_goil_obj_com_1 (goil_lexique &) = 0 ;

  protected : void pr_use_goil_obj_com_166_10_ (goil_lexique &,
                                GGS_lstringlist  &) ;

} ;

//---------------------------------------------------------------------------*

#endif
