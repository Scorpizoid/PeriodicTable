#include "PeriodicTable.h"


			// Check for key presses
TKeyResponse CExampleAppView::OfferKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType) 
    { 
    TInt code=aKeyEvent.iCode;
			// Create an instance of the CExampleAppView class so we can
			// use the CmdLaunchModifiedDialog() function
    CleanupStack::PushL(example);
    TUint8 yMovement = 19;
    TUint8 xMovement = 25;
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
    _LIT(KHydrogen, "Hydrogen, 1");
    _LIT(KHelium, "Helium, 2");
    _LIT(KLithium, "Lithium, 3");
    _LIT(KBeryllium, "Beryllium, 4");
    _LIT(KBoron, "Boron, 5");
    _LIT(KCarbon, "Carbon, 6");
    _LIT(KNitrogen, "Nitrogen, 7");
    _LIT(KOxygen, "Oxygen, 8");
    _LIT(KFluorine, "Fluorine, 9");
    _LIT(KNeon, "Neon, 10");
    _LIT(KSodium, "Sodium, 11");
    _LIT(KMagnesium, "Magnesium, 12");
    _LIT(KAluminium, "Aluminium, 13");
    _LIT(KSilicon, "Silicon, 14");
    _LIT(KPhosphorus, "Phosphorus, 15");
    _LIT(KSulfur, "Sulfur, 16");
    _LIT(KChlorine, "Chlorine, 17");
    _LIT(KArgon, "Argon, 18");
    _LIT(KPotassium, "Potassium, 19");
    _LIT(KCalcium, "Calcium, 20");
    _LIT(KScandium, "Scandium, 21");
	_LIT(KTitanium, "Titanium, 22");
    _LIT(KVanadium, "Vanadium, 23");
    _LIT(KChromium, "Chromium, 24");
    _LIT(KManganese, "Manganese, 25");
    _LIT(KIron, "Iron, 26");
    _LIT(KCobalt, "Cobalt, 27");
    _LIT(KNickel, "Nickel, 28");
    _LIT(KCopper, "Copper, 29");
    _LIT(KZinc, "Zinc, 30");
    _LIT(KGallium, "Gallium, 31");
    _LIT(KGermanium, "Germanium, 32");
    _LIT(KArsenic, "Arsenic, 33");
    _LIT(KSelenium, "Selenium, 34");
    _LIT(KBromine, "Bromine, 35");
    _LIT(KKrypton, "Krypton, 36");
    _LIT(KRubidium, "Rubidium, 37");
    _LIT(KStrontium, "Strontium, 38");
    _LIT(KYttrium, "Yttrium, 39");
    _LIT(KZirconium, "Zirconium, 40");
    _LIT(KNiobium, "Niobium, 41");
    _LIT(KMolybdenum, "Molybdenum, 42");
    _LIT(KTechnetium, "Technetium, 43");
    _LIT(KRuthenium, "Ruthenium, 44");
    _LIT(KRhodium, "Rhodium, 45");
    _LIT(KPalladium, "Palladium, 46");
    _LIT(KSilver, "Silver, 47");
    _LIT(KCadmium, "Cadmium, 48");
    _LIT(KIndium, "Indium, 49");
    _LIT(KTin, "Tin, 50");
    _LIT(KAntimony, "Antimony, 51");
    _LIT(KTellurium, "Tellurium, 52");
	_LIT(KIodine, "Iodine, 53");
    _LIT(KXenon, "Xenon, 54");
    _LIT(KCaesium, "Caesium, 55");
    _LIT(KBarium, "Barium, 56");
    _LIT(KLanthanum, "Lanthanum, 57");
    _LIT(KCerium, "Cerium, 58");
    _LIT(KPraseodymium, "Praseodymium, 59");
    _LIT(KNeodymium, "Neodymium, 60");
    _LIT(KPromethium, "Promethium, 61");
    _LIT(KSamarium, "Samarium, 62");
    _LIT(KEuropium, "Europium, 63");
    _LIT(KGadolinium, "Gadolinium, 64");
    _LIT(KTerbium, "Terbium, 65");
    _LIT(KDysprosium, "Dysprosium, 66");
    _LIT(KHolmium, "Holmium, 67");
    _LIT(KErbium, "Erbium, 68");
    _LIT(KThulium, "Thulium, 69");
    _LIT(KYtterbium, "Ytterbium, 70");
    _LIT(KLutetium, "Lutetium, 71");
    _LIT(KHafnium, "Hafnium, 72");
    _LIT(KTantalum, "Tantalum, 73");
    _LIT(KTungsten, "Tungsten, 74");
    _LIT(KRhenium, "Rhenium, 75");
    _LIT(KOsmium, "Osmium, 76");
    _LIT(KIridium, "Iridium, 77");
    _LIT(KPlatinum, "Platinum, 78");
    _LIT(KGold, "Gold, 79");
    _LIT(KMercury, "Mercury, 80");
    _LIT(KThallium, "Thallium, 81");
    _LIT(KLead, "Lead, 82");
    _LIT(KBismuth, "Bismuth, 83");
	_LIT(KPolonium, "Polonium, 84");
    _LIT(KAstatine, "Astatine, 85");
    _LIT(KRadon, "Radon, 86");
    _LIT(KFrancium, "Francium, 87");
    _LIT(KRadium, "Radium, 88");
    _LIT(KActinium, "Actinium, 89");
    _LIT(KThorium, "Thorium, 90");
    _LIT(KProtactinium, "Protactinium, 91");
    _LIT(KUranium, "Uranium, 92");
    _LIT(KNeptunium, "Neptunium, 93");
    _LIT(KPlutonium, "Plutonium, 94");
    _LIT(KAmericium, "Americium, 95");
    _LIT(KCurium, "Curium, 96");
    _LIT(KBerkelium, "Berkelium, 97");
    _LIT(KCalifornium, "Californium, 98");
    _LIT(KEinsteinium, "Einsteinium, 99");
    _LIT(KFermium, "Fermium, 100");
    _LIT(KMendelevium, "Mendelevium, 101");
    _LIT(KNobelium, "Nobelium, 102");
    _LIT(KLawrencium, "Lawrencium, 103");
    _LIT(KRutherfordium, "Rutherfordium, 104");
    _LIT(KDubnium, "Dubnium, 105");
    _LIT(KSeaborgium, "Seaborgium, 106");
    _LIT(KBohrium, "Bohrium, 107");
    _LIT(KHassium, "Hassium, 108");
    _LIT(KMeitnerium, "Meitnerium, 109");
    _LIT(KDarmstadtium, "Darmstadtium, 110");
    _LIT(KRoentgenium, "Roentgenium, 111");
    _LIT(KCopernicium, "Copernicium, 112");
    
    
    

    
    
    
    switch (code) 
            { 
    case EKeyDownArrow:
    		y = y + yMovement;
    			// In case the cursor goes off the table (in the I group)
    		if (x == xValueOfGroupI && (y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodI;
		}
			// In case the cursor goes off the table (in the II group)
		if (x == xValueOfGroupII && (y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodII;
		}
			// In case the cursor goes off the table (in the III group)
		if (x == xValueOfGroupIII && (y > yValueOfPeriodV))
		{
			y = yValueOfPeriodLanthanides;
			x = xValueOfGroupIV;
		}
			// In case the cursor goes off the table (in the IV group)
		if (x == xValueOfGroupIV && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - lanthanum
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the V group)
		if (x == xValueOfGroupV && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - cerium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the VI group)
		if (x == xValueOfGroupVI && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - praseodymium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the VII group)
		if (x == xValueOfGroupVII && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - neodymium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the VIII group)
		if (x == xValueOfGroupVIII && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - promethium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the IX group)
		if (x == xValueOfGroupIX && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - samarium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the X group)
		if (x == xValueOfGroupX && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - europium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the XI group)
		if (x == xValueOfGroupXI && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - gadolinium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the XII group)
		if (x == xValueOfGroupXII && (y > yValueOfPeriodVI && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - terbium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the XIII group)
		if (x == xValueOfGroupXIII && (y > yValueOfPeriodVI && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - dysprosium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the XIV group)
		if (x == xValueOfGroupXIV && (y > yValueOfPeriodVI && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - holmium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the XV group)
		if (x == xValueOfGroupXV && (y > yValueOfPeriodVI && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - erbium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the XVI group)
		if (x == xValueOfGroupXVI && (y > yValueOfPeriodVI && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - thulium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the XVII group)
		if (x == xValueOfGroupXVII && (y > yValueOfPeriodVI && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - ytterbium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the XVIII group)
		if (x == xValueOfGroupXVIII && (y > yValueOfPeriodVI && y < yValueOfPeriodLanthanides))
		{
			// Move to the lanthanides - lutetium
			y = yValueOfPeriodLanthanides;
		}
			// In case the cursor goes off the table (in the Actinide I group)
		if (x == xValueOfGroupIV && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide II group)
		if (x == xValueOfGroupV && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide III group)
		if (x == xValueOfGroupVI && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide IV group)
		if (x == xValueOfGroupVII && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide V group)
		if (x == xValueOfGroupVIII && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide VI group)
		if (x == xValueOfGroupIX && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide VII group)
		if (x == xValueOfGroupX && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide VIII group)
		if (x == xValueOfGroupXI && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide IX group)
		if (x == xValueOfGroupXII && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodIV;
		}
			// In case the cursor goes off the table (in the Actinide X group)
		if (x == xValueOfGroupXIII && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodII;
		}
			// In case the cursor goes off the table (in the Actinide XI group)
		if (x == xValueOfGroupXIV && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodII;
		}
			// In case the cursor goes off the table (in the Actinide XII group)
		if (x == xValueOfGroupXV && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodII;
		}
			// In case the cursor goes off the table (in the Actinide XIII group)
		if (x == xValueOfGroupXVI && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodII;
		}
			// In case the cursor goes off the table (in the Actinide XIV group)
		if (x == xValueOfGroupXVII && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodII;
		}
			// In case the cursor goes off the table (in the Actinide XV group)
		if (x == xValueOfGroupXVIII && y > yValueOfPeriodActinides)
		{
			y = yValueOfPeriodI;
		}








				// If we are in the hydrogen box
		if (x == xValueOfGroupI && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHydrogen;
		}
				// If we are in the lithium box
		if (x == xValueOfGroupI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KLithium;
		}
				// If we are in the sodium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSodium;
		}
				// If we are in the potassium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KPotassium;
		}
				// If we are in the rubidium box
		if (x == xValueOfGroupI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRubidium;
		}
				// If we are in the caesium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KCaesium;
		}
				// If we are in the francium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KFrancium;
		}
				// If we are in the beryllium box
		if (x == xValueOfGroupII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBeryllium;
		}
				// If we are in the magnesium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KMagnesium;
		}
				// If we are in the calcium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCalcium;
		}
				// If we are in the strontium box
		if (x == xValueOfGroupII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KStrontium;
		}
				// If we are in the barium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBarium;
		}
				// If we are in the radium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRadium;
		}
				// If we are in the scandium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KScandium;
		}
				// If we are in the yttrium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KYttrium;
		}
				// If we are in the titanium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KTitanium;
		}
				// If we are in the zirconium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KZirconium;
		}
				// If we are in the hafnium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KHafnium;
		}
				// If we are in the rutherfordium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRutherfordium;
		}
				// If we are in the vanadium box
		if (x == xValueOfGroupV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KVanadium;
		}
				// If we are in the niobium box
		if (x == xValueOfGroupV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KNiobium;
		}
				// If we are in the tantalum box
		if (x == xValueOfGroupV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTantalum;
		}
				// If we are in the dubnium box
		if (x == xValueOfGroupV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDubnium;
		}
				// If we are in the chromium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KChromium;
		}
				// If we are in the molybdenum box
		if (x == xValueOfGroupVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KMolybdenum;
		}
				// If we are in the tungsten box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTungsten;
		}
				// If we are in the seaborgium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KSeaborgium;
		}
				// If we are in the manganese box
		if (x == xValueOfGroupVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KManganese;
		}
				// If we are in the technetium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTechnetium;
		}
				// If we are in the rhenium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRhenium;
		}
				// If we are in the bohrium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KBohrium;
		}
				// If we are in the iron box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KIron;
		}
				// If we are in the ruthenium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRuthenium;
		}
				// If we are in the osmium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KOsmium;
		}
				// If we are in the hassium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KHassium;
		}
				// If we are in the cobalt box
		if (x == xValueOfGroupIX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCobalt;
		}
				// If we are in the rhodium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRhodium;
		}
				// If we are in the iridium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KIridium;
		}
				// If we are in the meitnerium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KMeitnerium;
		}
				// If we are in the nickel box
		if (x == xValueOfGroupX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KNickel;
		}
				// If we are in the palladium box
		if (x == xValueOfGroupX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KPalladium;
		}
				// If we are in the platinum box
		if (x == xValueOfGroupX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPlatinum;
		}
				// If we are in the darmstadtium box
		if (x == xValueOfGroupX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDarmstadtium;
		}
				// If we are in the copper box
		if (x == xValueOfGroupXI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCopper;
		}
				// If we are in the silver box
		if (x == xValueOfGroupXI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KSilver;
		}
				// If we are in the gold box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KGold;
		}
				// If we are in the roentgenium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRoentgenium;
		}
				// If we are in the copernicium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KCopernicium;
		}
				// If we are in the zinc box
		if (x == xValueOfGroupXII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KZinc;
		}
				// If we are in the cadmium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KCadmium;
		}
				// If we are in the mercury box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KMercury;
		}
				// If we are in the boron box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBoron;
		}
				// If we are in the aluminium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KAluminium;
		}
				// If we are in the gallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGallium;
		}
				// If we are in the indium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIndium;
		}
				// If we are in the thallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KThallium;
		}
				// If we are in the carbon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KCarbon;
		}
				// If we are in the silicon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSilicon;
		}
				// If we are in the germanium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGermanium;
		}
				// If we are in the tin box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTin;
		}
				// If we are in the lead box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KLead;
		}
				// If we are in the nitrogen box
		if (x == xValueOfGroupXV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNitrogen;
		}
				// If we are in the phosphorus box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KPhosphorus;
		}
				// If we are in the arsenic box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KArsenic;
		}
				// If we are in the antimony box
		if (x == xValueOfGroupXV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KAntimony;
		}
				// If we are in the bismuth box
		if (x == xValueOfGroupXV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBismuth;
		}
				// If we are in the oxygen box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KOxygen;
		}
				// If we are in the sulfur box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSulfur;
		}
				// If we are in the selenium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KSelenium;
		}
				// If we are in the tellurium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTellurium;
		}
				// If we are in the polonium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPolonium;
		}
				// If we are in the fluorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KFluorine;
		}
				// If we are in the chlorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KChlorine;
		}
				// If we are in the bromine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KBromine;
		}
				// If we are in the iodine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIodine;
		}
				// If we are in the astatine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KAstatine;
		}
				// If we are in the helium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHelium;
		}
				// If we are in the neon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNeon;
		}
				// If we are in the argon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KArgon;
		}
				// If we are in the krypton box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KKrypton;
		}
				// If we are in the xenon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KXenon;
		}
				// If we are in the radon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRadon;
		}
				// If we are in the lanthanum box
		if (x == xValueOfGroupIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLanthanum;
		}
				// If we are in the cerium box
		if (x == xValueOfGroupV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KCerium;
		}
				// If we are in the praseodymium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPraseodymium;
		}
				// If we are in the neodymium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KNeodymium;
		}
				// If we are in the promethium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPromethium;
		}
				// If we are in the samarium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KSamarium;
		}
				// If we are in the europium box
		if (x == xValueOfGroupX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KEuropium;
		}
				// If we are in the gadolinium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KGadolinium;
		}
				// If we are in the terbium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KTerbium;
		}
				// If we are in the dysprosium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KDysprosium;
		}
				// If we are in the holmium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KHolmium;
		}
				// If we are in the erbium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KErbium;
		}
				// If we are in the thulium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KThulium;
		}
				// If we are in the ytterbium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KYtterbium;
		}
				// If we are in the lutetium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLutetium;
		}
				// If we are in the actinium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KActinium;
		}
				// If we are in the thorium box
		if (x == xValueOfGroupV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KThorium;
		}
				// If we are in the protactinium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KProtactinium;
		}
				// If we are in the uranium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KUranium;
		}
				// If we are in the neptunium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNeptunium;
		}
				// If we are in the plutonium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KPlutonium;
		}
				// If we are in the americium box
		if (x == xValueOfGroupX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KAmericium;
		}
				// If we are in the curium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCurium;
		}
				// If we are in the berkelium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KBerkelium;
		}
				// If we are in the californium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCalifornium;
		}
				// If we are in the einsteinium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KEinsteinium;
		}
				// If we are in the fermium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KFermium;
		}
				// If we are in the mendelevium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KMendelevium;
		}
				// If we are in the nobelium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNobelium;
		}
				// If we are in the lawrencium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KLawrencium;
		}

			// Draw the view
		CCoeControl::DrawNow();


		break;
    case EKeyUpArrow:
		y = y - yMovement;
			// In case the cursor goes off the table (in the I group)
		if (x == xValueOfGroupI && (y < yValueOfPeriodI))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the II group)
		if (x == xValueOfGroupII && (y < yValueOfPeriodII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the III group)
		if (x == xValueOfGroupIII && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupIV;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the IV group)
		if (x == xValueOfGroupIV && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupIV;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the V group)
		if (x == xValueOfGroupV && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupV;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the VI group)
		if (x == xValueOfGroupVI && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupVI;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the VII group)
		if (x == xValueOfGroupVII && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupVII;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the VIII group)
		if (x == xValueOfGroupVIII && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupVIII;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the IX group)
		if (x == xValueOfGroupIX && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupIX;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the X group)
		if (x == xValueOfGroupX && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupX;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the XI group)
		if (x == xValueOfGroupXI && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupXI;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the XII group)
		if (x == xValueOfGroupXII && (y < yValueOfPeriodIV))
		{
			x = xValueOfGroupXII;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the XIII group)
		if (x == xValueOfGroupXIII && (y < yValueOfPeriodII))
		{
			x = xValueOfGroupXIII;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the XIV group)
		if (x == xValueOfGroupXIV && (y < yValueOfPeriodII))
		{
			x = xValueOfGroupXIV;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the XV group)
		if (x == xValueOfGroupXV && (y < yValueOfPeriodII))
		{
			x = xValueOfGroupXV;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the XVI group)
		if (x == xValueOfGroupXVI && (y < yValueOfPeriodII))
		{
			x = xValueOfGroupXVI;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the XVII group)
		if (x == xValueOfGroupXVII && (y < yValueOfPeriodII))
		{
			x = xValueOfGroupXVII;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the XVIII group)
		if (x == xValueOfGroupXVIII && (y < yValueOfPeriodI))
		{
			x = xValueOfGroupXVIII;
			y = yValueOfPeriodActinides;
		}
			// In case the cursor goes off the table (in the Lanth I group)
		if (x == xValueOfGroupIV && (y < yValueOfPeriodLanthanides && y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth II group)
		if (x == xValueOfGroupV && (y < yValueOfPeriodLanthanides && y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth III group)
		if (x == xValueOfGroupVI && (y < yValueOfPeriodLanthanides && y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth IV group)
		if (x == xValueOfGroupVII && (y < yValueOfPeriodLanthanides && y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth V group)
		if (x == xValueOfGroupVIII && (y < yValueOfPeriodLanthanides && y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth VI group)
		if (x == xValueOfGroupIX && (y < yValueOfPeriodLanthanides && y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth VII group)
		if (x == xValueOfGroupX && (y < yValueOfPeriodLanthanides && y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth VIII group)
		if (x == xValueOfGroupXI && (y < yValueOfPeriodLanthanides && y > yValueOfPeriodVII))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth IX group)
		if (x == xValueOfGroupXII && (y < yValueOfPeriodLanthanides && y > 105))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth X group)
		if (x == xValueOfGroupXIII && (y < yValueOfPeriodLanthanides && y > 105))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth XI group)
		if (x == xValueOfGroupXIV && (y < yValueOfPeriodLanthanides && y > 105))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth XII group)
		if (x == xValueOfGroupXV && (y < yValueOfPeriodLanthanides && y > 105))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth XIII group)
		if (x == xValueOfGroupXVI && (y < yValueOfPeriodLanthanides && y > 105))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth XIV group)
		if (x == xValueOfGroupXVII && (y < yValueOfPeriodLanthanides && y > 105))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth XV group)
		if (x == xValueOfGroupXVIII && (y < yValueOfPeriodLanthanides && y > 105))
		{
			y = yValueOfPeriodVI;
		}






				// If we are in the hydrogen box
		if (x == xValueOfGroupI && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHydrogen;
		}
				// If we are in the lithium box
		if (x == xValueOfGroupI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KLithium;
		}
				// If we are in the sodium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSodium;
		}
				// If we are in the potassium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KPotassium;
		}
				// If we are in the rubidium box
		if (x == xValueOfGroupI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRubidium;
		}
				// If we are in the caesium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KCaesium;
		}
				// If we are in the francium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KFrancium;
		}
				// If we are in the beryllium box
		if (x == xValueOfGroupII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBeryllium;
		}
				// If we are in the magnesium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KMagnesium;
		}
				// If we are in the calcium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCalcium;
		}
				// If we are in the strontium box
		if (x == xValueOfGroupII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KStrontium;
		}
				// If we are in the barium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBarium;
		}
				// If we are in the radium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRadium;
		}
				// If we are in the scandium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KScandium;
		}
				// If we are in the yttrium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KYttrium;
		}
				// If we are in the titanium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KTitanium;
		}
				// If we are in the zirconium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KZirconium;
		}
				// If we are in the hafnium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KHafnium;
		}
				// If we are in the rutherfordium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRutherfordium;
		}
				// If we are in the vanadium box
		if (x == xValueOfGroupV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KVanadium;
		}
				// If we are in the niobium box
		if (x == xValueOfGroupV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KNiobium;
		}
				// If we are in the tantalum box
		if (x == xValueOfGroupV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTantalum;
		}
				// If we are in the dubnium box
		if (x == xValueOfGroupV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDubnium;
		}
				// If we are in the chromium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KChromium;
		}
				// If we are in the molybdenum box
		if (x == xValueOfGroupVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KMolybdenum;
		}
				// If we are in the tungsten box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTungsten;
		}
				// If we are in the seaborgium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KSeaborgium;
		}
				// If we are in the manganese box
		if (x == xValueOfGroupVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KManganese;
		}
				// If we are in the technetium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTechnetium;
		}
				// If we are in the rhenium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRhenium;
		}
				// If we are in the bohrium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KBohrium;
		}
				// If we are in the iron box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KIron;
		}
				// If we are in the ruthenium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRuthenium;
		}
				// If we are in the osmium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KOsmium;
		}
				// If we are in the hassium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KHassium;
		}
				// If we are in the cobalt box
		if (x == xValueOfGroupIX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCobalt;
		}
				// If we are in the rhodium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRhodium;
		}
				// If we are in the iridium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KIridium;
		}
				// If we are in the meitnerium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KMeitnerium;
		}
				// If we are in the nickel box
		if (x == xValueOfGroupX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KNickel;
		}
				// If we are in the palladium box
		if (x == xValueOfGroupX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KPalladium;
		}
				// If we are in the platinum box
		if (x == xValueOfGroupX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPlatinum;
		}
				// If we are in the darmstadtium box
		if (x == xValueOfGroupX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDarmstadtium;
		}
				// If we are in the copper box
		if (x == xValueOfGroupXI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCopper;
		}
				// If we are in the silver box
		if (x == xValueOfGroupXI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KSilver;
		}
				// If we are in the gold box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KGold;
		}
				// If we are in the roentgenium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRoentgenium;
		}
				// If we are in the copernicium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KCopernicium;
		}
				// If we are in the zinc box
		if (x == xValueOfGroupXII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KZinc;
		}
				// If we are in the cadmium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KCadmium;
		}
				// If we are in the mercury box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KMercury;
		}
				// If we are in the boron box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBoron;
		}
				// If we are in the aluminium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KAluminium;
		}
				// If we are in the gallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGallium;
		}
				// If we are in the indium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIndium;
		}
				// If we are in the thallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KThallium;
		}
				// If we are in the carbon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KCarbon;
		}
				// If we are in the silicon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSilicon;
		}
				// If we are in the germanium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGermanium;
		}
				// If we are in the tin box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTin;
		}
				// If we are in the lead box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KLead;
		}
				// If we are in the nitrogen box
		if (x == xValueOfGroupXV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNitrogen;
		}
				// If we are in the phosphorus box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KPhosphorus;
		}
				// If we are in the arsenic box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KArsenic;
		}
				// If we are in the antimony box
		if (x == xValueOfGroupXV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KAntimony;
		}
				// If we are in the bismuth box
		if (x == xValueOfGroupXV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBismuth;
		}
				// If we are in the oxygen box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KOxygen;
		}
				// If we are in the sulfur box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSulfur;
		}
				// If we are in the selenium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KSelenium;
		}
				// If we are in the tellurium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTellurium;
		}
				// If we are in the polonium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPolonium;
		}
				// If we are in the fluorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KFluorine;
		}
				// If we are in the chlorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KChlorine;
		}
				// If we are in the bromine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KBromine;
		}
				// If we are in the iodine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIodine;
		}
				// If we are in the astatine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KAstatine;
		}
				// If we are in the helium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHelium;
		}
				// If we are in the neon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNeon;
		}
				// If we are in the argon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KArgon;
		}
				// If we are in the krypton box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KKrypton;
		}
				// If we are in the xenon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KXenon;
		}
				// If we are in the radon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRadon;
		}
				// If we are in the lanthanum box
		if (x == xValueOfGroupIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLanthanum;
		}
				// If we are in the cerium box
		if (x == xValueOfGroupV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KCerium;
		}
				// If we are in the praseodymium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPraseodymium;
		}
				// If we are in the neodymium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KNeodymium;
		}
				// If we are in the promethium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPromethium;
		}
				// If we are in the samarium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KSamarium;
		}
				// If we are in the europium box
		if (x == xValueOfGroupX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KEuropium;
		}
				// If we are in the gadolinium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KGadolinium;
		}
				// If we are in the terbium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KTerbium;
		}
				// If we are in the dysprosium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KDysprosium;
		}
				// If we are in the holmium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KHolmium;
		}
				// If we are in the erbium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KErbium;
		}
				// If we are in the thulium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KThulium;
		}
				// If we are in the ytterbium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KYtterbium;
		}
				// If we are in the lutetium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLutetium;
		}
				// If we are in the actinium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KActinium;
		}
				// If we are in the thorium box
		if (x == xValueOfGroupV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KThorium;
		}
				// If we are in the protactinium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KProtactinium;
		}
				// If we are in the uranium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KUranium;
		}
				// If we are in the neptunium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNeptunium;
		}
				// If we are in the plutonium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KPlutonium;
		}
				// If we are in the americium box
		if (x == xValueOfGroupX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KAmericium;
		}
				// If we are in the curium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCurium;
		}
				// If we are in the berkelium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KBerkelium;
		}
				// If we are in the californium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCalifornium;
		}
				// If we are in the einsteinium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KEinsteinium;
		}
				// If we are in the fermium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KFermium;
		}
				// If we are in the mendelevium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KMendelevium;
		}
				// If we are in the nobelium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNobelium;
		}
				// If we are in the lawrencium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KLawrencium;
		}






			// Draw the view
		CCoeControl::DrawNow();







		break;
    case EKeyLeftArrow:
		x = x - xMovement;
				// In case we move from helium to hydrogen
		if ((x < xValueOfGroupXVIII && x > xValueOfGroupI) && y == yValueOfPeriodI)
		{
			x = xValueOfGroupI;
		}
				// In case we move from boron to beryllium
		if ((x < xValueOfGroupXIII && x > xValueOfGroupII) && y == yValueOfPeriodII)
		{
			x = xValueOfGroupII;
		}
				// In case we move from aluminium to magnesium
		if ((x < xValueOfGroupXIII && x > xValueOfGroupII) && y == yValueOfPeriodIII)
		{
			x = xValueOfGroupII;
		}
				// In case we go to the Lanthanides from hafnium
		if ((x == xValueOfGroupIII) && y == yValueOfPeriodVI)
		{
			x = xValueOfGroupXVIII;
			y = yValueOfPeriodLanthanides;
		}
				// In case we go to the Actinides from rutherfordium
		if ((x == xValueOfGroupIII) && y == yValueOfPeriodVII)
		{
			x = xValueOfGroupXVIII;
			y = yValueOfPeriodActinides;
		}
				// In case the cursor goes off the table (in the I block)
		if (x < xValueOfGroupI && y == yValueOfPeriodI)
		{
			x = xValueOfGroupXVIII;
		}
				// In case the cursor goes off the table (in the II block)
		if (x < xValueOfGroupI && y == yValueOfPeriodII)
		{
			x = xValueOfGroupXVIII;
		}
				// In case the cursor goes off the table (in the III block)
		if (x < xValueOfGroupI && y == yValueOfPeriodIII)
		{
			x = xValueOfGroupXVIII;
		}
				// In case the cursor goes off the table (in the IV block)
		if (x < xValueOfGroupI && y == yValueOfPeriodIV)
		{
			x = xValueOfGroupXVIII;
		}
				// In case the cursor goes off the table (in the V block)
		if (x < xValueOfGroupI && y == yValueOfPeriodV)
		{
			x = xValueOfGroupXVIII;
		}
				// In case the cursor goes off the table (in the VI block)
		if (x < xValueOfGroupI && y == yValueOfPeriodVI)
		{
			x = xValueOfGroupXVIII;
		}
				// In case the cursor goes off the table (in the VII block)
		if (x < xValueOfGroupI && y == yValueOfPeriodVII)
		{
			x = xValueOfGroupXI;
		}
				// In case the cursor goes off the table (in the Lanthanides)
		if (x < xValueOfGroupIV && y == yValueOfPeriodLanthanides)
		{
			x = xValueOfGroupII;
			y = yValueOfPeriodVI;
		}
				// In case the cursor goes off the table (in the Actinides)
		if (x < xValueOfGroupIV && y == yValueOfPeriodActinides)
		{
			x = xValueOfGroupII;
			y = yValueOfPeriodVII;
		}





				// If we are in the hydrogen box
		if (x == xValueOfGroupI && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHydrogen;
		}
				// If we are in the lithium box
		if (x == xValueOfGroupI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KLithium;
		}
				// If we are in the sodium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSodium;
		}
				// If we are in the potassium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KPotassium;
		}
				// If we are in the rubidium box
		if (x == xValueOfGroupI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRubidium;
		}
				// If we are in the caesium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KCaesium;
		}
				// If we are in the francium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KFrancium;
		}
				// If we are in the beryllium box
		if (x == xValueOfGroupII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBeryllium;
		}
				// If we are in the magnesium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KMagnesium;
		}
				// If we are in the calcium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCalcium;
		}
				// If we are in the strontium box
		if (x == xValueOfGroupII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KStrontium;
		}
				// If we are in the barium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBarium;
		}
				// If we are in the radium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRadium;
		}
				// If we are in the scandium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KScandium;
		}
				// If we are in the yttrium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KYttrium;
		}
				// If we are in the titanium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KTitanium;
		}
				// If we are in the zirconium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KZirconium;
		}
				// If we are in the hafnium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KHafnium;
		}
				// If we are in the rutherfordium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRutherfordium;
		}
				// If we are in the vanadium box
		if (x == xValueOfGroupV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KVanadium;
		}
				// If we are in the niobium box
		if (x == xValueOfGroupV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KNiobium;
		}
				// If we are in the tantalum box
		if (x == xValueOfGroupV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTantalum;
		}
				// If we are in the dubnium box
		if (x == xValueOfGroupV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDubnium;
		}
				// If we are in the chromium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KChromium;
		}
				// If we are in the molybdenum box
		if (x == xValueOfGroupVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KMolybdenum;
		}
				// If we are in the tungsten box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTungsten;
		}
				// If we are in the seaborgium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KSeaborgium;
		}
				// If we are in the manganese box
		if (x == xValueOfGroupVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KManganese;
		}
				// If we are in the technetium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTechnetium;
		}
				// If we are in the rhenium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRhenium;
		}
				// If we are in the bohrium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KBohrium;
		}
				// If we are in the iron box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KIron;
		}
				// If we are in the ruthenium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRuthenium;
		}
				// If we are in the osmium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KOsmium;
		}
				// If we are in the hassium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KHassium;
		}
				// If we are in the cobalt box
		if (x == xValueOfGroupIX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCobalt;
		}
				// If we are in the rhodium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRhodium;
		}
				// If we are in the iridium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KIridium;
		}
				// If we are in the meitnerium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KMeitnerium;
		}
				// If we are in the nickel box
		if (x == xValueOfGroupX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KNickel;
		}
				// If we are in the palladium box
		if (x == xValueOfGroupX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KPalladium;
		}
				// If we are in the platinum box
		if (x == xValueOfGroupX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPlatinum;
		}
				// If we are in the darmstadtium box
		if (x == xValueOfGroupX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDarmstadtium;
		}
				// If we are in the copper box
		if (x == xValueOfGroupXI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCopper;
		}
				// If we are in the silver box
		if (x == xValueOfGroupXI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KSilver;
		}
				// If we are in the gold box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KGold;
		}
				// If we are in the roentgenium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRoentgenium;
		}
				// If we are in the copernicium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KCopernicium;
		}
				// If we are in the zinc box
		if (x == xValueOfGroupXII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KZinc;
		}
				// If we are in the cadmium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KCadmium;
		}
				// If we are in the mercury box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KMercury;
		}
				// If we are in the boron box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBoron;
		}
				// If we are in the aluminium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KAluminium;
		}
				// If we are in the gallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGallium;
		}
				// If we are in the indium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIndium;
		}
				// If we are in the thallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KThallium;
		}
				// If we are in the carbon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KCarbon;
		}
				// If we are in the silicon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSilicon;
		}
				// If we are in the germanium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGermanium;
		}
				// If we are in the tin box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTin;
		}
				// If we are in the lead box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KLead;
		}
				// If we are in the nitrogen box
		if (x == xValueOfGroupXV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNitrogen;
		}
				// If we are in the phosphorus box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KPhosphorus;
		}
				// If we are in the arsenic box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KArsenic;
		}
				// If we are in the antimony box
		if (x == xValueOfGroupXV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KAntimony;
		}
				// If we are in the bismuth box
		if (x == xValueOfGroupXV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBismuth;
		}
				// If we are in the oxygen box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KOxygen;
		}
				// If we are in the sulfur box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSulfur;
		}
				// If we are in the selenium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KSelenium;
		}
				// If we are in the tellurium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTellurium;
		}
				// If we are in the polonium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPolonium;
		}
				// If we are in the fluorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KFluorine;
		}
				// If we are in the chlorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KChlorine;
		}
				// If we are in the bromine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KBromine;
		}
				// If we are in the iodine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIodine;
		}
				// If we are in the astatine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KAstatine;
		}
				// If we are in the helium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHelium;
		}
				// If we are in the neon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNeon;
		}
				// If we are in the argon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KArgon;
		}
				// If we are in the krypton box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KKrypton;
		}
				// If we are in the xenon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KXenon;
		}
				// If we are in the radon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRadon;
		}
				// If we are in the lanthanum box
		if (x == xValueOfGroupIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLanthanum;
		}
				// If we are in the cerium box
		if (x == xValueOfGroupV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KCerium;
		}
				// If we are in the praseodymium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPraseodymium;
		}
				// If we are in the neodymium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KNeodymium;
		}
				// If we are in the promethium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPromethium;
		}
				// If we are in the samarium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KSamarium;
		}
				// If we are in the europium box
		if (x == xValueOfGroupX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KEuropium;
		}
				// If we are in the gadolinium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KGadolinium;
		}
				// If we are in the terbium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KTerbium;
		}
				// If we are in the dysprosium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KDysprosium;
		}
				// If we are in the holmium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KHolmium;
		}
				// If we are in the erbium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KErbium;
		}
				// If we are in the thulium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KThulium;
		}
				// If we are in the ytterbium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KYtterbium;
		}
				// If we are in the lutetium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLutetium;
		}
				// If we are in the actinium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KActinium;
		}
				// If we are in the thorium box
		if (x == xValueOfGroupV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KThorium;
		}
				// If we are in the protactinium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KProtactinium;
		}
				// If we are in the uranium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KUranium;
		}
				// If we are in the neptunium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNeptunium;
		}
				// If we are in the plutonium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KPlutonium;
		}
				// If we are in the americium box
		if (x == xValueOfGroupX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KAmericium;
		}
				// If we are in the curium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCurium;
		}
				// If we are in the berkelium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KBerkelium;
		}
				// If we are in the californium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCalifornium;
		}
				// If we are in the einsteinium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KEinsteinium;
		}
				// If we are in the fermium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KFermium;
		}
				// If we are in the mendelevium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KMendelevium;
		}
				// If we are in the nobelium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNobelium;
		}
				// If we are in the lawrencium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KLawrencium;
		}






			// Draw the view
		CCoeControl::DrawNow();






		break;
    case EKeyRightArrow:
		x = x + xMovement;
				// In case we move from hydrogen to helium
		if ((x > xValueOfGroupI && x < xValueOfGroupXVIII) && y == yValueOfPeriodI)
		{
			x = xValueOfGroupXVIII;
		}
				// In case we move from beryllium to boron
		if ((x > xValueOfGroupII && x < xValueOfGroupXIII) && y == yValueOfPeriodII)
		{
			x = xValueOfGroupXIII;
		}
				// In case we move from magnesium to aluminium
		if ((x > xValueOfGroupII && x < xValueOfGroupXIII) && y == yValueOfPeriodIII)
		{
			x = xValueOfGroupXIII;
		}
				// In case we go to the Lanthanides from barium
		if ((x == xValueOfGroupIII) && y == yValueOfPeriodVI)
		{
			x = xValueOfGroupIV;
			y = yValueOfPeriodLanthanides;
		}
				// In case we go to the Actinides from radium
		if ((x == xValueOfGroupIII) && y == yValueOfPeriodVII)
		{
			x = xValueOfGroupIV;
			y = yValueOfPeriodActinides;
		}
				// In case the cursor goes off the table (in the I block)
		if (x > xValueOfGroupXVIII && y == yValueOfPeriodI)
		{
			x = xValueOfGroupI;
		}
				// In case the cursor goes off the table (in the II block)
		if (x > xValueOfGroupXVIII && y == yValueOfPeriodII)
		{
			x = xValueOfGroupI;
		}
				// In case the cursor goes off the table (in the III block)
		if (x > xValueOfGroupXVIII && y == yValueOfPeriodIII)
		{
			x = xValueOfGroupI;
		}
				// In case the cursor goes off the table (in the IV block)
		if (x > xValueOfGroupXVIII && y == yValueOfPeriodIV)
		{
			x = xValueOfGroupI;
		}
				// In case the cursor goes off the table (in the V block)
		if (x > xValueOfGroupXVIII && y == yValueOfPeriodV)
		{
			x = xValueOfGroupI;
		}
				// In case the cursor goes off the table (in the VI block)
		if (x > xValueOfGroupXVIII && y == yValueOfPeriodVI)
		{
			x = xValueOfGroupI;
		}
				// In case the cursor goes off the table (in the VII block)
		if (x > xValueOfGroupXI&& y == yValueOfPeriodVII)
		{
			x = xValueOfGroupXII;
			y = yValueOfPeriodVI;
		}
				// In case the cursor goes off the table (in the Lanthanides)
		if (x > xValueOfGroupXVIII && y == yValueOfPeriodLanthanides)
		{
			x = xValueOfGroupIV;
			y = yValueOfPeriodVI;
		}
				// In case the cursor goes off the table (in the Actinides)
		if (x > xValueOfGroupXVIII && y == yValueOfPeriodActinides)
		{
			x = xValueOfGroupIV;
			y = yValueOfPeriodVII;
		}




				// If we are in the hydrogen box
		if (x == xValueOfGroupI && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHydrogen;
		}
				// If we are in the lithium box
		if (x == xValueOfGroupI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KLithium;
		}
				// If we are in the sodium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSodium;
		}
				// If we are in the potassium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KPotassium;
		}
				// If we are in the rubidium box
		if (x == xValueOfGroupI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRubidium;
		}
				// If we are in the caesium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KCaesium;
		}
				// If we are in the francium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KFrancium;
		}
				// If we are in the beryllium box
		if (x == xValueOfGroupII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBeryllium;
		}
				// If we are in the magnesium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KMagnesium;
		}
				// If we are in the calcium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCalcium;
		}
				// If we are in the strontium box
		if (x == xValueOfGroupII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KStrontium;
		}
				// If we are in the barium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBarium;
		}
				// If we are in the radium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRadium;
		}
				// If we are in the scandium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KScandium;
		}
				// If we are in the yttrium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KYttrium;
		}
				// If we are in the titanium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KTitanium;
		}
				// If we are in the zirconium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KZirconium;
		}
				// If we are in the hafnium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KHafnium;
		}
				// If we are in the rutherfordium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRutherfordium;
		}
				// If we are in the vanadium box
		if (x == xValueOfGroupV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KVanadium;
		}
				// If we are in the niobium box
		if (x == xValueOfGroupV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KNiobium;
		}
				// If we are in the tantalum box
		if (x == xValueOfGroupV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTantalum;
		}
				// If we are in the dubnium box
		if (x == xValueOfGroupV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDubnium;
		}
				// If we are in the chromium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KChromium;
		}
				// If we are in the molybdenum box
		if (x == xValueOfGroupVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KMolybdenum;
		}
				// If we are in the tungsten box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTungsten;
		}
				// If we are in the seaborgium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KSeaborgium;
		}
				// If we are in the manganese box
		if (x == xValueOfGroupVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KManganese;
		}
				// If we are in the technetium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTechnetium;
		}
				// If we are in the rhenium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRhenium;
		}
				// If we are in the bohrium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KBohrium;
		}
				// If we are in the iron box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KIron;
		}
				// If we are in the ruthenium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRuthenium;
		}
				// If we are in the osmium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KOsmium;
		}
				// If we are in the hassium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KHassium;
		}
				// If we are in the cobalt box
		if (x == xValueOfGroupIX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCobalt;
		}
				// If we are in the rhodium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRhodium;
		}
				// If we are in the iridium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KIridium;
		}
				// If we are in the meitnerium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KMeitnerium;
		}
				// If we are in the nickel box
		if (x == xValueOfGroupX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KNickel;
		}
				// If we are in the palladium box
		if (x == xValueOfGroupX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KPalladium;
		}
				// If we are in the platinum box
		if (x == xValueOfGroupX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPlatinum;
		}
				// If we are in the darmstadtium box
		if (x == xValueOfGroupX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDarmstadtium;
		}
				// If we are in the copper box
		if (x == xValueOfGroupXI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCopper;
		}
				// If we are in the silver box
		if (x == xValueOfGroupXI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KSilver;
		}
				// If we are in the gold box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KGold;
		}
				// If we are in the roentgenium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRoentgenium;
		}
				// If we are in the copernicium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KCopernicium;
		}
				// If we are in the zinc box
		if (x == xValueOfGroupXII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KZinc;
		}
				// If we are in the cadmium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KCadmium;
		}
				// If we are in the mercury box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KMercury;
		}
				// If we are in the boron box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBoron;
		}
				// If we are in the aluminium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KAluminium;
		}
				// If we are in the gallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGallium;
		}
				// If we are in the indium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIndium;
		}
				// If we are in the thallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KThallium;
		}
				// If we are in the carbon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KCarbon;
		}
				// If we are in the silicon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSilicon;
		}
				// If we are in the germanium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGermanium;
		}
				// If we are in the tin box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTin;
		}
				// If we are in the lead box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KLead;
		}
				// If we are in the nitrogen box
		if (x == xValueOfGroupXV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNitrogen;
		}
				// If we are in the phosphorus box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KPhosphorus;
		}
				// If we are in the arsenic box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KArsenic;
		}
				// If we are in the antimony box
		if (x == xValueOfGroupXV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KAntimony;
		}
				// If we are in the bismuth box
		if (x == xValueOfGroupXV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBismuth;
		}
				// If we are in the oxygen box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KOxygen;
		}
				// If we are in the sulfur box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSulfur;
		}
				// If we are in the selenium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KSelenium;
		}
				// If we are in the tellurium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTellurium;
		}
				// If we are in the polonium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPolonium;
		}
				// If we are in the fluorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KFluorine;
		}
				// If we are in the chlorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KChlorine;
		}
				// If we are in the bromine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KBromine;
		}
				// If we are in the iodine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIodine;
		}
				// If we are in the astatine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KAstatine;
		}
				// If we are in the helium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHelium;
		}
				// If we are in the neon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNeon;
		}
				// If we are in the argon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KArgon;
		}
				// If we are in the krypton box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KKrypton;
		}
				// If we are in the xenon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KXenon;
		}
				// If we are in the radon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRadon;
		}
				// If we are in the lanthanum box
		if (x == xValueOfGroupIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLanthanum;
		}
				// If we are in the cerium box
		if (x == xValueOfGroupV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KCerium;
		}
				// If we are in the praseodymium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPraseodymium;
		}
				// If we are in the neodymium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KNeodymium;
		}
				// If we are in the promethium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPromethium;
		}
				// If we are in the samarium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KSamarium;
		}
				// If we are in the europium box
		if (x == xValueOfGroupX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KEuropium;
		}
				// If we are in the gadolinium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KGadolinium;
		}
				// If we are in the terbium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KTerbium;
		}
				// If we are in the dysprosium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KDysprosium;
		}
				// If we are in the holmium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KHolmium;
		}
				// If we are in the erbium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KErbium;
		}
				// If we are in the thulium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KThulium;
		}
				// If we are in the ytterbium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KYtterbium;
		}
				// If we are in the lutetium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLutetium;
		}
				// If we are in the actinium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KActinium;
		}
				// If we are in the thorium box
		if (x == xValueOfGroupV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KThorium;
		}
				// If we are in the protactinium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KProtactinium;
		}
				// If we are in the uranium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KUranium;
		}
				// If we are in the neptunium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNeptunium;
		}
				// If we are in the plutonium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KPlutonium;
		}
				// If we are in the americium box
		if (x == xValueOfGroupX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KAmericium;
		}
				// If we are in the curium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCurium;
		}
				// If we are in the berkelium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KBerkelium;
		}
				// If we are in the californium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCalifornium;
		}
				// If we are in the einsteinium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KEinsteinium;
		}
				// If we are in the fermium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KFermium;
		}
				// If we are in the mendelevium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KMendelevium;
		}
				// If we are in the nobelium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNobelium;
		}
				// If we are in the lawrencium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KLawrencium;
		}






			// Draw the view
		CCoeControl::DrawNow();



		break;
    case EKeyEnter:
				// If we press Enter in the hydrogen box
		if (x == xValueOfGroupI && y == yValueOfPeriodI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(1);
		}
				// If we press Enter in the lithium box
		if (x == xValueOfGroupI && y == yValueOfPeriodII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(2);
		}
				// If we press Enter in the sodium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(3);
		}
				// If we press Enter in the potassium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(4);
		}
				// If we press Enter in the rubidium box
		if (x == xValueOfGroupI && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(5);
		}
				// If we press Enter in the caesium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(6);
		}
				// If we press Enter in the francium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(7);
		}
				// If we press Enter in the beryllium box
		if (x == xValueOfGroupII && y == yValueOfPeriodII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(8);
		}
				// If we press Enter in the magnesium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(9);
		}
				// If we press Enter in the calcium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(10);
		}
				// If we press Enter in the strontium box
		if (x == xValueOfGroupII && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(11);
		}
				// If we press Enter in the barium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(12);
		}
				// If we press Enter in the radium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(13);
		}
				// If we press Enter in the scandium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(14);
		}
				// If we press Enter in the yttrium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(15);
		}
				// If we press Enter in the titanium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(16);
		}
				// If we press Enter in the zirconium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(17);
		}
				// If we press Enter in the hafnium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(18);
		}
				// If we press Enter in the rutherfordium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(19);
		}
				// If we press Enter in the vanadium box
		if (x == xValueOfGroupV && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(20);
		}
				// If we press Enter in the niobium box
		if (x == xValueOfGroupV && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(21);
		}
				// If we press Enter in the tantalum box
		if (x == xValueOfGroupV && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(22);
		}
				// If we press Enter in the dubnium box
		if (x == xValueOfGroupV && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(23);
		}
				// If we press Enter in the chromium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(24);
		}
				// If we press Enter in the molybdenum box
		if (x == xValueOfGroupVI && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(25);
		}
				// If we press Enter in the tungsten box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(26);
		}
				// If we press Enter in the seaborgium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(27);
		}
				// If we press Enter in the manganese box
		if (x == xValueOfGroupVII && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(28);
		}
				// If we press Enter in the technetium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(29);
		}
				// If we press Enter in the rhenium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(30);
		}
				// If we press Enter in the bohrium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(31);
		}
				// If we press Enter in the iron box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(32);
		}
				// If we press Enter in the ruthenium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(33);
		}
				// If we press Enter in the osmium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(34);
		}
				// If we press Enter in the hassium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(35);
		}
				// If we press Enter in the cobalt box
		if (x == xValueOfGroupIX && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(36);
		}
				// If we press Enter in the rhodium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(37);
		}
				// If we press Enter in the iridium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(38);
		}
				// If we press Enter in the meitnerium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(39);
		}
				// If we press Enter in the nickel box
		if (x == xValueOfGroupX && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(40);
		}
				// If we press Enter in the palladium box
		if (x == xValueOfGroupX && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(41);
		}
				// If we press Enter in the platinum box
		if (x == xValueOfGroupX && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(42);
		}
				// If we press Enter in the darmstadtium box
		if (x == xValueOfGroupX && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(43);
		}
				// If we press Enter in the copper box
		if (x == xValueOfGroupXI && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(44);
		}
				// If we press Enter in the silver box
		if (x == xValueOfGroupXI && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(45);
		}
				// If we press Enter in the gold box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(46);
		}
				// If we press Enter in the roentgenium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(47);
		}
				// If we press Enter in the copernicium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(112);
		}
				// If we press Enter in the zinc box
		if (x == xValueOfGroupXII && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(48);
		}
				// If we press Enter in the cadmium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(49);
		}
				// If we press Enter in the mercury box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(50);
		}
				// If we press Enter in the boron box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(51);
		}
				// If we press Enter in the aluminium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(52);
		}
				// If we press Enter in the gallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(53);
		}
				// If we press Enter in the indium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(54);
		}
				// If we press Enter in the thallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(55);
		}
				// If we press Enter in the carbon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(56);
		}
				// If we press Enter in the silicon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(57);
		}
				// If we press Enter in the germanium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(58);
		}
				// If we press Enter in the tin box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(59);
		}
				// If we press Enter in the lead box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(60);
		}
				// If we press Enter in the nitrogen box
		if (x == xValueOfGroupXV && y == yValueOfPeriodII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(61);
		}
				// If we press Enter in the phosphorus box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(62);
		}
				// If we press Enter in the arsenic box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(63);
		}
				// If we press Enter in the antimony box
		if (x == xValueOfGroupXV && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(64);
		}
				// If we press Enter in the bismuth box
		if (x == xValueOfGroupXV && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(65);
		}
				// If we press Enter in the oxygen box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(66);
		}
				// If we press Enter in the sulfur box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(67);
		}
				// If we press Enter in the selenium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(68);
		}
				// If we press Enter in the tellurium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(69);
		}
				// If we press Enter in the polonium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(70);
		}
				// If we press Enter in the fluorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(71);
		}
				// If we press Enter in the chlorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(72);
		}
				// If we press Enter in the bromine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(73);
		}
				// If we press Enter in the iodine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(74);
		}
				// If we press Enter in the astatine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(75);
		}
				// If we press Enter in the helium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(76);
		}
				// If we press Enter in the neon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(77);
		}
				// If we press Enter in the argon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIII)
		{
				// We launch its dialogs
			example->LaunchElementDialog(78);
		}
				// If we press Enter in the krypton box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(79);
		}
				// If we press Enter in the xenon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodV)
		{
				// We launch its dialogs
			example->LaunchElementDialog(80);
		}
				// If we press Enter in the radon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodVI)
		{
				// We launch its dialogs
			example->LaunchElementDialog(81);
		}
				// If we press Enter in the lanthanum box
		if (x == xValueOfGroupIV && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(82);
		}
				// If we press Enter in the cerium box
		if (x == xValueOfGroupV && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(83);
		}
				// If we press Enter in the praseodymium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(84);
		}
				// If we press Enter in the neodymium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(85);
		}
				// If we press Enter in the promethium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(86);
		}
				// If we press Enter in the samarium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(87);
		}
				// If we press Enter in the europium box
		if (x == xValueOfGroupX && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(88);
		}
				// If we press Enter in the gadolinium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(89);
		}
				// If we press Enter in the terbium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(90);
		}
				// If we press Enter in the dysprosium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(91);
		}
				// If we press Enter in the holmium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(92);
		}
				// If we press Enter in the erbium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(93);
		}
				// If we press Enter in the thulium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(94);
		}
				// If we press Enter in the ytterbium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(95);
		}
				// If we press Enter in the lutetium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodLanthanides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(96);
		}
				// If we press Enter in the actinium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(97);
		}
				// If we press Enter in the thorium box
		if (x == xValueOfGroupV && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(98);
		}
				// If we press Enter in the protactinium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(99);
		}
				// If we press Enter in the uranium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(100);
		}
				// If we press Enter in the neptunium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(101);
		}
				// If we press Enter in the plutonium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(102);
		}
				// If we press Enter in the americium box
		if (x == xValueOfGroupX && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(103);
		}
				// If we press Enter in the curium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(104);
		}
				// If we press Enter in the berkelium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(105);
		}
				// If we press Enter in the californium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(106);
		}
				// If we press Enter in the einsteinium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(107);
		}
				// If we press Enter in the fermium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(108);
		}
				// If we press Enter in the mendelevium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(109);
		}
				// If we press Enter in the nobelium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(110);
		}
				// If we press Enter in the lawrencium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodActinides)
		{
				// We launch its dialogs
			example->LaunchElementDialog(111);
		}
		break;
    default:
		break;
        }
			// It's not the first run of the program any more
		firstrun = 0;
			// pop from cleanup stack, and destroy, in one operation 
		CleanupStack::Pop(); 
    return(EKeyWasConsumed); 
    }

