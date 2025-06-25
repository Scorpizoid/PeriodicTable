// PeriodicTable.h
// -------------
//
//

////////////////////////////////////////////////////////////////////
// PeriodicTable
// -----------
//
//
// The class definitions for the example which shows a simple
// single page dialog.
//
// The class definitions are:
//
// CExampleApplication 
// CExampleAppUi
// CExampleAppView
// CExampleDocument
//
//
////////////////////////////////////////////////////////////////////
#ifndef __PERIODICTABLE_H
#define __PERIODICTABLE_H

#include <coeccntx.h>

#include <eikenv.h>
#include <eikappui.h>
#include <eikapp.h>
#include <eikdoc.h>
#include <eikdialg.h>

#include <ckninfo.h>	//needed for CCknInfoDialog
#include <cknsfld.h>	// Needes for CCknSearchField
#include <eikbtgpc.h>

#include <eikon.hrh>

#include <coedef.h>

// All the resource files
#include <PeriodicTable.rsg>
#include <Group1.rsg>
#include <Group2.rsg>
#include <Group3.rsg>
#include <Group4.rsg>
#include <Group5.rsg>
#include <Group6.rsg>
#include <Group7.rsg>
#include <Group8.rsg>
#include <Group9.rsg>
#include <Group10.rsg>
#include <Group11.rsg>
#include <Group12.rsg>
#include <Group13.rsg>
#include <Group14.rsg>
#include <Group15.rsg>
#include <Group16.rsg>
#include <Group17.rsg>
#include <Group18.rsg>
#include <Group19.rsg>
#include <Group20.rsg>
#include "PeriodicTable.hrh"




////////////////////////////////////////////////////////////////////////
//
// CExampleApplication
//
////////////////////////////////////////////////////////////////////////

class CExampleApplication : public CEikApplication
	{
private: 
	           // Inherited from class CApaApplication
	CApaDocument* CreateDocumentL();
	TUid AppDllUid() const;
	};

////////////////////////////////////////////////////////////////////////
//
// CExampleAppView
//
////////////////////////////////////////////////////////////////////////
class CExampleAppView : public CCoeControl
    {
public:
	static CExampleAppView* NewL(const TRect& aRect);
	CExampleAppView();
	~CExampleAppView();
    void ConstructL(const TRect& aRect);
	// The cursor coordinates
	TInt x;
	TInt y;
	// Is it running the first time?
	TUint8 firstrun;
	// The element dialog launcher which takes the element
	// number as an argument (not the REAL element number
	// though)
	void LaunchElementDialog(TInt aElement);
private:
	           // Inherited from CCoeControl
	void Draw(const TRect& /*aRect*/) const;
	TKeyResponse OfferKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType);

private:
	HBufC*  iExampleText;
	// We'll use this in the OfferKeyEventL() function and
	// destroy it in ~CExampleAppView()
	CExampleAppView* example;
	TInt aElement;

	/* the bitmaps */
	CFbsBitmap* bitmap; 
	CFbsBitmap* bitmap2; 
	CFbsBitmap* maskBitmap; 

    };


////////////////////////////////////////////////////////////////////////
//
// CExampleAppUi
//
////////////////////////////////////////////////////////////////////////
class CExampleAppUi : public CEikAppUi
    {
public:
	//CExampleAppUi();
    void ConstructL();
	~CExampleAppUi();
private:
              // Inherited from class CEikAppUi
	void HandleCommandL(TInt aCommand);
		      // Defined in this class
	void CmdLaunchAboutDialog();
	void CmdLaunchTableColoursDialog();

private:
	CExampleAppView* iAppView;
//	CCoeControl* iAppView;
	};


////////////////////////////////////////////////////////////////////////
//
// CExampleDocument
//
////////////////////////////////////////////////////////////////////////
class CExampleDocument : public CEikDocument
	{
public:
	static CExampleDocument* NewL(CEikApplication& aApp);
	CExampleDocument(CEikApplication& aApp);
	void ConstructL();
private: 
	           // Inherited from CEikDocument
	CEikAppUi* CreateAppUiL();
	};


#endif

