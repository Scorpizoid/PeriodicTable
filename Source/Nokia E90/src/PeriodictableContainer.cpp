// INCLUDE FILES
#include "PeriodictableContainer.h"
#include <eiklabel.h>  // for example label control
#include <avkon.hrh>
#include <Periodictable.rsg>
#include "Periodictable.hrh"
#include <BrCtlInterface.h>
#include <CHARCONV.H>
#include <gdi.h>
#include <bitdev.h>
#include <eikenv.h>



// ================= MEMBER FUNCTIONS =======================

// ---------------------------------------------------------
// CPeriodictableContainer::ConstructL(const TRect& aRect)
// EPOC two phased constructor
// ---------------------------------------------------------
//
void CPeriodictableContainer::ConstructL(const TRect& aRect)
    {
	
	
    x = 12;
	y = 4;
	firstrun = 1;
	bitmap = new (ELeave) CFbsBitmap(); 
	bitmapCursor = new (ELeave) CFbsBitmap(); 
	maskBitmap = new (ELeave) CFbsBitmap();

	
	_LIT(KMBMbg,"C:\\private\\20026289\\background.mbm");
	_LIT(KMBMcursor,"C:\\private\\20026289\\cursor.mbm");
	CleanupStack::PushL(bitmap); 
	CleanupStack::PushL(bitmapCursor); 
	CleanupStack::PushL(maskBitmap); 
	User::LeaveIfError(bitmap->Load(KMBMbg, 0));
	User::LeaveIfError(bitmapCursor->Load(KMBMcursor, 0));
	User::LeaveIfError(maskBitmap->Load(KMBMcursor,1));
	CleanupStack::Pop(3);

	iExampleText = HBufC::NewL(40);
	iGroupText = HBufC::NewL(60);
	iMMText = HBufC::NewL(30);
	_LIT(KHydrogen,"Hydrogen, 1"); 
	_LIT(KDNGroup,"Diatomic nonmetal"); 
	_LIT(KMMHydrogen,"M: 1,008 g/mol"); 
	*iExampleText = KHydrogen;
	*iGroupText = KDNGroup;
	*iMMText = KMMHydrogen;

	
	CreateWindowL();
    SetRect(aRect);
    ActivateL();

    iCommandBase = TBrCtlDefs::ECommandIdBase;
    }

// Destructor
CPeriodictableContainer::~CPeriodictableContainer() 
    {
    if (iBrCtlInterface)
        {
			delete iBrCtlInterface;
        }

	delete bitmap;
	delete bitmapCursor;
	delete maskBitmap;
    delete iExampleText;
    delete iGroupText;
    delete iMMText;
    User::Exit(0);
    }

// ---------------------------------------------------------
// CPeriodictableContainer::SizeChanged()
// Called by framework when the view size is changed
// ---------------------------------------------------------
//
void CPeriodictableContainer::SizeChanged()
    {
    if (iBrCtlInterface)
        {
        iBrCtlInterface->SetRect(Rect());
        }
    }

// ---------------------------------------------------------
// CPeriodictableContainer::CountComponentControls() const
// ---------------------------------------------------------
//
TInt CPeriodictableContainer::CountComponentControls() const
    {
    if (iBrCtlInterface)
        return 1;
    return 0;
    }

// ---------------------------------------------------------
// CPeriodictableContainer::ComponentControl(TInt aIndex) const
// ---------------------------------------------------------
//
CCoeControl* CPeriodictableContainer::ComponentControl(TInt aIndex) const
    {
    switch ( aIndex )
        {
        case 0:
            return iBrCtlInterface; // Could be NULL
        default:
            return NULL;
        }
    }

// ---------------------------------------------------------
// CPeriodictableContainer::Draw(const TRect& aRect) const
// ---------------------------------------------------------
//
void CPeriodictableContainer::Draw(const TRect& aRect) const
    {
	
    CWindowGc& gc = SystemGc();
    // Start with a clear screen
	gc.Clear();
	
			// draw the background
	TPoint pos(0,0);//6,15); 
	gc.BitBlt(pos, bitmap);
	
	
	
	
	// Load the cursor mask 
	// Calculate rectangle for the whole bitmap 
	TRect bmpPieceRect(TPoint(0,0),bitmapCursor->SizeInPixels()); 
	
	gc.BitBltMasked(TPoint(x,y),bitmapCursor,bmpPieceRect,maskBitmap,ETrue); 
	
	
	
	TRect textRect(312-150,10,312+150,88);
	
	const CFont*     titleFont;
	titleFont = iEikonEnv->TitleFont();
	gc.UseFont(titleFont);
	gc.SetPenColor(KRgbWhite);  
			   // Draw the text in the middle of the rectangle.
	TInt   titleBaselineOffset=25;//drawRect.Height() - fontUsed->HeightInPixels())/2; 
	gc.DrawText(*iExampleText,textRect,titleBaselineOffset,CGraphicsContext::ECenter, 0);
			   // Finished using the font
	gc.DiscardFont();
	
	const CFont*     legendFont;
	legendFont = iEikonEnv->LegendFont();
	gc.UseFont(legendFont);
	// Draw the text in the middle of the rectangle.
	TInt   legendBaselineOffset=47;//drawRect.Height() - fontUsed->HeightInPixels())/2; 
	TInt   MMBaselineOffset=67;//drawRect.Height() - fontUsed->HeightInPixels())/2; 
	gc.DrawText(*iGroupText,textRect,legendBaselineOffset,CGraphicsContext::ECenter, 0);
	gc.DrawText(*iMMText,textRect,MMBaselineOffset,CGraphicsContext::ECenter, 0);
	// Finished using the font
	gc.DiscardFont();


    }

// ---------------------------------------------------------
// CPeriodictableContainer::HandleControlEventL(
//     CCoeControl* aControl,TCoeEvent aEventType)
// ---------------------------------------------------------
//
void CPeriodictableContainer::HandleControlEventL(
    CCoeControl* /*aControl*/,TCoeEvent /*aEventType*/)
    {
    // TODO: Add your control event handler code here
    }

// ----------------------------------------------------
// CPeriodictableContainer::HandleKeyEventL(
//     const TKeyEvent& aKeyEvent,TEventCode /*aType*/)
// ----------------------------------------------------
//
TKeyResponse CPeriodictableContainer::HandleKeyEventL(
    const TKeyEvent& /*aKeyEvent*/,TEventCode /*aType*/)
    {
    return EKeyWasNotConsumed;
    }

// ----------------------------------------------------
// CPeriodictableContainer::CancelLoad()
// ----------------------------------------------------
//
void CPeriodictableContainer::CancelLoad()
    {
    iCancelInitDataLoad = ETrue;
    }

// ----------------------------------------------------
// CPeriodictableContainer::HandleCommandL(TInt aCommand)
// ----------------------------------------------------
//
void CPeriodictableContainer::HandleCommandL(TInt aCommand)
{
    switch ( aCommand )
    {
    	case EAknSoftkeyBack:
        {
            if (iBrCtlInterface != NULL)
            {
            iBrCtlInterface = NULL;
                 DrawNow();
            }
            break;
        }
        /*case EPeriodictableCmdAppOpen:
        {
            if (iBrCtlInterface == NULL)
            {
				BasicBrowserControlL(x, y);
            }
			break;
        }*/
        case EPeriodictableCmdAppAbout:
        {
            if (iBrCtlInterface != NULL)
            {
				iBrCtlInterface = NULL;
				DrawNow();
            }
			OpenAboutBoxL();
 			break;
       }
   }
}

// ----------------------------------------------------
// CPeriodictableContainer::DynInitMenuPaneL(
//           TInt aResourceId, CEikMenuPane* aMenuPane)
// ----------------------------------------------------
//
void 
CPeriodictableContainer::DynInitMenuPaneL(TInt aResourceId, CEikMenuPane* aMenuPane)
    {
    if (iBrCtlInterface && aResourceId == R_PERIODICTABLE_MENU )
        {
        iBrCtlInterface->AddOptionMenuItemsL(*aMenuPane, aResourceId);
        RPointerArray<TBrCtlWmlServiceOption>* options;
        options = iBrCtlInterface->WMLOptionMenuItemsL();
        TInt i;
        TInt count = options->Count();
        for (i = 0; i < count; i++)
            {
            TBrCtlWmlServiceOption* option = (*options)[i];
            if (option != NULL)
                {
                CEikMenuPaneItem::SData item;
                item.iText.Copy(option->Text());
                item.iCommandId = option->ElemID();
                item.iFlags = 0;
                item.iCascadeId = 0;
                aMenuPane->InsertMenuItemL(item, 0);
                }
            }
        }
    }


// ----------------------------------------------------
// CPeriodictableContainer::ReadFileLC(const TDesC& aFileName)
// ----------------------------------------------------
//
HBufC8* 
CPeriodictableContainer::ReadFileLC(const TDesC& aFileName)
    {
    RFs rfs;
    RFile file;
    User::LeaveIfError(rfs.Connect());
    CleanupClosePushL(rfs);
    User::LeaveIfError(file.Open(rfs, aFileName, EFileRead));
    CleanupClosePushL(file);
    TInt size;
    User::LeaveIfError(file.Size(size));
    HBufC8* buf = HBufC8::NewLC(size);
    TPtr8 bufPtr(buf->Des());
    User::LeaveIfError(file.Read(bufPtr));
    CleanupStack::Pop(); // buf
    CleanupStack::PopAndDestroy(2); // file, rfs
    CleanupStack::PushL(buf);
    return buf;
    }

// ----------------------------------------------------
// CPeriodictableContainer::BasicBrowserControlL()
// ----------------------------------------------------
//
void 
CPeriodictableContainer::BasicBrowserControlL(TInt x, TInt y)
    {
    TInt xValueOfGroupI = 12;
    TInt xValueOfGroupII = 12 + 43;
    TInt xValueOfGroupIII = 12 + 43 + 43;
    TInt xValueOfGroupIV = 12 + 43 + 43 + 43;
    TInt xValueOfGroupV = 12 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupVI = 12 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupVII = 12 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupVIII = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupIX = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupX = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupXI = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupXII = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupXIII = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupXIV = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupXV = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupXVI = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupXVII = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;
    TInt xValueOfGroupXVIII = 12 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43 + 43;

    TInt yValueOfPeriodI = 4;
    TInt yValueOfPeriodII = 4 + 29;
    TInt yValueOfPeriodIII = 4 + 29 + 29;
    TInt yValueOfPeriodIV = 4 + 29 + 29 + 29;
    TInt yValueOfPeriodV = 4 + 29 + 29 + 29 + 29;
    TInt yValueOfPeriodVI = 4 + 29 + 29 + 29 + 29 + 29;
    TInt yValueOfPeriodVII = 4 + 29 + 29 + 29 + 29 + 29 + 29;
    TInt yValueOfPeriodLanthanides = 222;
    TInt yValueOfPeriodActinides = 222 + 29;
    
    
    if (iBrCtlInterface == NULL) {
    
    
				TRect rect(80,10, 640,264);//Position(), Size());
				iBrCtlInterface = CreateBrowserControlL( this, 
				rect, 
				TBrCtlDefs::ECapabilityDisplayScrollBar,
				iCommandBase, 
				NULL, 
				NULL,
				NULL, 
				NULL,
				NULL);
				
							/* hydrogen box */	if (x == xValueOfGroupI && y == yValueOfPeriodI) { _LIT(KUrl, "file:///C:\\private\\20026289\\hydrogen.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* lithium box */	if (x == xValueOfGroupI && y == yValueOfPeriodII) { _LIT(KUrl, "file:///C:\\private\\20026289\\lithium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* sodium box */	if (x == xValueOfGroupI && y == yValueOfPeriodIII) { _LIT(KUrl, "file:///C:\\private\\20026289\\sodium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* potassium box */	if (x == xValueOfGroupI && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\potassium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* rubidium box */	if (x == xValueOfGroupI && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\rubidium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* caesium box */	if (x == xValueOfGroupI && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\caesium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* francium box */	if (x == xValueOfGroupI && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\francium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* beryllium box */	if (x == xValueOfGroupII && y == yValueOfPeriodII) { _LIT(KUrl, "file:///C:\\private\\20026289\\beryllium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* magnesium box */	if (x == xValueOfGroupII && y == yValueOfPeriodIII) { _LIT(KUrl, "file:///C:\\private\\20026289\\magnesium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* calcium box */	if (x == xValueOfGroupII && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\calcium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* strontium box */	if (x == xValueOfGroupII && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\strontium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* barium box */	if (x == xValueOfGroupII && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\barium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* radium box */	if (x == xValueOfGroupII && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\radium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* scandium box */	if (x == xValueOfGroupIII && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\scandium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* yttrium box */	if (x == xValueOfGroupIII && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\yttrium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* titanium box */	if (x == xValueOfGroupIV && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\titanium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* zirconium box */	if (x == xValueOfGroupIV && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\zirconium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* hafnium box */	if (x == xValueOfGroupIV && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\hafnium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* rutherfordium box */	if (x == xValueOfGroupIV && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\rutherfordium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* vanadium box */	if (x == xValueOfGroupV && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\vanadium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* niobium box */	if (x == xValueOfGroupV && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\niobium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* tantalum box */	if (x == xValueOfGroupV && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\tantalum.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* dubnium box */	if (x == xValueOfGroupV && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\dubnium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* chromium box */	if (x == xValueOfGroupVI && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\chromium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* molybdenum box */	if (x == xValueOfGroupVI && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\molybdenum.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* tungsten box */	if (x == xValueOfGroupVI && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\tungsten.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* seaborgium box */	if (x == xValueOfGroupVI && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\seaborgium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* manganese box */	if (x == xValueOfGroupVII && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\manganese.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* technetium box */	if (x == xValueOfGroupVII && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\technetium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* rhenium box */	if (x == xValueOfGroupVII && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\rhenium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* bohrium box */	if (x == xValueOfGroupVII && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\bohrium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* iron box */	if (x == xValueOfGroupVIII && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\iron.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* ruthenium box */	if (x == xValueOfGroupVIII && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\ruthenium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* osmium box */	if (x == xValueOfGroupVIII && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\osmium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* hassium box */	if (x == xValueOfGroupVIII && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\hassium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* cobalt box */	if (x == xValueOfGroupIX && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\cobalt.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* rhodium box */	if (x == xValueOfGroupIX && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\rhodium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* iridium box */	if (x == xValueOfGroupIX && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\iridium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* meitnerium box */	if (x == xValueOfGroupIX && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\meitnerium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* nickel box */	if (x == xValueOfGroupX && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\nickel.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* palladium box */	if (x == xValueOfGroupX && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\palladium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* platinum box */	if (x == xValueOfGroupX && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\platinum.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* darmstadtium box */	if (x == xValueOfGroupX && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\darmstadtium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* copper box */	if (x == xValueOfGroupXI && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\copper.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* silver box */	if (x == xValueOfGroupXI && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\silver.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* gold box */	if (x == xValueOfGroupXI && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\gold.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* roentgenium box */	if (x == xValueOfGroupXI && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\roentgenium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* zinc box */	if (x == xValueOfGroupXII && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\zinc.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* cadmium box */	if (x == xValueOfGroupXII && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\cadmium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* mercury box */	if (x == xValueOfGroupXII && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\mercury.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* boron box */	if (x == xValueOfGroupXIII && y == yValueOfPeriodII) { _LIT(KUrl, "file:///C:\\private\\20026289\\boron.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* aluminium box */	if (x == xValueOfGroupXIII && y == yValueOfPeriodIII) { _LIT(KUrl, "file:///C:\\private\\20026289\\aluminium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* gallium box */	if (x == xValueOfGroupXIII && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\gallium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* indium box */	if (x == xValueOfGroupXIII && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\indium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* thallium box */	if (x == xValueOfGroupXIII && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\thallium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* carbon box */	if (x == xValueOfGroupXIV && y == yValueOfPeriodII) { _LIT(KUrl, "file:///C:\\private\\20026289\\carbon.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* silicon box */	if (x == xValueOfGroupXIV && y == yValueOfPeriodIII) { _LIT(KUrl, "file:///C:\\private\\20026289\\silicon.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* germanium box */	if (x == xValueOfGroupXIV && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\germanium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* tin box */	if (x == xValueOfGroupXIV && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\tin.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* lead box */	if (x == xValueOfGroupXIV && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\lead.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* nitrogen box */	if (x == xValueOfGroupXV && y == yValueOfPeriodII) { _LIT(KUrl, "file:///C:\\private\\20026289\\nitrogen.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* phosphorus box */	if (x == xValueOfGroupXV && y == yValueOfPeriodIII) { _LIT(KUrl, "file:///C:\\private\\20026289\\phosphorus.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* arsenic box */	if (x == xValueOfGroupXV && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\arsenic.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* antimony box */	if (x == xValueOfGroupXV && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\antimony.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* bismuth box */	if (x == xValueOfGroupXV && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\bismuth.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* oxygen box */	if (x == xValueOfGroupXVI && y == yValueOfPeriodII) { _LIT(KUrl, "file:///C:\\private\\20026289\\oxygen.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* sulfur box */	if (x == xValueOfGroupXVI && y == yValueOfPeriodIII) { _LIT(KUrl, "file:///C:\\private\\20026289\\sulphur.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* selenium box */	if (x == xValueOfGroupXVI && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\selenium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* tellurium box */	if (x == xValueOfGroupXVI && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\tellurium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* polonium box */	if (x == xValueOfGroupXVI && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\polonium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* fluorine box */	if (x == xValueOfGroupXVII && y == yValueOfPeriodII) { _LIT(KUrl, "file:///C:\\private\\20026289\\fluorine.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* chlorine box */	if (x == xValueOfGroupXVII && y == yValueOfPeriodIII) { _LIT(KUrl, "file:///C:\\private\\20026289\\chlorine.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* bromine box */	if (x == xValueOfGroupXVII && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\bromine.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* iodine box */	if (x == xValueOfGroupXVII && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\iodine.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* astatine box */	if (x == xValueOfGroupXVII && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\astatine.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* helium box */	if (x == xValueOfGroupXVIII && y == yValueOfPeriodI) { _LIT(KUrl, "file:///C:\\private\\20026289\\helium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* neon box */	if (x == xValueOfGroupXVIII && y == yValueOfPeriodII) { _LIT(KUrl, "file:///C:\\private\\20026289\\neon.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* argon box */	if (x == xValueOfGroupXVIII && y == yValueOfPeriodIII) { _LIT(KUrl, "file:///C:\\private\\20026289\\argon.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* krypton box */	if (x == xValueOfGroupXVIII && y == yValueOfPeriodIV) { _LIT(KUrl, "file:///C:\\private\\20026289\\krypton.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* xenon box */	if (x == xValueOfGroupXVIII && y == yValueOfPeriodV) { _LIT(KUrl, "file:///C:\\private\\20026289\\xenon.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* radon box */	if (x == xValueOfGroupXVIII && y == yValueOfPeriodVI) { _LIT(KUrl, "file:///C:\\private\\20026289\\radon.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* lanthanum box */	if (x == xValueOfGroupIV && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\lanthanum.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* cerium box */	if (x == xValueOfGroupV && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\cerium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* praseodymium box */	if (x == xValueOfGroupVI && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\praseodymium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* neodymium box */	if (x == xValueOfGroupVII && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\neodymium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* promethium box */	if (x == xValueOfGroupVIII && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\promethium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* samarium box */	if (x == xValueOfGroupIX && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\samarium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* europium box */	if (x == xValueOfGroupX && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\europium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* gadolinium box */	if (x == xValueOfGroupXI && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\gadolinium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* terbium box */	if (x == xValueOfGroupXII && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\terbium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* copernicium box */	if (x == xValueOfGroupXII && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\copernicium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* flerovium box */	if (x == xValueOfGroupXIV && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\flerovium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* livermorium box */	if (x == xValueOfGroupXVI && y == yValueOfPeriodVII) { _LIT(KUrl, "file:///C:\\private\\20026289\\livermorium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* dysprosium box */ if (x == xValueOfGroupXIII && y == yValueOfPeriodLanthanides) { _LIT(KUrl, "file:///C:\\private\\20026289\\dysprosium.html"); iBrCtlInterface->LoadUrlL(KUrl); }
							/* holmium box */ if (x == xValueOfGroupXIV && y == yValueOfPeriodLanthanides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\holmium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* erbium box */ if (x == xValueOfGroupXV && y == yValueOfPeriodLanthanides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\erbium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* thulium box */ if (x == xValueOfGroupXVI && y == yValueOfPeriodLanthanides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\thulium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* ytterbium box */ if (x == xValueOfGroupXVII && y == yValueOfPeriodLanthanides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\ytterbium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* lutetium box */ if (x == xValueOfGroupXVIII && y == yValueOfPeriodLanthanides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\lutetium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* actinium box */ if (x == xValueOfGroupIV && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\actinium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* thorium box */ if (x == xValueOfGroupV && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\thorium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* protactinium box */ if (x == xValueOfGroupVI && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\protactinium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* uranium box */ if (x == xValueOfGroupVII && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\uranium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* neptunium box */ if (x == xValueOfGroupVIII && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\neptunium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* plutonium box */ if (x == xValueOfGroupIX && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\plutonium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* americium box */ if (x == xValueOfGroupX && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\americium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* curium box */ if (x == xValueOfGroupXI && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\curium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* berkelium box */ if (x == xValueOfGroupXII && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\berkelium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* californium box */ if (x == xValueOfGroupXIII && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\californium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* einsteinium box */ if (x == xValueOfGroupXIV && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\einsteinium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* fermium box */ if (x == xValueOfGroupXV && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\fermium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* mendelevium box */ if (x == xValueOfGroupXVI && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\mendelevium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* nobelium box */ if (x == xValueOfGroupXVII && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\nobelium.html"); iBrCtlInterface->LoadUrlL(KUrl); } 
							/* lawrencium box */ if (x == xValueOfGroupXVIII && y == yValueOfPeriodActinides)  { _LIT(KUrl, "file:///C:\\private\\20026289\\lawrencium.html"); iBrCtlInterface->LoadUrlL(KUrl); }		
		}
    


   }


void 
CPeriodictableContainer::OpenAboutBoxL()
    {
    if (iBrCtlInterface == NULL) {
    
    
				TRect rect(120,10, 640,264);//Position(), Size());
				iBrCtlInterface = CreateBrowserControlL( this, 
				rect, 
				TBrCtlDefs::ECapabilityDisplayScrollBar,
				iCommandBase, 
				NULL, 
				NULL,
				NULL, 
				NULL,
				NULL);
				
				_LIT(KUrl, "file:///C:\\private\\20026289\\about.html");
				iBrCtlInterface->LoadUrlL(KUrl);
	
		}
   }


// End of File  

