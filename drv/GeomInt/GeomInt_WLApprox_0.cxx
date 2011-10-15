// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <GeomInt_WLApprox.hxx>

#ifndef _Standard_OutOfRange_HeaderFile
#include <Standard_OutOfRange.hxx>
#endif
#ifndef _StdFail_NotDone_HeaderFile
#include <StdFail_NotDone.hxx>
#endif
#ifndef _Adaptor3d_HSurface_HeaderFile
#include <Adaptor3d_HSurface.hxx>
#endif
#ifndef _Adaptor3d_HSurfaceTool_HeaderFile
#include <Adaptor3d_HSurfaceTool.hxx>
#endif
#ifndef _IntSurf_Quadric_HeaderFile
#include <IntSurf_Quadric.hxx>
#endif
#ifndef _IntSurf_QuadricTool_HeaderFile
#include <IntSurf_QuadricTool.hxx>
#endif
#ifndef _IntPatch_WLine_HeaderFile
#include <IntPatch_WLine.hxx>
#endif
#ifndef _GeomInt_ThePrmPrmSvSurfacesOfWLApprox_HeaderFile
#include <GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx>
#endif
#ifndef _GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox_HeaderFile
#include <GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#endif
#ifndef _GeomInt_TheImpPrmSvSurfacesOfWLApprox_HeaderFile
#include <GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx>
#endif
#ifndef _GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox_HeaderFile
#include <GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx>
#endif
#ifndef _GeomInt_TheMultiLineOfWLApprox_HeaderFile
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#endif
#ifndef _GeomInt_TheMultiLineToolOfWLApprox_HeaderFile
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#endif
#ifndef _GeomInt_TheComputeLineOfWLApprox_HeaderFile
#include <GeomInt_TheComputeLineOfWLApprox.hxx>
#endif
#ifndef _GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox_HeaderFile
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#endif
#ifndef _GeomInt_MyGradientbisOfTheComputeLineOfWLApprox_HeaderFile
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#endif
#ifndef _GeomInt_TheComputeLineBezierOfWLApprox_HeaderFile
#include <GeomInt_TheComputeLineBezierOfWLApprox.hxx>
#endif
#ifndef _GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox_HeaderFile
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#endif
#ifndef _AppParCurves_MultiBSpCurve_HeaderFile
#include <AppParCurves_MultiBSpCurve.hxx>
#endif
 

#define ThePSurface Handle_Adaptor3d_HSurface
#define ThePSurface_hxx <Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define TheISurface IntSurf_Quadric
#define TheISurface_hxx <IntSurf_Quadric.hxx>
#define TheISurfaceTool IntSurf_QuadricTool
#define TheISurfaceTool_hxx <IntSurf_QuadricTool.hxx>
#define Handle_TheWLine Handle_IntPatch_WLine
#define TheWLine IntPatch_WLine
#define TheWLine_hxx <IntPatch_WLine.hxx>
#define ApproxInt_ThePrmPrmSvSurfaces GeomInt_ThePrmPrmSvSurfacesOfWLApprox
#define ApproxInt_ThePrmPrmSvSurfaces_hxx <GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx>
#define ApproxInt_TheInt2SOfThePrmPrmSvSurfaces GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox
#define ApproxInt_TheInt2SOfThePrmPrmSvSurfaces_hxx <GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#define ApproxInt_TheInt2SOfThePrmPrmSvSurfaces GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox
#define ApproxInt_TheInt2SOfThePrmPrmSvSurfaces_hxx <GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#define ApproxInt_TheImpPrmSvSurfaces GeomInt_TheImpPrmSvSurfacesOfWLApprox
#define ApproxInt_TheImpPrmSvSurfaces_hxx <GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx>
#define ApproxInt_TheZerImpFuncOfTheImpPrmSvSurfaces GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox
#define ApproxInt_TheZerImpFuncOfTheImpPrmSvSurfaces_hxx <GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx>
#define ApproxInt_TheZerImpFuncOfTheImpPrmSvSurfaces GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox
#define ApproxInt_TheZerImpFuncOfTheImpPrmSvSurfaces_hxx <GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx>
#define ApproxInt_TheMultiLine GeomInt_TheMultiLineOfWLApprox
#define ApproxInt_TheMultiLine_hxx <GeomInt_TheMultiLineOfWLApprox.hxx>
#define ApproxInt_TheMultiLineTool GeomInt_TheMultiLineToolOfWLApprox
#define ApproxInt_TheMultiLineTool_hxx <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#define ApproxInt_TheComputeLine GeomInt_TheComputeLineOfWLApprox
#define ApproxInt_TheComputeLine_hxx <GeomInt_TheComputeLineOfWLApprox.hxx>
#define ApproxInt_MyBSplGradientOfTheComputeLine GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox
#define ApproxInt_MyBSplGradientOfTheComputeLine_hxx <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#define ApproxInt_MyGradientbisOfTheComputeLine GeomInt_MyGradientbisOfTheComputeLineOfWLApprox
#define ApproxInt_MyGradientbisOfTheComputeLine_hxx <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#define ApproxInt_MyBSplGradientOfTheComputeLine GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox
#define ApproxInt_MyBSplGradientOfTheComputeLine_hxx <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#define ApproxInt_MyGradientbisOfTheComputeLine GeomInt_MyGradientbisOfTheComputeLineOfWLApprox
#define ApproxInt_MyGradientbisOfTheComputeLine_hxx <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#define ApproxInt_TheComputeLineBezier GeomInt_TheComputeLineBezierOfWLApprox
#define ApproxInt_TheComputeLineBezier_hxx <GeomInt_TheComputeLineBezierOfWLApprox.hxx>
#define ApproxInt_MyGradientOfTheComputeLineBezier GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox
#define ApproxInt_MyGradientOfTheComputeLineBezier_hxx <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#define ApproxInt_MyGradientOfTheComputeLineBezier GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox
#define ApproxInt_MyGradientOfTheComputeLineBezier_hxx <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#define ApproxInt_Approx GeomInt_WLApprox
#define ApproxInt_Approx_hxx <GeomInt_WLApprox.hxx>
#include <ApproxInt_Approx.gxx>
