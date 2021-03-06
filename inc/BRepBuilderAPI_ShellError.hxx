// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_ShellError_HeaderFile
#define _BRepBuilderAPI_ShellError_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Indicates the outcome of the construction of a face, i.e.
//! whether it is successful or not, as explained below:
//! -   BRepBuilderAPI_ShellDone No error occurred.
//! The shell is correctly built.
//! -   BRepBuilderAPI_EmptyShell No initialization of
//! the algorithm: only an empty constructor was used.
//! -   BRepBuilderAPI_DisconnectedShell not yet used
//! -   BRepBuilderAPI_ShellParametersOutOfRange
//! The parameters given to limit the surface are out of its bounds.
enum BRepBuilderAPI_ShellError
{
BRepBuilderAPI_ShellDone,
BRepBuilderAPI_EmptyShell,
BRepBuilderAPI_DisconnectedShell,
BRepBuilderAPI_ShellParametersOutOfRange
};

#endif // _BRepBuilderAPI_ShellError_HeaderFile
