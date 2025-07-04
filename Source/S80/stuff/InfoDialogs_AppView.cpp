// InfoDialogs_CExampleAppView.cpp
// ------------------------------
//
//

////////////////////////////////////////////////////////////////////////
//
// Source file for the implementation of the 
// application view class - CExampleAppView
//
////////////////////////////////////////////////////////////////////////

#include "InfoDialogs.h"

//
//             Constructor for the view.
//
CExampleAppView::CExampleAppView()
	{
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
	}


//             Second phase construction.
//
void CExampleAppView::ConstructL(const TRect& aRect)
    {
			   // Fetch the text from the resource file.
	iExampleText = iEikonEnv->AllocReadResourceL(R_EXAMPLE_TEXT_INFODIALOGS);
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
	TRect      drawRect = Rect();
			   // Font used for drawing text
	const CFont*     fontUsed;
	
	
	           // Start with a clear screen
	gc.Clear();
			   // Draw an outline rectangle (the default pen
	           // and brush styles ensure this) slightly
	           // smaller than the drawing area.
	drawRect.Shrink(10,10);		   	
	gc.DrawRect(drawRect);
               // Use the normal font supplied by the UI
	fontUsed = iEikonEnv->NormalFont();
	gc.UseFont(fontUsed);
			   // Draw the text in the middle of the rectangle.
	TInt   baselineOffset=(drawRect.Height() - fontUsed->HeightInPixels())/2; 
	gc.DrawText(*iExampleText,drawRect,baselineOffset,CGraphicsContext::ECenter, 0);
               // Finished using the font
	gc.DiscardFont();
	}



