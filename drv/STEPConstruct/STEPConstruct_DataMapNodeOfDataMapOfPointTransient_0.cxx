// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <STEPConstruct_DataMapNodeOfDataMapOfPointTransient.hxx>

#include <Standard_Type.hxx>

#include <Standard_Transient.hxx>
#include <gp_Pnt.hxx>
#include <STEPConstruct_PointHasher.hxx>
#include <STEPConstruct_DataMapOfPointTransient.hxx>
#include <STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx>

 


IMPLEMENT_STANDARD_TYPE(STEPConstruct_DataMapNodeOfDataMapOfPointTransient)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(STEPConstruct_DataMapNodeOfDataMapOfPointTransient)


IMPLEMENT_DOWNCAST(STEPConstruct_DataMapNodeOfDataMapOfPointTransient,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(STEPConstruct_DataMapNodeOfDataMapOfPointTransient)


#define TheKey gp_Pnt
#define TheKey_hxx <gp_Pnt.hxx>
#define TheItem Handle(Standard_Transient)
#define TheItem_hxx <Standard_Transient.hxx>
#define Hasher STEPConstruct_PointHasher
#define Hasher_hxx <STEPConstruct_PointHasher.hxx>
#define TCollection_DataMapNode STEPConstruct_DataMapNodeOfDataMapOfPointTransient
#define TCollection_DataMapNode_hxx <STEPConstruct_DataMapNodeOfDataMapOfPointTransient.hxx>
#define TCollection_DataMapIterator STEPConstruct_DataMapIteratorOfDataMapOfPointTransient
#define TCollection_DataMapIterator_hxx <STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx>
#define Handle_TCollection_DataMapNode Handle_STEPConstruct_DataMapNodeOfDataMapOfPointTransient
#define TCollection_DataMapNode_Type_() STEPConstruct_DataMapNodeOfDataMapOfPointTransient_Type_()
#define TCollection_DataMap STEPConstruct_DataMapOfPointTransient
#define TCollection_DataMap_hxx <STEPConstruct_DataMapOfPointTransient.hxx>
#include <TCollection_DataMapNode.gxx>

