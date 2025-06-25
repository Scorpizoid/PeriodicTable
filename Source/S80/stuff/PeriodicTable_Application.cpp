// InfoDialogs_CExampleApplication.cpp
// -----------------------------------
//
//

////////////////////////////////////////////////////////////////////////
//
// Source file for the implementation of the 
// application class - CExampleApplication
//
////////////////////////////////////////////////////////////////////////

#include "PeriodicTable.h"

const TUid KUidInfoDialogs = { 0X10008AB1 };

//             The function is called by the UI framework to ask for the
//             application's UID. The returned value is defined by the
//             constant KUidInfoDialogs and must match the second value
//             defined in the project definition file.
// 
TUid CExampleApplication::AppDllUid() const
	{
	return KUidInfoDialogs;
	}

//             This function is called by the UI framework at
//             application start-up. It creates an instance of the
//             document class.
//
CApaDocument* CExampleApplication::CreateDocumentL()
	{
	return new (ELeave) CExampleDocument(*this);
	}