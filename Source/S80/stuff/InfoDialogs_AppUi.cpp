// InfoDialogs_CExampleAppUi.cpp
// -----------------------------
//
//

////////////////////////////////////////////////////////////////////////
//
// Source file for the implementation of the 
// application UI class - CExampleAppUi
//
////////////////////////////////////////////////////////////////////////

#include "InfoDialogs.h"


//             The second phase constructor of the application UI class.
//             The application UI creates and owns the one and only view.
// 
void CExampleAppUi::ConstructL()
    {
	           // BaseConstructL() completes the UI framework's
	           // construction of the App UI.
    BaseConstructL();
	           // Create the single application view in which to
	           // draw the text, passing
	           // into it the rectangle available to it.
	iAppView = CExampleAppView::NewL(ClientRect());
	}


//             The app Ui owns the view and is, therefore, 
//             responsible for destroying it.
//
CExampleAppUi::~CExampleAppUi()
	{
	delete iAppView;
	}


//             Called by the UI framework when a command has been issued.
//             In this example, a command can originate through a 
//             hot-key press or by selection of a menu item or by 
//             pressing a CBA button.
//             The command Ids are defined in the .hrh file
//             and are 'connected' to the hot-key, menu item and the CBA
//             in the resource file.
//             Note that the EEikCmdExit is defined by the UI
//             framework and is pulled in by including eikon.hrh
//
void CExampleAppUi::HandleCommandL(TInt aCommand)
	{
	switch (aCommand)
		{
			   // Handle request to launch Info dialog using
		       // default first line and default icon.
	case ECbaButton0:
	case EExampleDefaultDialog:
		CmdLaunchDefaultDialog();
		break;

			   // Handle request to launch Info dialog using
		       // app supplied first line and app supplied icon.

	case ECbaButton1:
	case EExampleModifiedDialog:
		CmdLaunchModifiedDialog();
		break;

               // Exit the application. The call is
		       // implemented by the UI framework.
	case ECbaButton3:
	case EEikCmdExit: 
		Exit();
		break;
		}
	}


//
//
//            
void CExampleAppUi::CmdLaunchDefaultDialog()
	{
	           // UI environment
	CEikonEnv* eikonEnv=CEikonEnv::Static();

	         // First line of text is null descriptor forcing the
	         // info dialog to use the default text supplied by
	         // the UI.
	         // The app supplies the second line of text (from 
	         // the resource file)
	HBufC* message = eikonEnv->AllocReadResourceLC(R_GENERAL_TITLE);

			 // Launch the dialog - it will use a deafult Icon
	CCknInfoDialog::RunDlgLD(KNullDesC,*message);

	         // Pop and destroy secondline
	CleanupStack::PopAndDestroy();
	}


//
//
//
void CExampleAppUi::CmdLaunchModifiedDialog()
	{
	
	
	// UI environment
	CEikonEnv* eikonEnv=CEikonEnv::Static();

			 // Name of multi bit map file containing the
	         // bitmap to be used as the icon.
	_LIT(KBitMapFile,"z:\\system\\apps\\InfoDialogs\\InfoDialogs.mbm");
		



	// Add more resource files

	CEikonEnv::Static()->AddResourceFileL( _L( "Z:\\system\\apps\\infodialogs\\group1.rsc" ) );


	
			 // Create bitmap and push object onto cleanup stack until we have 
	         // safely created the Graphics Utility Icon object (CGulIcon).
	         // Ownership of the bitmap is passed to the CGulICon object.
			 //
	         // (NB The bitmap originates in ckon.mbm)
	CFbsBitmap* bitmap = eikonEnv->CreateBitmapL(KBitMapFile,EMbmInfodialogsClockface);
	CleanupStack::PushL(bitmap);
    CGulIcon* icon = CGulIcon::NewL(bitmap);
	CleanupStack::Pop();

			 // We retain ownership of the CGulICon object, so we
	         // are responsible for destroying it later.
	CleanupStack::PushL(icon);
	
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
	HBufC* title   = eikonEnv->AllocReadResourceLC(R_GENERAL_TITLE);
	HBufC* message   = eikonEnv->AllocReadResourceLC(R_LITHIUM_OTHER);


			 // Launch the dialog
    CCknInfoDialog::RunDlgLD(*title,*message,icon);

	         // Remove and destroy the: secondline (HBufC) object
	         //                         firstline  (HBufC) object
	         //                         icon       (Graphics utility icon) object

	CleanupStack::PopAndDestroy(3);
	}


