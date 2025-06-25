/*
* ============================================================================
*  Name         : Periodictable.cpp
*  Part of      : Periodictable
*  Interface    : Browser Control API
*  Description  : Implements the main application class.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation. 
* ============================================================================
*/

// INCLUDE FILES
#include "Periodictable.h"
#include "PeriodictableDocument.h"
#include <eikstart.h>

// ================= MEMBER FUNCTIONS =======================

// ---------------------------------------------------------
// CPeriodictable::AppDllUid()
// Returns application UID
// ---------------------------------------------------------
//
TUid CPeriodictable::AppDllUid() const
    {
    return KUidPeriodictable;
    }

// ---------------------------------------------------------
// CDictionaryStore* CPeriodictable::OpenIniFileLC(RFs& aFs) const
// overrides CAknApplication::OpenIniFileLC to enable INI file support
// ---------------------------------------------------------
//
CDictionaryStore* CPeriodictable::OpenIniFileLC(RFs& aFs) const
{
    return CEikApplication::OpenIniFileLC(aFs);
}
   
// ---------------------------------------------------------
// CPeriodictable::CreateDocumentL()
// Creates CPeriodictableDocument object
// ---------------------------------------------------------
//
CApaDocument* CPeriodictable::CreateDocumentL()
    {
    return CPeriodictableDocument::NewL( *this );
    }

// ================= OTHER EXPORTED FUNCTIONS ==============
//
// ---------------------------------------------------------
// NewApplication() 
// Constructs CPeriodictable
// Returns: created application object
// ---------------------------------------------------------
//
LOCAL_C CApaApplication* NewApplication( )
	{
    return new CPeriodictable;
    }
    

// ---------------------------------------------------------
//    E32Main
//    Main function for Symbian OS v9 EXE application
//    Returns: TInt
// ---------------------------------------------------------
GLDEF_C TInt E32Main()
    {
    return EikStart::RunApplication( NewApplication );
    }

// End of File  

