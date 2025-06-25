/*
* ============================================================================
*  Name         : Periodictable.h
*  Part of      : Periodictable
*  Interface   	: 
*  Description  : Declares main application class.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

// INCLUDES
#include <aknapp.h>

// CONSTANTS
// UID of the application
const TUid KUidPeriodictable = { 0x20026289 };

// CLASS DECLARATION

/**
* CPeriodictable application class.
* Provides the factory to create a concrete document object.
* 
*/
class CPeriodictable : public CAknApplication
    {
    
    public: // Functions from base classes
        /**
        * From CApaApplication, overridden to enable INI file support.
        * @return CDictionaryStore*, A pointer to the dictionary store
        */
        CDictionaryStore* OpenIniFileLC(RFs& aFs) const;
    private:

        /**
        * From CApaApplication, creates CPeriodictableDocument document object.
        * @return CApaDocument*, A pointer to the created document object.
        */
        CApaDocument* CreateDocumentL();
        
        /**
        * From CApaApplication, returns application's UID (KUidPeriodictable).
        * @return TUid, The value of KUidPeriodictable.
        */
        TUid AppDllUid() const;
    };

#endif

// End of File

