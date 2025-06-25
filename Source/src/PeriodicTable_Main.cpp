// PeriodicTable_Main.cpp
// --------------------
//
//

////////////////////////////////////////////////////////////////////////
//
// Standard confirmation dialog
// ----------------------------
//
//
// The example a nimber of standard dialogs which can be used in various circumstances
// information and warnings.
//
// 
// --------------------------------------------------------------------- 
//
// This source file contains the single exported function required by 
// all UI applications and the E32Dll function which is also required
// but is not used here.
//
////////////////////////////////////////////////////////////////////////


#include "PeriodicTable.h"

//             The entry point for the application code. It creates
//             an instance of the CApaApplication derived
//             class, CExampleApplication.
//
EXPORT_C CApaApplication* NewApplication()
	{
	return new CExampleApplication;
	}

//             This function is required by all EPOC32 DLLs. In this 
//             example, it does nothing.
//
GLDEF_C TInt E32Dll(TDllReason)
	{
	return KErrNone;
	}

