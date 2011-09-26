// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDocStd_DocumentRetrievalDriver_HeaderFile
#define _MDocStd_DocumentRetrievalDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MDocStd_DocumentRetrievalDriver_HeaderFile
#include <Handle_MDocStd_DocumentRetrievalDriver.hxx>
#endif

#ifndef _Handle_MDF_ARDriverTable_HeaderFile
#include <Handle_MDF_ARDriverTable.hxx>
#endif
#ifndef _PCDM_RetrievalDriver_HeaderFile
#include <PCDM_RetrievalDriver.hxx>
#endif
#ifndef _Handle_PDocStd_Document_HeaderFile
#include <Handle_PDocStd_Document.hxx>
#endif
#ifndef _Handle_TDocStd_Document_HeaderFile
#include <Handle_TDocStd_Document.hxx>
#endif
#ifndef _Handle_MDF_RRelocationTable_HeaderFile
#include <Handle_MDF_RRelocationTable.hxx>
#endif
#ifndef _Handle_PCDM_Document_HeaderFile
#include <Handle_PCDM_Document.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class MDF_ARDriverTable;
class PDocStd_Document;
class TDocStd_Document;
class MDF_RRelocationTable;
class PCDM_Document;
class CDM_Document;
class TCollection_ExtendedString;
class CDM_MessageDriver;


//! retrieval driver of a standard document <br>
class MDocStd_DocumentRetrievalDriver : public PCDM_RetrievalDriver {

public:

  
  Standard_EXPORT   MDocStd_DocumentRetrievalDriver();
  //! deferred methods of RetrievalDriver from PCDM <br>
//!          ============================================= <br>
  Standard_EXPORT     void Paste(const Handle(PDocStd_Document)& PDOC,const Handle(TDocStd_Document)& TDOC,const Handle(MDF_RRelocationTable)& aReloc) ;
  //! virtual methods (may be redefined by specialized application) <br>
//!          ============================================================= <br>
  Standard_EXPORT     void Make(const Handle(PCDM_Document)& aPCDM,const Handle(CDM_Document)& aCDM) ;
  
  Standard_EXPORT   virtual  TCollection_ExtendedString SchemaName() const;
  //! returns an empty TDocStd_Document. may be redefined; <br>
  Standard_EXPORT   virtual  Handle_CDM_Document CreateDocument() ;
  
  Standard_EXPORT   virtual  Handle_MDF_ARDriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMessageDriver) ;




  DEFINE_STANDARD_RTTI(MDocStd_DocumentRetrievalDriver)

protected:




private: 


Handle_MDF_ARDriverTable myDrivers;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif