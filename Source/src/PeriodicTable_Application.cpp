// PeriodicTable_CExampleApplication.cpp
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

const TUid KUidPeriodicTable = { 0x20026289 };

//             The function is called by the UI framework to ask for the
//             application's UID. The returned value is defined by the
//             constant KUidPeriodicTable and must match the second value
//             defined in the project definition file.
// 
TUid CExampleApplication::AppDllUid() const
	{
	return KUidPeriodicTable;
	}

//             This function is called by the UI framework at
//             application start-up. It creates an instance of the
//             document class.
//
CApaDocument* CExampleApplication::CreateDocumentL()
	{
	return new (ELeave) CExampleDocument(*this);
	}