/*
* ============================================================================
*  Name         : PeriodictableDocument.h
*  Part of      : Periodictable
*  Interface    : Browser Control API
*  Description  : Declares document for application.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

#ifndef PERIODICTABLEDOCUMENT_H
#define PERIODICTABLEDOCUMENT_H

// INCLUDES
#include <akndoc.h>
   
// CONSTANTS

// FORWARD DECLARATIONS
class  CEikAppUi;

// CLASS DECLARATION

/**
*  CPeriodictableDocument application class.
*/
class CPeriodictableDocument : public CAknDocument
    {
    public: // Constructors and destructor
        /**
        * Two-phased constructor.
        */
        static CPeriodictableDocument* NewL(CEikApplication& aApp);

        /**
        * Destructor.
        */
        virtual ~CPeriodictableDocument();

    public: // New functions

    protected:  // New functions

    protected:  // Functions from base classes

    private:

        /**
        * EPOC default constructor.
        */
        CPeriodictableDocument(CEikApplication& aApp);
        void ConstructL();

    private:

        /**
        * From CEikDocument, create CPeriodictableAppUi "App UI" object.
        */
        CEikAppUi* CreateAppUiL();
    };

#endif

// End of File

