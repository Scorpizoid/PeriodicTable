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
#ifndef __PeriodicTable_H
#define __PeriodicTable_H

#include <coeccntx.h>

#include <eikenv.h>
#include <eikappui.h>
#include <eikapp.h>
#include <eikdoc.h>
#include <eikdialg.h>

#include <ckninfo.h>	//needed for CCknInfoDialog

#include <eikon.hrh>

#include "CommonToResourceFilesEx.h"
#include <PeriodicTable1.rsg> // user resources
#include <PeriodicTable2.rsg> // user resources
//#include <InfoDialogs.rsg>
#include "PeriodicTable.rh"
#include "PeriodicTable_console.h"    // definition of multi-resource-reader class

//#include <PeriodicTable.mbg>



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

