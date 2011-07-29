// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus_HeaderFile
#define _BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus_HeaderFile
#include <Handle_BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class BRepCheck_ListOfStatus;
class TopTools_ShapeMapHasher;
class BRepCheck_DataMapOfShapeListOfStatus;
class BRepCheck_DataMapNodeOfDataMapOfShapeListOfStatus;



class BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus  : public TCollection_BasicMapIterator {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus();
  
  Standard_EXPORT   BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus(const BRepCheck_DataMapOfShapeListOfStatus& aMap);
  
  Standard_EXPORT     void Initialize(const BRepCheck_DataMapOfShapeListOfStatus& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const BRepCheck_ListOfStatus& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif