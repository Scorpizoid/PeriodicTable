/*
* ============================================================================
*  Name         : PeriodictableContainer.h
*  Part of      : Periodictable
*  Interface    : Browser Control API
*  Description  : Declares container control for Browser Control Sample application.
*  Version      : 
*
*  Copyright (c) 2005-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ============================================================================
*/

#ifndef PERIODICTABLECONTAINER_H
#define PERIODICTABLECONTAINER_H

// INCLUDES
#include <coecntrl.h>
#include <akndef.h>
#include <fbs.h>
#include <BITSTD.H>
#include "BrCtlInterface.h"
/*
// FORWARD DECLARATIONS
class CPeriodictableSpecialLoadObserver;
class CPeriodictableLayoutObserver;
class CPeriodictableSoftkeysObserver;
class CPeriodictableLoadEventObserver;
class CPeriodictableLinkResolver;
class CPeriodictableStateChangeObserver;
class CPeriodictableDialogsProvider;
*/
// CLASS DECLARATION

/**
*  CPeriodictableContainer class.
*  This is the container control class.
*/
class CPeriodictableContainer : public CCoeControl, MCoeControlObserver, MBrCtlDataLoadSupplier
    {
    public: // Constructors and destructor
        /**
        * EPOC default constructor.
        * @param aRect Frame rectangle for container.
        */
        void ConstructL(const TRect& aRect);

        /**
        * Destructor.
        */
        ~CPeriodictableContainer();

    public: // New functions

        /**
        * Pass a command to the Browser Control
        * @since 2.8
        * @param aCommand The command that the Browser Control should process
        * @return void
        */
        void HandleCommandL(TInt aCommand);

        /**
        * Dynamically initialises a menu pane. The Uikon framework calls this 
        *   function, if it is implemented in a menu’s observer, immediately before 
        *   the menu pane is activated. 
        * @since 2.8
        * @param aResourceId Resource ID identifying the menu pane to initialise
        * @param aMenuPane The in-memory representation of the menu pane.
        * @return void
        */
        void DynInitMenuPaneL(TInt aResourceId, CEikMenuPane* aMenuPane);

        /**
        * Handles key events
        * @since 2.8
        * @param aKeyEvent The key event that occurred.
        * @param aType The window server event type that is being handled
        * @return TKeyResponse Value indicates whether or not the key event was consumed by the control. The default implementation simply returns EKeyWasNotConsumed.
        */
        TKeyResponse HandleKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType);
        
        /**
        * Accessor method for iText
        * @since 2.8
        * @param void
        * @return TDesc& The descriptor of the text
        */
//        inline const TDesC& Text() const {return iText;}
       
        /**
        * Setter method for iText
        * @since 2.8
        * @param aText The descriptor for the text you wish to display
        * @return void
        */
        void SetText( const TDesC& aText );
        
        /**
        * Setter method for iPoint
        * @since 2.8
        * @param aPoint The point at which you want to display the text
        * @return void
        */
        void SetPoint( const TPoint& aPoint );
        
        /**
        * Accessor method iBrCtlInterface
        * @since 2.8
        * @param void
        * @return CBrCtlInterface* A pointer to the browser control interface as a convenience to the observers
        */
        inline CBrCtlInterface* BrCtlInterface() const {return iBrCtlInterface;}

    private: // Functions from base classes

        /**
        * From CoeControl,SizeChanged.
        */
        void SizeChanged();

        /**
        * From CoeControl,CountComponentControls.
        */
        TInt CountComponentControls() const;

        /**
        * From CCoeControl,ComponentControl.
        */
        CCoeControl* ComponentControl(TInt aIndex) const;

        /**
        * From CCoeControl,Draw.
        */
        void Draw(const TRect& aRect) const;

        /**
        * Handle key events.
        */
       TKeyResponse OfferKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType);

        /**
        * From MBrCtlDataLoadSupplier, Cancel an on-going load
        */
        void CancelLoad();

        /**
        * Create a Basic Browser Control that does not have observers with scrolling
        * and HTTP framework capabilities
        */
        //void CreateBasicBrowserControlL();

        /**
        * Create Browser Control with observers with the given capabilities
        */
       // void CreateBrowserControlWithObserversL(TUint aCapabilities);

	    /**
        * Read the file.
        */
        HBufC8* ReadFileLC(const TDesC& aFileName);

        /**
        * Handles an event from an observed control.
        */
        void HandleControlEventL(CCoeControl* aControl,TCoeEvent aEventType);
        
        /**
        * The following methods are used to demonstrate the functionality of 
        * the browser control API
        */
        void BasicBrowserControlL(TInt x, TInt y);
        void OpenAboutBoxL();/*
        void BrowserControlWithObserversL();
        void LoadingContentWithFileHandleL();
        void LoadingContentWithBufferL();
        void IncrementalLoadingL();
        void SpecialLoadRequestsL();
        void CustomizedDialogsL();
        void CustomizedSoftKeysL();
        void ResolvingEmbeddedLinksL();
        void CustomizedScrollBarsL();
        void HandleStateChangedL();
        void ChangeSizeExtentsL();
        void PageInfoL();
        void ContentSizeImageCountL();*/
        
    private: //data 
        // Pointer to the browser control interface
        CBrCtlInterface* iBrCtlInterface;
        // Desired capabilities of the browser control
        TUint iBrCtlCapabilities;
        // Command Base
        TInt iCommandBase;/*
        // Special Load Observer
        CPeriodictableSpecialLoadObserver* iPeriodictableSpecialLoadObserver;
        // Layout Observer
        CPeriodictableLayoutObserver* iPeriodictableLayoutObserver;
        // Softkeys Observer
        CPeriodictableSoftkeysObserver* iPeriodictableSoftkeysObserver;
        // Load Event Observer
        CPeriodictableLoadEventObserver* iPeriodictableLoadEventObserver;
        // Link Resolver
        CPeriodictableLinkResolver* iPeriodictableLinkResolver;
        // State Change Observer
        CPeriodictableStateChangeObserver* iPeriodictableStateChangeObserver;
        // Dialogs Provider
        CPeriodictableDialogsProvider* iPeriodictableDialogsProvider;*/
        // Informs whether or not CancelLoad has been called
        TBool iCancelInitDataLoad;
        // A graphics device to which a bitmap managed by the font and bitmap server can be drawn
 /*       CFbsScreenDevice* iFbsScrDev;
        // Abstract font interface
        CFont* iFont;
        // Text to display to the screen if desired
        TPtrC iText;
        // Point at which to display text
        TPoint iPoint;
        */
    	HBufC*  iExampleText;
    	HBufC*  iGroupText;
    	HBufC*  iMMText;
       
        //Modi
     	// The cursor coordinates
     	TInt x;
     	TInt y;
     	// Is it running the first time?
     	TUint8 firstrun;
     	CFbsBitmap* bitmap; 
     	CFbsBitmap* bitmapCursor; 
     	CFbsBitmap* maskBitmap; 
    };

#endif

// End of File

