// PeriodicTable_CExampleAppView.cpp
// ------------------------------
//
//

////////////////////////////////////////////////////////////////////////
//
// Source file for the implementation of the 
// application view class - CExampleAppView
//
////////////////////////////////////////////////////////////////////////

#include "PeriodicTable.h"

//
//             Constructor for the view.
//
CExampleAppView::CExampleAppView()
	{
	x = 11+6-11;
	y = 15-5;
	firstrun = 1;
	bitmap = new (ELeave) CFbsBitmap(); 
	bitmap2 = new (ELeave) CFbsBitmap(); 
	maskBitmap = new (ELeave) CFbsBitmap();
					// set the name of the multi-bitmap file containing the bitmaps 
	_LIT(KMBMFileName_z,"Z:\\system\\apps\\PeriodicTable\\cursor.mbm"); 
	_LIT(KMBMFileName2_z,"Z:\\system\\apps\\PeriodicTable\\periodictable.mbm"); 
	_LIT(KMBMFileName_c,"C:\\system\\apps\\PeriodicTable\\cursor.mbm"); 
	_LIT(KMBMFileName2_c,"C:\\system\\apps\\PeriodicTable\\periodictable.mbm"); 
	_LIT(KMBMFileName_d,"D:\\system\\apps\\PeriodicTable\\cursor.mbm"); 
	_LIT(KMBMFileName2_d,"D:\\system\\apps\\PeriodicTable\\periodictable.mbm"); 

				// Push the bitmaps onto the cleanupstack
	CleanupStack::PushL(bitmap); 
	CleanupStack::PushL(bitmap2); 

	// Don't care if the bitmap file is on C:, D: or Z: drive
	TInt err = 0;
	TRAP(err, User::LeaveIfError(bitmap->Load(KMBMFileName_c, 0)));
	if (err)
	{
		TRAP(err, User::LeaveIfError(bitmap->Load(KMBMFileName_d, 0)));
		if (err)
		{
			User::LeaveIfError(bitmap->Load(KMBMFileName_z, 0));
		}
	}

	TRAP(err, User::LeaveIfError(bitmap2->Load(KMBMFileName2_c, 0)));
	if (err)
	{
		TRAP(err, User::LeaveIfError(bitmap2->Load(KMBMFileName2_d, 0)));
		if (err)
		{
			User::LeaveIfError(bitmap2->Load(KMBMFileName2_z, 0));
		}
	}
	CleanupStack::PushL(maskBitmap); 
	TRAP(err, User::LeaveIfError(maskBitmap->Load(KMBMFileName_c,1)));
	if (err)
	{
		TRAP(err, User::LeaveIfError(maskBitmap->Load(KMBMFileName_d,1)));
		if (err)
		{
			User::LeaveIfError(maskBitmap->Load(KMBMFileName_z,1));
		}
	}

	// Pop the contents - they are destroyed in the destructor
	CleanupStack::Pop(3);

	// Initialise the iExampleText variable and assign some
	// text into it
	iExampleText = HBufC::NewL(40);
	_LIT(KHydrogen,"Hydrogen, 1"); 
	*iExampleText = KHydrogen;
	// We'll make the "Open" button the default one, with underlining
	CEikButtonGroupContainer::Current()->SetDefaultCommand(ECbaButton0);
	}


//             Static NewL() function to start the standard two
//             phase construction.
//
CExampleAppView* CExampleAppView::NewL(const TRect& aRect)
	{
	CExampleAppView* self = new(ELeave) CExampleAppView();
	CleanupStack::PushL(self);
	self->ConstructL(aRect);
	CleanupStack::Pop();
	return self;
	}


//
//             Destructor for the view.
//
CExampleAppView::~CExampleAppView()
	{
	delete iExampleText;
	delete example;
	delete bitmap;
	delete bitmap2;
	delete maskBitmap;
	}



//             Second phase construction.
//
void CExampleAppView::ConstructL(const TRect& aRect)
    {
			   // Fetch the text from the resource file.
//	iExampleText = iEikonEnv->AllocReadResourceL(R_PRASEODYMIUM);
	example = new (ELeave) CExampleAppView();
	           // Control is a window owning control
	CreateWindowL();
	           // Extent of the control. This is
	           // the whole rectangle available to application.
	           // The rectangle is passed to us from the application UI.
	SetRect(aRect);
			   // At this stage, the control is ready to draw so
	           // we tell the UI framework by activating it.
	ActivateL();
	}



//             Drawing the view - in this example, 
//             consists of drawing a simple outline rectangle
//             and then drawing the text in the middle.
//             We use the Normal font supplied by the UI.
//
//             In this example, we don't use the redraw
//             region because it's easier to redraw to
//             the whole client area.
//
void CExampleAppView::Draw(const TRect& /*aRect*/) const
	{
	
		// Window graphics context
	CWindowGc& gc = SystemGc();
	           // Area in which we shall draw
//	TRect      drawRect = Rect();
			   // Font used for drawing text
	const CFont*     fontUsed;
	
	
	           // Start with a clear screen
	if (firstrun == 1)
	{
		gc.Clear();
	}

				// draw the background
	TPoint pos(0,0);//6,15); 
	gc.BitBlt(pos, bitmap2);

	
				// Load the cursor mask 
				// Calculate rectangle for the whole bitmap 
	TRect bmpPieceRect(TPoint(0,0),bitmap->SizeInPixels()); 

				// Blit using a masking bitmap, with no inversion 
	gc.BitBltMasked(TPoint(x,y),bitmap,bmpPieceRect,maskBitmap,ETrue); 

	
				// Draw an outline rectangle (the default pen
	           // and brush styles ensure this) slightly
	           // smaller than the drawing area.
	TRect largeRect(111,25,237,43);
               // Use the normal font supplied by the UI
	fontUsed = iEikonEnv->LegendFont();
	gc.UseFont(fontUsed);
	gc.SetPenColor(KRgbWhite);  
			   // Draw the text in the middle of the rectangle.
	TInt   baselineOffset=15;//drawRect.Height() - fontUsed->HeightInPixels())/2; 
	gc.DrawText(*iExampleText,largeRect,baselineOffset,CGraphicsContext::ECenter, 0);
               // Finished using the font
	gc.DiscardFont();


	}
