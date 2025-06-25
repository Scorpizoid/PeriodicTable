// InfoDialogs.h
// -------------
//
//

////////////////////////////////////////////////////////////////////
// InfoDialogs
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
#ifndef __INFODIALOGS_H
#define __INFODIALOGS_H

#include <coeccntx.h>

#include <eikenv.h>
#include <eikappui.h>
#include <eikapp.h>
#include <eikdoc.h>
#include <eikdialg.h>

#include <ckninfo.h>	//needed for CCknInfoDialog

#include <eikon.hrh>

#include <InfoDialogs.rsg>
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
#include "InfoDialogs.hrh"
//#include "MultiRead.h"

#include <InfoDialogs.mbg>



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

private:
	           // Inherited from CCoeControl
	void Draw(const TRect& /*aRect*/) const;

private:
	HBufC*  iExampleText;
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
	void CmdLaunchDefaultDialog();
	void CmdLaunchModifiedDialog();

private:
	CCoeControl* iAppView;
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

