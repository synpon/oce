// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Plane_HeaderFile
#define _AIS_Plane_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AIS_Plane.hxx>

#include <Handle_Geom_Plane.hxx>
#include <Handle_Geom_Axis2Placement.hxx>
#include <gp_Pnt.hxx>
#include <Standard_Boolean.hxx>
#include <AIS_TypeOfPlane.hxx>
#include <Select3D_TypeOfSensitivity.hxx>
#include <AIS_InteractiveObject.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Handle_AIS_InteractiveContext.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Prs3d_Projector.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <SelectMgr_Selection.hxx>
#include <Quantity_NameOfColor.hxx>
class Geom_Plane;
class Geom_Axis2Placement;
class gp_Pnt;
class AIS_InteractiveContext;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class Quantity_Color;


//! Constructs plane datums to be used in construction of
//! composite shapes.
class AIS_Plane : public AIS_InteractiveObject
{

public:

  
  //! initializes the plane aComponent. If
  //! the mode aCurrentMode equals true, the drawing
  //! tool, "Drawer" is not initialized.
  Standard_EXPORT AIS_Plane(const Handle(Geom_Plane)& aComponent, const Standard_Boolean aCurrentMode = Standard_False);
  
  //! initializes the plane aComponent and
  //! the point aCenter. If the mode aCurrentMode
  //! equals true, the drawing tool, "Drawer" is not
  //! initialized. aCurrentMode equals true, the drawing
  //! tool, "Drawer" is not initialized.
  Standard_EXPORT AIS_Plane(const Handle(Geom_Plane)& aComponent, const gp_Pnt& aCenter, const Standard_Boolean aCurrentMode = Standard_False);
  
  //! initializes the plane aComponent, the
  //! point aCenter, and the minimum and maximum
  //! points, aPmin and aPmax. If the mode
  //! aCurrentMode equals true, the drawing tool, "Drawer" is not initialized.
  Standard_EXPORT AIS_Plane(const Handle(Geom_Plane)& aComponent, const gp_Pnt& aCenter, const gp_Pnt& aPmin, const gp_Pnt& aPmax, const Standard_Boolean aCurrentMode = Standard_False);
  
  Standard_EXPORT AIS_Plane(const Handle(Geom_Axis2Placement)& aComponent, const AIS_TypeOfPlane aPlaneType, const Standard_Boolean aCurrentMode = Standard_False);
  
  //! Same value for x and y directions
  Standard_EXPORT   void SetSize (const Standard_Real aValue) ;
  
  //! Sets the size defined by the length along the X axis
  //! XVal and the length along the Y axis YVal.
  Standard_EXPORT   void SetSize (const Standard_Real Xval, const Standard_Real YVal) ;
  
  Standard_EXPORT   void UnsetSize() ;
  
  Standard_EXPORT   Standard_Boolean Size (Standard_Real& X, Standard_Real& Y)  const;
  
      Standard_Boolean HasOwnSize()  const;
  
  Standard_EXPORT virtual   Standard_Integer Signature()  const;
  
  Standard_EXPORT virtual   AIS_KindOfInteractive Type()  const;
  
  //! Returns the component specified in SetComponent.
     const  Handle(Geom_Plane)& Component() ;
  
  //! Creates an instance of the plane aComponent.
  Standard_EXPORT   void SetComponent (const Handle(Geom_Plane)& aComponent) ;
  
  //! Returns the settings for the selected plane
  //! aComponent, provided in SetPlaneAttributes.
  //! These include the points aCenter, aPmin, and aPmax
  Standard_EXPORT   Standard_Boolean PlaneAttributes (Handle(Geom_Plane)& aComponent, gp_Pnt& aCenter, gp_Pnt& aPmin, gp_Pnt& aPmax) ;
  
  //! Allows you to provide settings other than default ones
  //! for the selected plane. These include: center point
  //! aCenter, maximum aPmax and minimum aPmin.
  Standard_EXPORT   void SetPlaneAttributes (const Handle(Geom_Plane)& aComponent, const gp_Pnt& aCenter, const gp_Pnt& aPmin, const gp_Pnt& aPmax) ;
  
  //! Returns the coordinates of the center point.
     const  gp_Pnt& Center()  const;
  

  //! Provides settings for the center aCenter other than (0, 0, 0).
      void SetCenter (const gp_Pnt& aCenter) ;
  
  //! Allows you to provide settings for the position and
  //! direction of one of the plane's axes, aComponent, in
  //! 3D space. The coordinate system used is
  //! right-handed, and the type of plane aPlaneType is one of:
  //! -   AIS_ TOPL_Unknown
  //! -   AIS_ TOPL_XYPlane
  //! -   AIS_ TOPL_XZPlane
  //! -   AIS_ TOPL_YZPlane}.
  Standard_EXPORT   void SetAxis2Placement (const Handle(Geom_Axis2Placement)& aComponent, const AIS_TypeOfPlane aPlaneType) ;
  
  //! Returns the position of the plane's axis2 system
  //! identifying the x, y, or z axis and giving the plane a
  //! direction in 3D space. An axis2 system is a right-handed coordinate system.
  Standard_EXPORT   Handle(Geom_Axis2Placement) Axis2Placement() ;
  
  //! Returns the type of plane - xy, yz, xz or unknown.
      AIS_TypeOfPlane TypeOfPlane() ;
  
  //! Returns the type of plane - xy, yz, or xz.
      Standard_Boolean IsXYZPlane() ;
  
  //! Returns the non-default current display mode set by SetCurrentMode.
      Standard_Boolean CurrentMode() ;
  

  //! Allows you to provide settings for a non-default
  //! current display mode.
      void SetCurrentMode (const Standard_Boolean aCurrentMode) ;
  
  //! Returns true if the display mode selected, aMode, is valid for planes.
  Standard_EXPORT virtual   Standard_Boolean AcceptDisplayMode (const Standard_Integer aMode)  const;
  
  //! connection to <aCtx> default drawer implies a recomputation of Frame values.
  Standard_EXPORT virtual   void SetContext (const Handle(AIS_InteractiveContext)& aCtx) ;
  
  //! Returns the type of sensitivity for the plane;
      Select3D_TypeOfSensitivity TypeOfSensitivity()  const;
  
  //! Sets the type of sensitivity for the plane.
      void SetTypeOfSensitivity (const Select3D_TypeOfSensitivity& theTypeOfSensitivity) ;
  
  //! computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT virtual   void ComputeSelection (const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode) ;
  
  Standard_EXPORT   void SetColor (const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT   void SetColor (const Quantity_Color& aColor) ;
  
  Standard_EXPORT   void UnsetColor() ;




  DEFINE_STANDARD_RTTI(AIS_Plane)

protected:




private: 

  
  Standard_EXPORT virtual   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeFrame() ;
  
  Standard_EXPORT   void ComputeFields() ;
  
  Standard_EXPORT   void InitDrawerAttributes() ;

  Handle(Geom_Plane) myComponent;
  Handle(Geom_Axis2Placement) myAx2;
  gp_Pnt myCenter;
  gp_Pnt myPmin;
  gp_Pnt myPmax;
  Standard_Boolean myCurrentMode;
  Standard_Boolean myAutomaticPosition;
  AIS_TypeOfPlane myTypeOfPlane;
  Standard_Boolean myIsXYZPlane;
  Standard_Boolean myHasOwnSize;
  Select3D_TypeOfSensitivity myTypeOfSensitivity;


};


#include <AIS_Plane.lxx>





#endif // _AIS_Plane_HeaderFile
