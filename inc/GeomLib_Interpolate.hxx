// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomLib_Interpolate_HeaderFile
#define _GeomLib_Interpolate_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_BSplineCurve.hxx>
#include <Standard_Boolean.hxx>
#include <GeomLib_InterpolationErrors.hxx>
#include <Standard_Integer.hxx>
class Geom_BSplineCurve;
class StdFail_NotDone;
class Standard_OutOfRange;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;


//! this class is used to construct a BSpline curve by
//! interpolation  of points  at given parameters  The
//! continuity   of the curve   is degree -  1 and the
//! method used when boundary  condition are not given
//! is to use odd degrees  and null the derivatives on
//! both sides from degree -1 down to (degree+1) / 2
//! When even degree is given the returned curve is of
//! degree - 1 so that the degree of the curve is odd
class GeomLib_Interpolate 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomLib_Interpolate(const Standard_Integer Degree, const Standard_Integer NumPoints, const TColgp_Array1OfPnt& Points, const TColStd_Array1OfReal& Parameters);
  

  //! returns if everything went OK
      Standard_Boolean IsDone()  const;
  
  //! returns the error type if any
      GeomLib_InterpolationErrors Error()  const;
  
  //! returns the interpolated curve of the requested degree
  Standard_EXPORT   Handle(Geom_BSplineCurve) Curve()  const;




protected:





private:



  Handle(Geom_BSplineCurve) myCurve;
  Standard_Boolean myIsDone;
  GeomLib_InterpolationErrors myError;


};


#include <GeomLib_Interpolate.lxx>





#endif // _GeomLib_Interpolate_HeaderFile
