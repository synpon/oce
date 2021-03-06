// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile_HeaderFile
#define _STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_STEPCAFControl_ExternFile.hxx>
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfLabelExternFile.hxx>
class Standard_NoSuchObject;
class TDF_Label;
class STEPCAFControl_ExternFile;
class TDF_LabelMapHasher;
class STEPCAFControl_DataMapOfLabelExternFile;
class STEPCAFControl_DataMapNodeOfDataMapOfLabelExternFile;



class STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile();
  
  Standard_EXPORT STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile(const STEPCAFControl_DataMapOfLabelExternFile& aMap);
  
  Standard_EXPORT   void Initialize (const STEPCAFControl_DataMapOfLabelExternFile& aMap) ;
  
  Standard_EXPORT  const  TDF_Label& Key()  const;
  
  Standard_EXPORT  const  Handle(STEPCAFControl_ExternFile)& Value()  const;




protected:





private:





};







#endif // _STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile_HeaderFile
