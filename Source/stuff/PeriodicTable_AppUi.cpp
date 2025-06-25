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

#include "PeriodicTable.h"


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
	HBufC* message = eikonEnv->AllocReadResourceLC(R_EXAMPLE_TITLE_TEXT);

			 // Launch the dialog - it will use a deafult Icon
	CCknInfoDialog::RunDlgLD(KNullDesC,*message);

	         // Pop and destroy secondline
	CleanupStack::PopAndDestroy();
	}


HBufC8* doExampleL()
{
	return 0;
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
		




/*

	_LIT(KFormat,"%S\n");

	// allocate multi-reader
	CMultipleResourceFileReader* multiReader =
			CMultipleResourceFileReader::NewLC();

		// open a couple of resource files
	#if defined(__WINS__)
			// add MultiRead1 version 23
	_LIT(KZSystemDataBasigbRsc,"Z:\\system\\data\\MultiRead1.rsc");
	multiReader->AddResourceFileL(KZSystemDataBasigbRsc,23);
			// add MultiRead2 version 17
	_LIT(KZSystemDataBasiguRsc,"Z:\\system\\data\\MultiRead2.rsc");
	multiReader->AddResourceFileL(KZSystemDataBasiguRsc,17);
	#endif

	#if defined(__ARM__)
			// add MultiRead1 version 23
	_LIT(KCSystemDataBasigbRsc,"C:\\system\\data\\MultiRead1.rsc");
	multiReader->AddResourceFileL(KCSystemDataBasigbRsc,23);
			// add MultiRead2 version 17
	_LIT(KCSystemDataBasiguRsc,"C:\\system\\data\\MultiRead2.rsc");
	multiReader->AddResourceFileL(KCSystemDataBasiguRsc,17);
	#endif
	
	// read resource that returns a reference to another resource
	HBufC8* refBuffer=multiReader->AllocReadLC(R_CALCIUM_GENERAL);
	TResourceReader theReader;
	theReader.SetBuffer(refBuffer);
	TInt referencedId=theReader.ReadInt32(); // treat resource as integer
	CleanupStack::PopAndDestroy(); // refBuffer
	// read the other resource
	HBufC8* dataBuffer=multiReader->AllocReadLC(R_CALCIUM_GENERAL);
	// convert from 8-bit into 16-bit 
	TBuf<20> textBuffer; // for converting into native format
	TInt length=dataBuffer->Length() < 20 ? dataBuffer->Length() : 20;
		// number of bytes we will copy
	textBuffer.Copy(dataBuffer->Left(length)); // copy into text buffer
	// clean up data buffer
	CleanupStack::PopAndDestroy(); // finished with dataBuffer
	// cleanup multi-reader
	CleanupStack::PopAndDestroy(); // multi-reader




*/





	
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
	HBufC* title   = eikonEnv->AllocReadResourceLC(R_EXAMPLE_TITLE_TEXT);
	HBufC* message   = eikonEnv->AllocReadResourceLC(R_EXAMPLE_TITLE_TEXT);


			 // Launch the dialog
    CCknInfoDialog::RunDlgLD(*title,*message,icon);

	         // Remove and destroy the: secondline (HBufC) object
	         //                         firstline  (HBufC) object
	         //                         icon       (Graphics utility icon) object

	CleanupStack::PopAndDestroy(3);
	}


