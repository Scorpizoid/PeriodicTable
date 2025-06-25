/*
* ============================================================================
*  Name         : PeriodictableDocument.h
*  Part of      : Periodictable
*  Interface   	: Browser Control API 
*  Description  : Implements the document for application.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

// INCLUDE FILES
#include "PeriodictableDocument.h"
#include "PeriodictableUi.h"

// ================= MEMBER FUNCTIONS =======================

// constructor
CPeriodictableDocument::CPeriodictableDocument(CEikApplication& aApp)
: CAknDocument(aApp)    
    {
    }

// destructor
CPeriodictableDocument::~CPeriodictableDocument()
    {
    }

// EPOC default constructor can leave.
void CPeriodictableDocument::ConstructL()
    {
    }

// Two-phased constructor.
CPeriodictableDocument* CPeriodictableDocument::NewL(
        CEikApplication& aApp)     // CPeriodictable reference
    {
    CPeriodictableDocument* self = new (ELeave) CPeriodictableDocument( aApp );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();

    return self;
    }
    
// ----------------------------------------------------
// CPeriodictableDocument::CreateAppUiL()
// constructs CPeriodictableUi
// ----------------------------------------------------
//
CEikAppUi* CPeriodictableDocument::CreateAppUiL()
    {
    return new (ELeave) CPeriodictableUi;
    }

// End of File  

