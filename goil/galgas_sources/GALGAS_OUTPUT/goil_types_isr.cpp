//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_types_isr.cpp'                          *
//                        Generated by version 1.8.0                         *
//                      march 6th, 2009, at 21h27'42"                        *
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
#include "goil_types_isr.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_types_isr.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                           class 'cPtr_isr_obj'                            *
//                                                                           *
//---------------------------------------------------------------------------*

cPtr_isr_obj::
cPtr_isr_obj (const GGS_lstring & argument_0,
                                const GGS_basic_type & argument_1,
                                const GGS_basic_type & argument_2,
                                const GGS_lstringlist & argument_3,
                                const GGS_lstringlist & argument_4,
                                const GGS_lstringlist & argument_5,
                                const GGS_timing_prot & argument_6,
                                const GGS_ident_map & argument_7
                                COMMA_LOCATION_ARGS)
:cPtr_oil_obj (argument_0 COMMA_THERE),
category (argument_1),
priority (argument_2),
resources (argument_3),
messages (argument_4),
acc_apps (argument_5),
timing_prot (argument_6),
other_fields (argument_7) {
}

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  cPtr_isr_obj * GGS_isr_obj::
  operator () (LOCATION_ARGS) const {
    macroValidPointerThere (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_isr_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    return (cPtr_isr_obj *) mPointer ;
  }
#endif

//---------------------------------------------------------------------------*

bool cPtr_isr_obj::
isEqualToObject (const cPtr__AC_galgas_class * inOperand) const {
  bool equal = typeid (this) == typeid (inOperand) ;
  if (equal) {
    const cPtr_isr_obj * _p = dynamic_cast <const cPtr_isr_obj *> (inOperand) ;
    macroValidPointer (_p) ;
    equal = desc._operator_isEqual (_p->desc).boolValue ()
         && category._operator_isEqual (_p->category).boolValue ()
         && priority._operator_isEqual (_p->priority).boolValue ()
         && resources._operator_isEqual (_p->resources).boolValue ()
         && messages._operator_isEqual (_p->messages).boolValue ()
         && acc_apps._operator_isEqual (_p->acc_apps).boolValue ()
         && timing_prot._operator_isEqual (_p->timing_prot).boolValue ()
         && other_fields._operator_isEqual (_p->other_fields).boolValue () ;
  }
  return equal ;
}

//---------------------------------------------------------------------------*

void cPtr_isr_obj::
method_get_activation (C_Compiler & /* _inLexique */,
                                GGS_uint & var_cas_out_act COMMA_UNUSED_LOCATION_ARGS) const {
  var_cas_out_act = GGS_uint (true, 1U) ;
}

//---------------------------------------------------------------------------*

void cPtr_isr_obj::
appendForDescription (C_Compiler & _inLexique,
                      C_String & ioString,
                      const sint32 inIndentation
                      COMMA_LOCATION_ARGS) const {
  ioString << "->@isr_obj:"
           << desc.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << category.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << priority.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << resources.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << messages.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << acc_apps.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << timing_prot.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << other_fields.reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                              Class message                                *
//                                                                           *
//---------------------------------------------------------------------------*

const char * cPtr_isr_obj::
_message (void) const {
  return "" ;
}

//---------------------------------------------------------------------------*

const char * cPtr_isr_obj::
_static_message (void) {
  return "" ;
}

//---------------------------------------------------------------------------*

C_galgas_class_inspector _gInspectorFor_isr_obj (& typeid (cPtr_isr_obj), & typeid (cPtr_oil_obj), "") ;
//---------------------------------------------------------------------------*

AC_galgasClassRunTimeInformation * cPtr_isr_obj::galgasRTTI (void) const {
  return & gClassInfoFor__isr_obj ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                        GALGAS class 'GGS_isr_obj'                         *
//                                                                           *
//---------------------------------------------------------------------------*

GGS_isr_obj::
GGS_isr_obj (cPtr__AC_galgas_class * inPointer) {
  macroAssignPointer (mPointer, inPointer) ;
}

//---------------------------------------------------------------------------*

GGS_isr_obj::
GGS_isr_obj (cPtr__AC_galgas_class & inObject) {
  macroAssignPointer (mPointer, & inObject) ;
}

//---------------------------------------------------------------------------*

//--- _castFrom class method (implements cast expression)
GGS_isr_obj GGS_isr_obj::
_castFrom (C_Compiler & inLexique,
           cPtr__AC_galgas_class * inPointer,
           const bool inUseKindOfClass,
           const GGS_location & inErrorLocation
           COMMA_LOCATION_ARGS) {
  GGS_isr_obj _result ;
  if (inPointer != NULL) {
    macroValidPointer (inPointer) ;
    const bool ok = inUseKindOfClass
      ? (dynamic_cast <cPtr_isr_obj *> (inPointer) != NULL)
      : (typeid (cPtr_isr_obj) == typeid (*inPointer)) ;
    if (ok) {
      _result = GGS_isr_obj (inPointer) ;
    }else{
      inErrorLocation.signalCastError (inLexique,
                                       & typeid (cPtr_isr_obj),
                                       inUseKindOfClass,
                                       inPointer->_message ()
                                       COMMA_THERE) ;
    }
  }
  return _result ;
}

//---------------------------------------------------------------------------*

GGS_isr_obj GGS_isr_obj::
constructor_new (C_Compiler & /* inLexique */,
                 const GGS_lstring & argument_0,
                 const GGS_basic_type & argument_1,
                 const GGS_basic_type & argument_2,
                 const GGS_lstringlist & argument_3,
                 const GGS_lstringlist & argument_4,
                 const GGS_lstringlist & argument_5,
                 const GGS_timing_prot & argument_6,
                 const GGS_ident_map & argument_7
                                COMMA_LOCATION_ARGS) {
  GGS_isr_obj result ;
  macroMyNew (result.mPointer, cPtr_isr_obj (argument_0,
                                argument_1,
                                argument_2,
                                argument_3,
                                argument_4,
                                argument_5,
                                argument_6,
                                argument_7 COMMA_THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------*

GGS_basic_type  GGS_isr_obj::
reader_category (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_basic_type   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_isr_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_isr_obj *) mPointer)->category ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_basic_type  GGS_isr_obj::
reader_priority (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_basic_type   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_isr_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_isr_obj *) mPointer)->priority ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_lstringlist  GGS_isr_obj::
reader_resources (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_isr_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_isr_obj *) mPointer)->resources ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_lstringlist  GGS_isr_obj::
reader_messages (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_isr_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_isr_obj *) mPointer)->messages ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_lstringlist  GGS_isr_obj::
reader_acc_apps (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_isr_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_isr_obj *) mPointer)->acc_apps ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_timing_prot  GGS_isr_obj::
reader_timing_prot (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_timing_prot   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_isr_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_isr_obj *) mPointer)->timing_prot ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_ident_map  GGS_isr_obj::
reader_other_fields (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ident_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_isr_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_isr_obj *) mPointer)->other_fields ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

const char * GGS_isr_obj::actualTypeName (void) const {
  return "isr_obj" ;
}

//---------------------------------------------------------------------------*

C_galgasClassRunTimeInformation gClassInfoFor__isr_obj ("isr_obj", gClassInfoFor__oil_obj) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                            class 'e_isr_map'                              *
//                                                                           *
//---------------------------------------------------------------------------*

e_isr_map::e_isr_map (void) :
isr () {
}

//---------------------------------------------------------------------------*
//                                                                           *
//                           class map '@isr_map'                            *
//                                                                           *
//---------------------------------------------------------------------------*

elementOf_GGS_isr_map::
elementOf_GGS_isr_map (const GGS_lstring & inKey,
              const sint32 inIndex,
              const e_isr_map & inInfo) :
AC_galgas_map_element (inKey, inIndex),
mInfo (inInfo) {
}

//---------------------------------------------------------------------------*

void elementOf_GGS_isr_map::
appendForMapDescription (C_Compiler & _inLexique,
                         const sint32 inElementIndex,
                         C_String & ioString,
                         const sint32 inIndentation
                         COMMA_LOCATION_ARGS) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "|-key " << inElementIndex << ":" << mKey.reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "|-value " << inElementIndex << ":" << mInfo.isr.reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;
}

//---------------------------------------------------------------------------*

bool elementOf_GGS_isr_map::
isEqualToMapElement (const AC_galgas_map_element * inOperand) const {
  const elementOf_GGS_isr_map * _p = dynamic_cast <const elementOf_GGS_isr_map *> (inOperand) ;
  macroValidPointer (_p) ;
  return (mInfo.isr._operator_isEqual (_p->mInfo.isr)).boolValue () ;
}

//---------------------------------------------------------------------------*

AC_galgas_map_element * GGS_isr_map::
new_element (const GGS_lstring & inKey, void * inInfo) {
  MF_Assert (reinterpret_cast <e_isr_map *> (inInfo) != NULL, "Dynamic cast error", 0, 0) ;
  AC_galgas_map_element * p = NULL ;
  e_isr_map * info = (e_isr_map *) inInfo ;
  macroMyNew (p, cElement (inKey, nextIndex (), * info)) ;
  return p ;
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
assignInfo (AC_galgas_map_element * inPtr, void * inInfo) {
  MF_Assert (reinterpret_cast <cElement *> (inPtr) != NULL, "Dynamic cast error", 0, 0) ;
  MF_Assert (reinterpret_cast <e_isr_map *> (inInfo) != NULL, "Dynamic cast error", 0, 0) ;
  cElement * p = (cElement *) inPtr ;
  e_isr_map * info = (e_isr_map *) inInfo ;
  p->mInfo = * info ;
}

//---------------------------------------------------------------------------*

GGS_isr_map GGS_isr_map::
constructor_emptyMap (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {
  GGS_isr_map result ;
  macroMyNew (result.mSharedMapRoot, cMapRoot) ;
  return result ;
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
enterIndex (const GGS_lstring & inKey,
            AC_galgas_index_core & outIndex) {
  e_isr_map info  ;
  internalEnterIndex (inKey,
                      (void *) & info,
                      mSharedMapRoot->_mRoot,
                      outIndex) ;
}

//---------------------------------------------------------------------------*

GGS_bool GGS_isr_map::
_operator_isEqual (const GGS_isr_map & inOperand) const {
  return GGS_bool (_isBuilt () && inOperand._isBuilt (), isEqualToMap (inOperand)) ;
}

//---------------------------------------------------------------------------*

GGS_bool GGS_isr_map::
_operator_isNotEqual (const GGS_isr_map & inOperand) const {
  return GGS_bool (_isBuilt () && inOperand._isBuilt (), ! isEqualToMap (inOperand)) ;
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
internalInsertForDuplication (AC_galgas_map_element * inPtr) {
  MF_Assert (reinterpret_cast <cElement *> (inPtr) != NULL, "Dynamic cast error", 0, 0) ;
  cElement * p = (cElement *) inPtr ;
  sint32 attributeIndex = -1 ; // Unused here
  GGS_location existingKeyLocation ; // Unused here
  internalInsert (p->mKey, (void *) & p->mInfo,mSharedMapRoot->_mRoot, attributeIndex, existingKeyLocation) ;
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
_removeElement (C_Compiler & inLexique,
                const char * inErrorMessage,
                const GGS_lstring & inKey,
                GGS_isr_obj & outParameter0,
                GGS_luint * outIndex
                COMMA_LOCATION_ARGS) {
  AC_galgas_map_element * removedElement = NULL ;
  sint32 elementID = - 1 ;
  if (_isBuilt () && inKey._isBuilt ()) {
    insulateMap () ;
    bool unused ;
    _internalRemove (mSharedMapRoot->_mRoot, inKey, removedElement, unused) ;
    if (removedElement == NULL) {
      emitMapSemanticErrorMessage (inLexique, inKey, inErrorMessage COMMA_THERE) ;
      outParameter0._drop () ;
    }else{
      cElement * _p = (cElement *) removedElement ;
      elementID = _p->mID ;
      outParameter0 = _p->mInfo.isr ;
    }
  }
  if (outIndex != NULL) {
    * outIndex = GGS_luint (GGS_uint (elementID >= 0, (uint32) elementID), inKey) ;
  }
  macroMyDelete (removedElement, cElement) ;
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
_insertElement (C_Compiler & inLexique,
                const char * inErrorMessage,
                const GGS_lstring & inKey,
                const GGS_isr_obj & inParameter0,
                GGS_luint * outIndex
                COMMA_LOCATION_ARGS) {
  sint32 elementID = - 1 ;
  if (_isBuilt ()
   && inParameter0._isBuilt ()
   && inKey._isBuilt ()) {
    insulateMap () ;
    e_isr_map info  ;
    info.isr = inParameter0 ;
    GGS_location existingKeyLocation ;
    internalInsert (inKey, (void *) & info, mSharedMapRoot->_mRoot, elementID, existingKeyLocation) ;
    if (elementID < 0) {
      emitInsertMapSemanticErrorMessage (inLexique, inKey, inErrorMessage, existingKeyLocation COMMA_THERE) ;
    }
  }
  if (outIndex != NULL) {
    * outIndex = GGS_luint (GGS_uint (elementID >= 0, (uint32) elementID), inKey) ;
  }
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
_searchElement (C_Compiler & inLexique,
               const char * inErrorMessage,
               const GGS_lstring & inKey,
               GGS_isr_obj   & outParameter0,
               GGS_luint * outIndex
               COMMA_LOCATION_ARGS) const {
  cElement * node = NULL  ;
  if (_isBuilt () && inKey._isBuilt ()) {
    AC_galgas_map_element * p = internal_search (inKey.string ()) ;
    MF_Assert ((p == NULL) || (reinterpret_cast <cElement *> (p) != NULL), "Dynamic cast error", 0, 0) ;
    node = (cElement *) p ;
    if (node == NULL) {
      emitMapSemanticErrorMessage (inLexique, inKey, inErrorMessage COMMA_THERE) ;
    }
  }
  if (node == NULL) {
    outParameter0._drop () ;
    if (outIndex != NULL) {
      outIndex->_drop () ;
     }
  }else{
    outParameter0 = node->mInfo.isr ;
    if (outIndex != NULL) {
      * outIndex = GGS_luint (GGS_uint (true, (uint32) node->mID), inKey) ;
    }
  }
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
modifier_setIsrForKey (C_Compiler & inLexique,
                        const GGS_isr_obj & inValue,
                        const GGS_string & inKey
                        COMMA_LOCATION_ARGS) {
  if (_isBuilt () && inValue._isBuilt () && inKey._isBuilt ()) {
    insulateMap () ;
    AC_galgas_map_element * p = internal_search (inKey.string ()) ;
    MF_Assert ((p == NULL) || (reinterpret_cast <cElement *> (p) != NULL), "Dynamic cast error", 0, 0) ;
    cElement * node = (cElement *) p ;
    if (node == NULL) {
      C_String errorMessage ;
      errorMessage << "the '" << inKey << "' key does not exist when calling 'setIsrForKey' modifier" ;
      inLexique.onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      node->mInfo.isr = inValue ;
    }
  }
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
method_get (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_isr_obj   & outParameter0 COMMA_LOCATION_ARGS) const {
  _searchElement (inLexique,
                  "IRS %K is not defined",
                  inKey,
                  outParameter0,
                  NULL
                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
modifier_del (C_Compiler & _inLexique,
                                const GGS_lstring & inKey,
                                GGS_isr_obj & outParameter0 COMMA_LOCATION_ARGS) {
  _removeElement (_inLexique,
                  "ISR %K is not defined",
                  inKey,
                  outParameter0,
                  NULL
                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

void GGS_isr_map::
modifier_put (C_Compiler & _inLexique,
                                const GGS_lstring & inKey,
                                const GGS_isr_obj & inParameter0 COMMA_LOCATION_ARGS) {
  _insertElement (_inLexique,
                 "ISR %K is duplicated in %L",
                 inKey,
                 inParameter0,
                 NULL
                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

GGS_isr_map GGS_isr_map::
constructor_mapWithMapToOverride (C_Compiler & /* inLexique */,
                                  const GGS_isr_map & inMapToOverride
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_isr_map result ; // Not Built
  if (inMapToOverride.mSharedMapRoot != NULL) {
    macroValidPointer (inMapToOverride.mSharedMapRoot) ;
    macroMyNew (result.mSharedMapRoot, cMapRoot) ;
    result.mSharedMapRoot->mNextMap = inMapToOverride.mSharedMapRoot ;
    inMapToOverride.mSharedMapRoot->mReferenceCount ++ ;
    result.mSharedMapRoot->mSequenceNumber = inMapToOverride.mSharedMapRoot->mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_isr_map GGS_isr_map::
reader_overriddenMap (C_Compiler & /* inLexique */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_isr_map result ; // Not Built
  if (mSharedMapRoot != NULL) {
    macroValidPointer (mSharedMapRoot) ;
    result.mSharedMapRoot = mSharedMapRoot->mNextMap ;
    if (result.mSharedMapRoot != NULL) {
      macroValidPointer (result.mSharedMapRoot) ;
      result.mSharedMapRoot->mReferenceCount ++ ;
    }else{
      macroMyNew (result.mSharedMapRoot, cMapRoot) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_string GGS_isr_map::
reader_description (C_Compiler & _inLexique
                    COMMA_LOCATION_ARGS,
                    const sint32 inIndentation) const {
  C_String s ;
  s << "<map @isr_map " ;
  if (_isBuilt ()) {
    s << count () << " object" << ((count () > 1) ? "s " : " ") ;
    cElement * p = firstObject () ;
    sint32 elementID = 0 ;
    while (p != NULL) {
      macroValidPointer (p) ;
      p->appendForMapDescription (_inLexique, elementID, s, inIndentation COMMA_THERE) ;
      p = p->nextObject () ;
      elementID ++ ;
    }
  }else{
    s << "not built" ;
  }
  s << "\n" ;
  s.writeStringMultiple ("| ", inIndentation) ;
  s << ">" ;
  return GGS_string (true, s) ;
}

//---------------------------------------------------------------------------*

/* const */ GGS_isr_obj  & GGS_isr_map::cEnumerator::_isr (LOCATION_ARGS) const {
  return ((cElement *) mObjectArray (mCurrentIndex COMMA_THERE))->mInfo.isr ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                       Element of list '@isr_list'                         *
//                                                                           *
//---------------------------------------------------------------------------*

elementOf_GGS_isr_list::
elementOf_GGS_isr_list (const GGS_lstring & argument_0,
                                const GGS_string& argument_1):
key (argument_0),
sort (argument_1) {
}

//---------------------------------------------------------------------------*

bool elementOf_GGS_isr_list::
isEqualToObject (const cSortedListElement * inOperand) const {
  bool equal = inOperand == this ;
  if (! equal) {
    const elementOf_GGS_isr_list * _p = dynamic_cast <const elementOf_GGS_isr_list *> (inOperand) ;
    macroValidPointer (_p) ;
    equal = key._operator_isEqual (_p->key).boolValue ()
         && sort._operator_isEqual (_p->sort).boolValue () ;
  }
  return equal ;
}

//---------------------------------------------------------------------------*

sint32 elementOf_GGS_isr_list::
compareForSorting (const cSortedListElement * inOperand) const {
  elementOf_GGS_isr_list * operand = (elementOf_GGS_isr_list *) inOperand ;
  sint32 result = sort.compareForSortedList (operand->sort) ;
  return result ;
}

//---------------------------------------------------------------------------*

void elementOf_GGS_isr_list::
appendForDescription (C_Compiler & _inLexique,
                      C_String & ioString,
                      const sint32 inIndentation
                      COMMA_LOCATION_ARGS) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "|-" ;
  ioString << key.reader_description  (_inLexique COMMA_THERE, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "|-" ;
  ioString << sort.reader_description  (_inLexique COMMA_THERE, inIndentation) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                             List '@isr_list'                              *
//                                                                           *
//---------------------------------------------------------------------------*

GGS_isr_list::GGS_isr_list (void): AC_galgas_sortedlist () { // Default Constructor
}

//---------------------------------------------------------------------------*

GGS_isr_list::
GGS_isr_list (const GGS_isr_list & inSource): AC_galgas_sortedlist (inSource) {
}

//---------------------------------------------------------------------------*

GGS_bool GGS_isr_list::
_operator_isEqual (const GGS_isr_list & inOperand) const {
  return GGS_bool (_isBuilt () && inOperand._isBuilt (), isEqualToList (inOperand)) ;
}

//---------------------------------------------------------------------------*

GGS_bool GGS_isr_list::
_operator_isNotEqual (const GGS_isr_list & inOperand) const {
  return GGS_bool (_isBuilt () && inOperand._isBuilt (), ! isEqualToList (inOperand)) ;
}

//---------------------------------------------------------------------------*

void GGS_isr_list::
_internalAppendValues (const GGS_lstring & argument_0,
                    const GGS_string& argument_1) {
  cElement * nouvelElement = (cElement *) NULL ;
  macroMyNew (nouvelElement, cElement (argument_0,
                                argument_1)) ;
  _internalAppendItem (nouvelElement) ;
}

//---------------------------------------------------------------------------*

void GGS_isr_list::
_addAssign_operation (const GGS_lstring & argument_0,
                                const GGS_string& argument_1) {
  if (_isBuilt ()) {
    _insulateList () ;
    _internalAppendValues (argument_0,
                                argument_1) ;
  }
}

//---------------------------------------------------------------------------*

GGS_isr_list GGS_isr_list::
_operator_concat (const GGS_isr_list & inOperand) const {
  GGS_isr_list result = * this ;
  result._dotAssign_operation (inOperand) ;
  return result ;
}

//---------------------------------------------------------------------------*

void GGS_isr_list::
_dotAssign_operation (const GGS_isr_list inOperand) {
  if (_isBuilt () && inOperand._isBuilt ()) {
    if (count () == 0) {
      *this = inOperand ;
    }else{
      if (inOperand.count () > 0) {
        _insulateList () ;
        elementOf_GGS_isr_list * p = inOperand.firstObject () ;
        while (p != NULL) {
          macroValidPointer (p) ;
          GGS_lstring  p_0 = p->key ;
          GGS_string p_1 = p->sort ;
          _internalAppendValues (p_0, p_1) ;
          p = p->nextObject () ;
        }
      }
    }
  }
}

//---------------------------------------------------------------------------*

void GGS_isr_list::
_insulateList (void) {
  if (_shared ()) {
    cElement * _p = firstObject () ;
    _alloc () ;
    while (_p != NULL) {
      macroValidPointer (_p) ;
      _internalAppendValues (_p->key,
                                _p->sort) ;
      _p = _p->nextObject () ;
    }
  }
}

//---------------------------------------------------------------------------*

GGS_isr_list  GGS_isr_list::
constructor_emptySortedList (void) {
  GGS_isr_list result ;
  result._alloc () ;
  return result ;
}

//---------------------------------------------------------------------------*

GGS_isr_list  GGS_isr_list::
constructor_sortedListWithValue (const GGS_lstring & argument_0,
                           const GGS_string& argument_1) {
  GGS_isr_list result ;
  result._alloc () ;
  result._addAssign_operation (argument_0, argument_1) ;
  return result ;
}

//---------------------------------------------------------------------------*

GGS_string GGS_isr_list::
reader_description (C_Compiler & _inLexique
                    COMMA_LOCATION_ARGS,
                    const sint32 inIndentation) const {
  return _description (_inLexique, "@isr_list", inIndentation COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

void GGS_isr_list::
method_smallest (C_Compiler & _inLexique,
                 GGS_lstring & _out_0,
                 GGS_string& _out_1
                 COMMA_LOCATION_ARGS) const {
  cElement * _p = NULL ;
  if (_isBuilt ()) {
    _p = firstObject () ;
    if (_p == NULL) {
      _inLexique.onTheFlyRunTimeError ("'first' method invoked on an empty list" COMMA_THERE) ;
    }
  }
  if (_p != NULL) {
    _out_0 = _p->key ;
    _out_1 = _p->sort ;
  }else{
    _out_0._drop () ;
    _out_1._drop () ;
  }
}

//---------------------------------------------------------------------------*

void GGS_isr_list::
method_greatest (C_Compiler & _inLexique,
             GGS_lstring & _out_0,
             GGS_string& _out_1
             COMMA_LOCATION_ARGS) const {
  cElement * _p = NULL ;
  if (_isBuilt ()) {
    _p = lastObject () ;
    if (_p == NULL) {
      _inLexique.onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }
  }
  if (_p != NULL) {
    _out_0 = _p->key ;
    _out_1 = _p->sort ;
  }else{
    _out_0._drop () ;
    _out_1._drop () ;
  }
}

//---------------------------------------------------------------------------*

void GGS_isr_list::
modifier_popSmallest (C_Compiler & _inLexique,
                 GGS_lstring & _out_0,
                 GGS_string& _out_1
                 COMMA_LOCATION_ARGS) {
  cElement * _p = NULL ;
  if (_isBuilt ()) {
    _p = firstObject () ;
    if (_p == NULL) {
      _inLexique.onTheFlyRunTimeError ("'popSmallest' modifier invoked on an empty list" COMMA_THERE) ;
    }
  }
  if (_p != NULL) {
    _out_0 = _p->key ;
    _out_1 = _p->sort ;
    _insulateList () ;
    _internalRemoveSmallest () ;
  }else{
    _out_0._drop () ;
    _out_1._drop () ;
  }
}

//---------------------------------------------------------------------------*

void GGS_isr_list::
modifier_popGreatest (C_Compiler & _inLexique,
                GGS_lstring & _out_0,
                GGS_string& _out_1
                COMMA_LOCATION_ARGS) {
  cElement * _p = NULL ;
  if (_isBuilt ()) {
    _p = lastObject () ;
    if (_p == NULL) {
      _inLexique.onTheFlyRunTimeError ("'popGreatest' modifier invoked on an empty list" COMMA_THERE) ;
    }
  }
  if (_p != NULL) {
    _out_0 = _p->key ;
    _out_1 = _p->sort ;
    _insulateList () ;
    _internalRemoveGreatest () ;
  }else{
    _out_0._drop () ;
    _out_1._drop () ;
  }
}

//---------------------------------------------------------------------------*

/* const */ GGS_lstring  & GGS_isr_list::cEnumerator::_key (LOCATION_ARGS) const {
  macroValidPointerThere (mCurrentEnumeratedObject) ;
  return ((cElement *) mCurrentEnumeratedObject)->key ;
}

//---------------------------------------------------------------------------*

/* const */ GGS_string & GGS_isr_list::cEnumerator::_sort (LOCATION_ARGS) const {
  macroValidPointerThere (mCurrentEnumeratedObject) ;
  return ((cElement *) mCurrentEnumeratedObject)->sort ;
}

//---------------------------------------------------------------------------*

