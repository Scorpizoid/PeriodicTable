// PeriodicTable_CExampleAppUi.cpp
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
				// Add the view to the stack
    AddToStackL(iAppView);
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
    TInt xValueOfGroupI = 6;
    TInt xValueOfGroupII = 31;
    TInt xValueOfGroupIII = 56;
    TInt xValueOfGroupIV = 81;
    TInt xValueOfGroupV = 106;
    TInt xValueOfGroupVI = 131;
    TInt xValueOfGroupVII = 156;
    TInt xValueOfGroupVIII = 181;
    TInt xValueOfGroupIX = 206;
    TInt xValueOfGroupX = 231;
    TInt xValueOfGroupXI = 256;
    TInt xValueOfGroupXII = 281;
    TInt xValueOfGroupXIII = 306;
    TInt xValueOfGroupXIV = 331;
    TInt xValueOfGroupXV = 356;
    TInt xValueOfGroupXVI = 381;
    TInt xValueOfGroupXVII = 406;
    TInt xValueOfGroupXVIII = 431;

    TInt yValueOfPeriodI = 10;
    TInt yValueOfPeriodII = 29;
    TInt yValueOfPeriodIII = 48;
    TInt yValueOfPeriodIV = 67;
    TInt yValueOfPeriodV = 86;
    TInt yValueOfPeriodVI = 105;
    TInt yValueOfPeriodVII = 124;
    TInt yValueOfPeriodLanthanides = 152;
    TInt yValueOfPeriodActinides = 171;
	switch (aCommand)
		{
			   // Handle request to launch Info dialog using
		       // default first line and default icon.
	case ECbaButton0:
				// If we press Enter in the hydrogen box
		if (iAppView->x == xValueOfGroupI && iAppView->y == yValueOfPeriodI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(1);
		}
				// If we press Enter in the lithium box
		if (iAppView->x == xValueOfGroupI && iAppView->y == yValueOfPeriodII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(2);
		}
				// If we press Enter in the sodium box
		if (iAppView->x == xValueOfGroupI && iAppView->y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(3);
		}
				// If we press Enter in the potassium box
		if (iAppView->x == xValueOfGroupI && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(4);
		}
				// If we press Enter in the rubidium box
		if (iAppView->x == xValueOfGroupI && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(5);
		}
				// If we press Enter in the caesium box
		if (iAppView->x == xValueOfGroupI && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(6);
		}
				// If we press Enter in the francium box
		if (iAppView->x == xValueOfGroupI && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(7);
		}
				// If we press Enter in the beryllium box
		if (iAppView->x == xValueOfGroupII && iAppView->y == yValueOfPeriodII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(8);
		}
				// If we press Enter in the magnesium box
		if (iAppView->x == xValueOfGroupII && iAppView->y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(9);
		}
				// If we press Enter in the calcium box
		if (iAppView->x == xValueOfGroupII && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(10);
		}
				// If we press Enter in the strontium box
		if (iAppView->x == xValueOfGroupII && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(11);
		}
				// If we press Enter in the barium box
		if (iAppView->x == xValueOfGroupII && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(12);
		}
				// If we press Enter in the radium box
		if (iAppView->x == xValueOfGroupII && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(13);
		}
				// If we press Enter in the scandium box
		if (iAppView->x == xValueOfGroupIII && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(14);
		}
				// If we press Enter in the yttrium box
		if (iAppView->x == xValueOfGroupIII && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(15);
		}
				// If we press Enter in the titanium box
		if (iAppView->x == xValueOfGroupIV && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(16);
		}
				// If we press Enter in the zirconium box
		if (iAppView->x == xValueOfGroupIV && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(17);
		}
				// If we press Enter in the hafnium box
		if (iAppView->x == xValueOfGroupIV && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(18);
		}
				// If we press Enter in the rutherfordium box
		if (iAppView->x == xValueOfGroupIV && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(19);
		}
				// If we press Enter in the vanadium box
		if (iAppView->x == xValueOfGroupV && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(20);
		}
				// If we press Enter in the niobium box
		if (iAppView->x == xValueOfGroupV && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(21);
		}
				// If we press Enter in the tantalum box
		if (iAppView->x == xValueOfGroupV && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(22);
		}
				// If we press Enter in the dubnium box
		if (iAppView->x == xValueOfGroupV && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(23);
		}
				// If we press Enter in the chromium box
		if (iAppView->x == xValueOfGroupVI && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(24);
		}
				// If we press Enter in the molybdenum box
		if (iAppView->x == xValueOfGroupVI && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(25);
		}
				// If we press Enter in the tungsten box
		if (iAppView->x == xValueOfGroupVI && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(26);
		}
				// If we press Enter in the seaborgium box
		if (iAppView->x == xValueOfGroupVI && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(27);
		}
				// If we press Enter in the manganese box
		if (iAppView->x == xValueOfGroupVII && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(28);
		}
				// If we press Enter in the technetium box
		if (iAppView->x == xValueOfGroupVII && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(29);
		}
				// If we press Enter in the rhenium box
		if (iAppView->x == xValueOfGroupVII && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(30);
		}
				// If we press Enter in the bohrium box
		if (iAppView->x == xValueOfGroupVII && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(31);
		}
				// If we press Enter in the iron box
		if (iAppView->x == xValueOfGroupVIII && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(32);
		}
				// If we press Enter in the ruthenium box
		if (iAppView->x == xValueOfGroupVIII && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(33);
		}
				// If we press Enter in the osmium box
		if (iAppView->x == xValueOfGroupVIII && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(34);
		}
				// If we press Enter in the hassium box
		if (iAppView->x == xValueOfGroupVIII && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(35);
		}
				// If we press Enter in the cobalt box
		if (iAppView->x == xValueOfGroupIX && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(36);
		}
				// If we press Enter in the rhodium box
		if (iAppView->x == xValueOfGroupIX && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(37);
		}
				// If we press Enter in the iridium box
		if (iAppView->x == xValueOfGroupIX && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(38);
		}
				// If we press Enter in the meitnerium box
		if (iAppView->x == xValueOfGroupIX && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(39);
		}
				// If we press Enter in the nickel box
		if (iAppView->x == xValueOfGroupX && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(40);
		}
				// If we press Enter in the palladium box
		if (iAppView->x == xValueOfGroupX && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(41);
		}
				// If we press Enter in the platinum box
		if (iAppView->x == xValueOfGroupX && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(42);
		}
				// If we press Enter in the darmstadtium box
		if (iAppView->x == xValueOfGroupX && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(43);
		}
				// If we press Enter in the copper box
		if (iAppView->x == xValueOfGroupXI && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(44);
		}
				// If we press Enter in the silver box
		if (iAppView->x == xValueOfGroupXI && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(45);
		}
				// If we press Enter in the gold box
		if (iAppView->x == xValueOfGroupXI && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(46);
		}
				// If we press Enter in the roentgenium box
		if (iAppView->x == xValueOfGroupXI && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(47);
		}
				// If we press Enter in the copernicium box
		if (iAppView->x == xValueOfGroupXII && iAppView->y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(112);
		}
				// If we press Enter in the zinc box
		if (iAppView->x == xValueOfGroupXII && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(48);
		}
				// If we press Enter in the cadmium box
		if (iAppView->x == xValueOfGroupXII && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(49);
		}
				// If we press Enter in the mercury box
		if (iAppView->x == xValueOfGroupXII && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(50);
		}
				// If we press Enter in the boron box
		if (iAppView->x == xValueOfGroupXIII && iAppView->y == yValueOfPeriodII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(51);
		}
				// If we press Enter in the aluminium box
		if (iAppView->x == xValueOfGroupXIII && iAppView->y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(52);
		}
				// If we press Enter in the gallium box
		if (iAppView->x == xValueOfGroupXIII && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(53);
		}
				// If we press Enter in the indium box
		if (iAppView->x == xValueOfGroupXIII && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(54);
		}
				// If we press Enter in the thallium box
		if (iAppView->x == xValueOfGroupXIII && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(55);
		}
				// If we press Enter in the carbon box
		if (iAppView->x == xValueOfGroupXIV && iAppView->y == yValueOfPeriodII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(56);
		}
				// If we press Enter in the silicon box
		if (iAppView->x == xValueOfGroupXIV && iAppView->y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(57);
		}
				// If we press Enter in the germanium box
		if (iAppView->x == xValueOfGroupXIV && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(58);
		}
				// If we press Enter in the tin box
		if (iAppView->x == xValueOfGroupXIV && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(59);
		}
				// If we press Enter in the lead box
		if (iAppView->x == xValueOfGroupXIV && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(60);
		}
				// If we press Enter in the nitrogen box
		if (iAppView->x == xValueOfGroupXV && iAppView->y == yValueOfPeriodII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(61);
		}
				// If we press Enter in the phosphorus box
		if (iAppView->x == xValueOfGroupXV && iAppView->y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(62);
		}
				// If we press Enter in the arsenic box
		if (iAppView->x == xValueOfGroupXV && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(63);
		}
				// If we press Enter in the antimony box
		if (iAppView->x == xValueOfGroupXV && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(64);
		}
				// If we press Enter in the bismuth box
		if (iAppView->x == xValueOfGroupXV && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(65);
		}
				// If we press Enter in the oxygen box
		if (iAppView->x == xValueOfGroupXVI && iAppView->y == yValueOfPeriodII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(66);
		}
				// If we press Enter in the sulfur box
		if (iAppView->x == xValueOfGroupXVI && iAppView->y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(67);
		}
				// If we press Enter in the selenium box
		if (iAppView->x == xValueOfGroupXVI && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(68);
		}
				// If we press Enter in the tellurium box
		if (iAppView->x == xValueOfGroupXVI && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(69);
		}
				// If we press Enter in the polonium box
		if (iAppView->x == xValueOfGroupXVI && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(70);
		}
				// If we press Enter in the fluorine box
		if (iAppView->x == xValueOfGroupXVII && iAppView->y == yValueOfPeriodII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(71);
		}
				// If we press Enter in the chlorine box
		if (iAppView->x == xValueOfGroupXVII && iAppView->y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(72);
		}
				// If we press Enter in the bromine box
		if (iAppView->x == xValueOfGroupXVII && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(73);
		}
				// If we press Enter in the iodine box
		if (iAppView->x == xValueOfGroupXVII && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(74);
		}
				// If we press Enter in the astatine box
		if (iAppView->x == xValueOfGroupXVII && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(75);
		}
				// If we press Enter in the helium box
		if (iAppView->x == xValueOfGroupXVIII && iAppView->y == yValueOfPeriodI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(76);
		}
				// If we press Enter in the neon box
		if (iAppView->x == xValueOfGroupXVIII && iAppView->y == yValueOfPeriodII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(77);
		}
				// If we press Enter in the argon box
		if (iAppView->x == xValueOfGroupXVIII && iAppView->y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(78);
		}
				// If we press Enter in the krypton box
		if (iAppView->x == xValueOfGroupXVIII && iAppView->y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(79);
		}
				// If we press Enter in the xenon box
		if (iAppView->x == xValueOfGroupXVIII && iAppView->y == yValueOfPeriodV)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(80);
		}
				// If we press Enter in the radon box
		if (iAppView->x == xValueOfGroupXVIII && iAppView->y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(81);
		}
				// If we press Enter in the lanthanum box
		if (iAppView->x == xValueOfGroupIV && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(82);
		}
				// If we press Enter in the cerium box
		if (iAppView->x == xValueOfGroupV && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(83);
		}
				// If we press Enter in the praseodymium box
		if (iAppView->x == xValueOfGroupVI && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(84);
		}
				// If we press Enter in the neodymium box
		if (iAppView->x == xValueOfGroupVII && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(85);
		}
				// If we press Enter in the promethium box
		if (iAppView->x == xValueOfGroupVIII && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(86);
		}
				// If we press Enter in the samarium box
		if (iAppView->x == xValueOfGroupIX && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(87);
		}
				// If we press Enter in the europium box
		if (iAppView->x == xValueOfGroupX && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(88);
		}
				// If we press Enter in the gadolinium box
		if (iAppView->x == xValueOfGroupXI && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(89);
		}
				// If we press Enter in the terbium box
		if (iAppView->x == xValueOfGroupXII && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(90);
		}
				// If we press Enter in the dysprosium box
		if (iAppView->x == xValueOfGroupXIII && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(91);
		}
				// If we press Enter in the holmium box
		if (iAppView->x == xValueOfGroupXIV && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(92);
		}
				// If we press Enter in the erbium box
		if (iAppView->x == xValueOfGroupXV && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(93);
		}
				// If we press Enter in the thulium box
		if (iAppView->x == xValueOfGroupXVI && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(94);
		}
				// If we press Enter in the ytterbium box
		if (iAppView->x == xValueOfGroupXVII && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(95);
		}
				// If we press Enter in the lutetium box
		if (iAppView->x == xValueOfGroupXVIII && iAppView->y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(96);
		}
				// If we press Enter in the actinium box
		if (iAppView->x == xValueOfGroupIV && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(97);
		}
				// If we press Enter in the thorium box
		if (iAppView->x == xValueOfGroupV && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(98);
		}
				// If we press Enter in the protactinium box
		if (iAppView->x == xValueOfGroupVI && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(99);
		}
				// If we press Enter in the uranium box
		if (iAppView->x == xValueOfGroupVII && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(100);
		}
				// If we press Enter in the neptunium box
		if (iAppView->x == xValueOfGroupVIII && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(101);
		}
				// If we press Enter in the plutonium box
		if (iAppView->x == xValueOfGroupIX && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(102);
		}
				// If we press Enter in the americium box
		if (iAppView->x == xValueOfGroupX && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(103);
		}
				// If we press Enter in the curium box
		if (iAppView->x == xValueOfGroupXI && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(104);
		}
				// If we press Enter in the berkelium box
		if (iAppView->x == xValueOfGroupXII && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(105);
		}
				// If we press Enter in the californium box
		if (iAppView->x == xValueOfGroupXIII && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(106);
		}
				// If we press Enter in the einsteinium box
		if (iAppView->x == xValueOfGroupXIV && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(107);
		}
				// If we press Enter in the fermium box
		if (iAppView->x == xValueOfGroupXV && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(108);
		}
				// If we press Enter in the mendelevium box
		if (iAppView->x == xValueOfGroupXVI && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(109);
		}
				// If we press Enter in the nobelium box
		if (iAppView->x == xValueOfGroupXVII && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(110);
		}
				// If we press Enter in the lawrencium box
		if (iAppView->x == xValueOfGroupXVIII && iAppView->y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			iAppView->LaunchElementDialog(111);
		}
		break;
	case EExampleAboutDialog:
		CmdLaunchAboutDialog();
		iAppView->DrawNow();
		break;
	case EExampleTableColoursDialog:
		CmdLaunchTableColoursDialog();
		iAppView->DrawNow();
		break;
/*
			   // Handle request to launch Info dialog using
		       // app supplied first line and app supplied icon.

	case ECbaButton1:
	case EExampleModifiedDialog:
				// If we press Enter in the hydrogen box
		if (example->x == 6 && example->y == 15)
		{
				// We launch its dialogs
			example->LaunchElementDialog(1);
		}
		iAppView->DrawNow();
		break;

*/               // Exit the application. The call is
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
void CExampleAppUi::CmdLaunchAboutDialog()
	{
	           // UI environment
	CEikonEnv* eikonEnv=CEikonEnv::Static();

	         // First line of text is null descriptor forcing the
	         // info dialog to use the default text supplied by
	         // the UI.
	         // The app supplies the second line of text (from 
	         // the resource file)
	HBufC* title = eikonEnv->AllocReadResourceLC(R_ABOUT_TITLE);
	HBufC* message = eikonEnv->AllocReadResourceLC(R_ABOUT_MESSAGE);

			 // Launch the dialog - it will use a deafult Icon
	CCknInfoDialog::RunDlgLD(*title,*message);

	         // Pop and destroy secondline
	CleanupStack::PopAndDestroy(2);
	}


void CExampleAppUi::CmdLaunchTableColoursDialog()
	{
	           // UI environment
	CEikonEnv* eikonEnv=CEikonEnv::Static();

	         // First line of text is null descriptor forcing the
	         // info dialog to use the default text supplied by
	         // the UI.
	         // The app supplies the second line of text (from 
	         // the resource file)
	HBufC* title = eikonEnv->AllocReadResourceLC(R_TABLE_COLOURS_TITLE);
	HBufC* message = eikonEnv->AllocReadResourceLC(R_TABLE_COLOURS);

			 // Launch the dialog - it will use a deafult Icon
	CCknInfoDialog::RunDlgLD(*title,*message);

	         // Pop and destroy secondline
	CleanupStack::PopAndDestroy(2);
	}
