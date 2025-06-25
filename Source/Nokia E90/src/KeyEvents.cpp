#include "PeriodictableContainer.h"

// ----------------------------------------------------
// CPeriodictableContainer::OfferKeyEventL(const 
//               TKeyEvent& aKeyEvent,TEventCode aType)
// ----------------------------------------------------
//
TKeyResponse 
CPeriodictableContainer::OfferKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType)
    {
    TInt code=aKeyEvent.iCode;
        	
    	

        
        
    TUint8 xMovement = 43;
    TUint8 yMovement = 29;
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
   _LIT(KFlerovium, "Flerovium, 114");
   _LIT(KLivermorium, "Livermorium, 116");
   
   _LIT(KDNGroup, "Diatomic nonmetal");
   _LIT(KNGGroup, "Noble gas");
   _LIT(KAMGroup, "Alkali metal");
   _LIT(KAEMGroup, "Alkaline earth metal");
   _LIT(KMGroup, "Metalloid");
   _LIT(KPNMGroup, "Polyatomic nonmetal");
   _LIT(KPTMGroup, "Post-transition metal");
   _LIT(KTMGroup, "Transition metal");
   _LIT(KLGroup, "Lanthanides");
   _LIT(KAGroup, "Actinides");
   _LIT(KUGGroup, "Unknown category");
 
   _LIT(KMMHydrogen, "M: 1.008 g/mol");
   _LIT(KMMHelium, "M: 4.0026 g/mol");
   _LIT(KMMLithium, "M: 6.94 g/mol");
   _LIT(KMMBeryllium, "M: 9.0122 g/mol");
   _LIT(KMMBoron, "M: 10.81 g/mol");
   _LIT(KMMCarbon, "M: 12.011 g/mol");
   _LIT(KMMNitrogen, "M: 14.007 g/mol");
   _LIT(KMMOxygen, "M: 15.999 g/mol");
   _LIT(KMMFluorine, "M: 18.998 g/mol");
   _LIT(KMMNeon, "M: 20.1798 g/mol");
   _LIT(KMMSodium, "M: 22.9898 g/mol");
   _LIT(KMMMagnesium, "M: 24.305 g/mol");
   _LIT(KMMAluminium, "M: 26.9815 g/mol");
   _LIT(KMMSilicon, "M: 28.085 g/mol");
   _LIT(KMMPhosphorus, "M: 30.97376 g/mol");
   _LIT(KMMSulfur, "M: 32.06 g/mol");
   _LIT(KMMChlorine, "M: 35.45 g/mol");
   _LIT(KMMArgon, "M: 39.948 g/mol");
   _LIT(KMMPotassium, "M: 39.0983 g/mol");
   _LIT(KMMCalcium, "M: 40.078 g/mol");
   _LIT(KMMScandium, "M: 44.9560 g/mol");
   _LIT(KMMTitanium, "M: 47.867 g/mol");
   _LIT(KMMVanadium, "M: 50.9415 g/mol");
   _LIT(KMMChromium, "M: 51.9962 g/mol");
   _LIT(KMMManganese, "M: 54.938 g/mol");
   _LIT(KMMIron, "M: 55.845 g/mol");
   _LIT(KMMCobalt, "M: 58.93319 g/mol");
   _LIT(KMMNickel, "M: 58.6934 g/mol");
   _LIT(KMMCopper, "M: 63.546 g/mol");
   _LIT(KMMZinc, "M: 65.38 g/mol");
   _LIT(KMMGallium, "M: 69.723 g/mol");
   _LIT(KMMGermanium, "M: 72.631 g/mol");
   _LIT(KMMArsenic, "M: 74.9216 g/mol");
   _LIT(KMMSelenium, "M: 78.972 g/mol");
   _LIT(KMMBromine, "M: 79.904 g/mol");
   _LIT(KMMKrypton, "M: 83.798 g/mol");
   _LIT(KMMRubidium, "M: 85.4678 g/mol");
   _LIT(KMMStrontium, "M: 87.62 g/mol");
   _LIT(KMMYttrium, "M: 88.90584 g/mol");
   _LIT(KMMZirconium, "M: 91.224 g/mol");
   _LIT(KMMNiobium, "M: 92.90637 g/mol");
   _LIT(KMMMolybdenum, "M: 95.95 g/mol");
   _LIT(KMMTechnetium, "M: [97] g/mol");
   _LIT(KMMRuthenium, "M: 101.07 g/mol");
   _LIT(KMMRhodium, "M: 102.9055 g/mol");
   _LIT(KMMPalladium, "M: 106.42 g/mol");
   _LIT(KMMSilver, "M: 107.868 g/mol");
   _LIT(KMMCadmium, "M: 112.414 g/mol");
   _LIT(KMMIndium, "M: 114.818 g/mol");
   _LIT(KMMTin, "M: 118.711 g/mol");
   _LIT(KMMAntimony, "M: 121.760 g/mol");
   _LIT(KMMTellurium, "M: 127.60 g/mol");
   _LIT(KMMIodine, "M: 126.90447 g/mol");
   _LIT(KMMXenon, "M: 131.294 g/mol");
   _LIT(KMMCaesium, "M: 132.9055 g/mol");
   _LIT(KMMBarium, "M: 137.328 g/mol");
   _LIT(KMMLanthanum, "M: 138.90548 g/mol");
   _LIT(KMMCerium, "M: 140.116 g/mol");
   _LIT(KMMPraseodymium, "M: 140.9077 g/mol");
   _LIT(KMMNeodymium, "M: 144.242 g/mol");
   _LIT(KMMPromethium, "M: [145] g/mol");
   _LIT(KMMSamarium, "M: 150.36 g/mol");
   _LIT(KMMEuropium, "M: 151.964 g/mol");
   _LIT(KMMGadolinium, "M: 157.25 g/mol");
   _LIT(KMMTerbium, "M: 158.9254 g/mol");
   _LIT(KMMDysprosium, "M: 162.500 g/mol");
   _LIT(KMMHolmium, "M: 164.93033 g/mol");
   _LIT(KMMErbium, "M: 167.259 g/mol");
   _LIT(KMMThulium, "M: 168.93422 g/mol");
   _LIT(KMMYtterbium, "M: 173.054 g/mol");
   _LIT(KMMLutetium, "M: 174.9668 g/mol");
   _LIT(KMMHafnium, "M: 178.49 g/mol");
   _LIT(KMMTantalum, "M: 180.9479 g/mol");
   _LIT(KMMTungsten, "M: 183.84 g/mol");
   _LIT(KMMRhenium, "M: 186.207 g/mol");
   _LIT(KMMOsmium, "M: 190.23 g/mol");
   _LIT(KMMIridium, "M: 192.217 g/mol");
   _LIT(KMMPlatinum, "M: 195.085 g/mol");
   _LIT(KMMGold, "M: 196.966569 g/mol");
   _LIT(KMMMercury, "M: 200.592 g/mol");
   _LIT(KMMThallium, "M: 204.38 g/mol");
   _LIT(KMMLead, "M: 207.2 g/mol");
   _LIT(KMMBismuth, "M: 208.98040 g/mol");
   _LIT(KMMPolonium, "M: [209] g/mol");
   _LIT(KMMAstatine, "M: [210] g/mol");
   _LIT(KMMRadon, "M: [222] g/mol");
   _LIT(KMMFrancium, "M: [223] g/mol");
   _LIT(KMMRadium, "M: [226] g/mol");
   _LIT(KMMActinium, "M: [227] g/mol");
   _LIT(KMMThorium, "M: 232.0377 g/mol");
   _LIT(KMMProtactinium, "M: 231.0359 g/mol");
   _LIT(KMMUranium, "M: 238.02891 g/mol");
   _LIT(KMMNeptunium, "M: [237] g/mol");
   _LIT(KMMPlutonium, "M: [244] g/mol");
   _LIT(KMMAmericium, "M: [243] g/mol");
   _LIT(KMMCurium, "M: [247] g/mol");
   _LIT(KMMBerkelium, "M: [247] g/mol");
   _LIT(KMMCalifornium, "M: [251] g/mol");
   _LIT(KMMEinsteinium, "M: [252] g/mol");
   _LIT(KMMFermium, "M: [257] g/mol");
   _LIT(KMMMendelevium, "M: [258] g/mol");
   _LIT(KMMNobelium, "M: [259] g/mol");
   _LIT(KMMLawrencium, "M: [262] g/mol");
   _LIT(KMMRutherfordium, "M: [267] g/mol");
   _LIT(KMMDubnium, "M: [270] g/mol");
   _LIT(KMMSeaborgium, "M: [271] g/mol");
   _LIT(KMMBohrium, "M: [270] g/mol");
   _LIT(KMMHassium, "M: [277] g/mol");
   _LIT(KMMMeitnerium, "M: [276] g/mol");
   _LIT(KMMDarmstadtium, "M: [281] g/mol");
   _LIT(KMMRoentgenium, "M: [282] g/mol");
   _LIT(KMMCopernicium, "M: [285] g/mol");
   _LIT(KMMFlerovium, "M: [289] g/mol");
   _LIT(KMMLivermorium, "M: [293] g/mol");

   // If first run is false
   if (firstrun == 0)
	   {
	  // five-way navigation middle button handler
	   if ( aKeyEvent.iScanCode == EStdKeyDevice3)
	       {
		   
					BasicBrowserControlL(x, y);
					return EKeyWasConsumed;
	       }
	   }

   
     switch (code) 
            { 
     	   
    	   
    	 case EKeyLineFeed:
    	 case EKeyEnter:
    	{
        if (iBrCtlInterface == NULL)
        {
		BasicBrowserControlL(x, y);
        }
		break;
    	}

	case EKeyBackspace:
        {
        if (iBrCtlInterface != NULL)
            {
            iBrCtlInterface = NULL;
            DrawNow();
            }
        break;
        }
        
   case EKeyDownArrow:
         if (iBrCtlInterface == NULL)
            {
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
		if (x == xValueOfGroupXII && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
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
		if (x == xValueOfGroupXIV && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
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
		if (x == xValueOfGroupXVI && (y > yValueOfPeriodVII && y < yValueOfPeriodLanthanides))
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
	}


		break;
    case EKeyUpArrow:
        if (iBrCtlInterface == NULL)
            {
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
		if (x == xValueOfGroupXII && (y < yValueOfPeriodLanthanides && y > 190))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth X group)
		if (x == xValueOfGroupXIII && (y < yValueOfPeriodLanthanides && y > 190))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth XI group)
		if (x == xValueOfGroupXIV && (y < yValueOfPeriodLanthanides && y > 190))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth XII group)
		if (x == xValueOfGroupXV && (y < yValueOfPeriodLanthanides && y > 190))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth XIII group)
		if (x == xValueOfGroupXVI && (y < yValueOfPeriodLanthanides && y > 190))
		{
			y = yValueOfPeriodVII;
		}
			// In case the cursor goes off the table (in the Lanth XIV group)
		if (x == xValueOfGroupXVII && (y < yValueOfPeriodLanthanides && y > 190))
		{
			y = yValueOfPeriodVI;
		}
			// In case the cursor goes off the table (in the Lanth XV group)
		if (x == xValueOfGroupXVIII && (y < yValueOfPeriodLanthanides && y > 190))
		{
			y = yValueOfPeriodVI;
		}
	}


		break;
    case EKeyLeftArrow:
        if (iBrCtlInterface == NULL)
            {
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
				// It lands on Lv
			x = xValueOfGroupXVI;
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
				// In case the cursor goes from Lv to Fl
		if (x == xValueOfGroupXVI-xMovement && y == yValueOfPeriodVII)
		{
				// It lands on Lv
			x = xValueOfGroupXIV;
		}
				// In case the cursor goes from Fl to Cn
		if (x == xValueOfGroupXIV-xMovement && y == yValueOfPeriodVII)
		{
				// It lands on Lv
			x = xValueOfGroupXII;
		}
	}


		break;
    case EKeyRightArrow:
        if (iBrCtlInterface == NULL)
            {
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
				// In case the cursor goes off the table (from Cn to Fl)
		if (x == xValueOfGroupXII+xMovement && y == yValueOfPeriodVII)
		{
			x = xValueOfGroupXIV;
		}
		
				// In case the cursor goes off the table (from Fl to Lv)
		if (x == xValueOfGroupXIV+xMovement && y == yValueOfPeriodVII)
		{
			x = xValueOfGroupXVI;
		}
		
				// In case the cursor goes off the table (from Lv to right)
		if (x > xValueOfGroupXVI && y == yValueOfPeriodVII)
		{
			x = xValueOfGroupI;
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
	}


		break;
    default:
		break;
        }
  

				// If we are in the hydrogen box
		if (x == xValueOfGroupI && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHydrogen;
			*iGroupText =  KDNGroup;
			*iMMText =  KMMHydrogen;
		}
				// If we are in the lithium box
		if (x == xValueOfGroupI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KLithium;
			*iGroupText =  KAMGroup;
			*iMMText =  KMMLithium;
		}
				// If we are in the sodium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSodium;
			*iGroupText =  KAMGroup;
			*iMMText =  KMMSodium;
		}
				// If we are in the potassium box
		if (x == xValueOfGroupI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KPotassium;
			*iGroupText =  KAMGroup;
			*iMMText =  KMMPotassium;
		}
				// If we are in the rubidium box
		if (x == xValueOfGroupI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRubidium;
			*iGroupText =  KAMGroup;
			*iMMText =  KMMRubidium;
		}
				// If we are in the caesium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KCaesium;
			*iGroupText =  KAMGroup;
			*iMMText =  KMMCaesium;
		}
				// If we are in the francium box
		if (x == xValueOfGroupI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KFrancium;
			*iGroupText =  KAMGroup;
			*iMMText =  KMMFrancium;
		}
				// If we are in the beryllium box
		if (x == xValueOfGroupII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBeryllium;
			*iGroupText =  KAEMGroup;
			*iMMText =  KMMBeryllium;
		}
				// If we are in the magnesium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KMagnesium;
			*iGroupText =  KAEMGroup;
			*iMMText =  KMMMagnesium;
		}
				// If we are in the calcium box
		if (x == xValueOfGroupII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCalcium;
			*iGroupText =  KAEMGroup;
			*iMMText =  KMMCalcium;
		}
				// If we are in the strontium box
		if (x == xValueOfGroupII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KStrontium;
			*iGroupText =  KAEMGroup;
			*iMMText =  KMMStrontium;
		}
				// If we are in the barium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBarium;
			*iGroupText =  KAEMGroup;
			*iMMText =  KMMBarium;
		}
				// If we are in the radium box
		if (x == xValueOfGroupII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRadium;
			*iGroupText =  KAEMGroup;
			*iMMText =  KMMRadium;
		}
				// If we are in the scandium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KScandium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMScandium;
		}
				// If we are in the yttrium box
		if (x == xValueOfGroupIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KYttrium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMYttrium;
		}
				// If we are in the titanium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KTitanium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMTitanium;
		}
				// If we are in the zirconium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KZirconium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMZirconium;
		}
				// If we are in the hafnium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KHafnium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMHafnium;
		}
				// If we are in the rutherfordium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRutherfordium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMRutherfordium;
		}
				// If we are in the vanadium box
		if (x == xValueOfGroupV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KVanadium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMVanadium;
		}
				// If we are in the niobium box
		if (x == xValueOfGroupV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KNiobium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMNiobium;
		}
				// If we are in the tantalum box
		if (x == xValueOfGroupV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTantalum;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMTantalum;
		}
				// If we are in the dubnium box
		if (x == xValueOfGroupV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDubnium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMDubnium;
		}
				// If we are in the chromium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KChromium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMChromium;
		}
				// If we are in the molybdenum box
		if (x == xValueOfGroupVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KMolybdenum;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMMolybdenum;
		}
				// If we are in the tungsten box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KTungsten;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMTungsten;
		}
				// If we are in the seaborgium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KSeaborgium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMSeaborgium;
		}
				// If we are in the manganese box
		if (x == xValueOfGroupVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KManganese;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMManganese;
		}
				// If we are in the technetium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTechnetium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMTechnetium;
		}
				// If we are in the rhenium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRhenium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMRhenium;
		}
				// If we are in the bohrium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KBohrium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMBohrium;
		}
				// If we are in the iron box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KIron;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMIron;
		}
				// If we are in the ruthenium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRuthenium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMRuthenium;
		}
				// If we are in the osmium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KOsmium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMOsmium;
		}
				// If we are in the hassium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KHassium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMHassium;
		}
				// If we are in the cobalt box
		if (x == xValueOfGroupIX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCobalt;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMCobalt;
		}
				// If we are in the rhodium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KRhodium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMRhodium;
		}
				// If we are in the iridium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KIridium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMIridium;
		}
				// If we are in the meitnerium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KMeitnerium;
			*iGroupText =  KUGGroup;
			*iMMText =  KMMMeitnerium;
		}
				// If we are in the nickel box
		if (x == xValueOfGroupX && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KNickel;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMNickel;
		}
				// If we are in the palladium box
		if (x == xValueOfGroupX && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KPalladium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMPalladium;
		}
				// If we are in the platinum box
		if (x == xValueOfGroupX && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPlatinum;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMPlatinum;
		}
				// If we are in the darmstadtium box
		if (x == xValueOfGroupX && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KDarmstadtium;
			*iGroupText =  KUGGroup;
			*iMMText =  KMMDarmstadtium;
		}
				// If we are in the copper box
		if (x == xValueOfGroupXI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KCopper;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMCopper;
		}
				// If we are in the silver box
		if (x == xValueOfGroupXI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KSilver;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMSilver;
		}
				// If we are in the gold box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KGold;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMGold;
		}
				// If we are in the roentgenium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KRoentgenium;
			*iGroupText =  KUGGroup;
			*iMMText =  KMMRoentgenium;
		}
				// If we are in the zinc box
		if (x == xValueOfGroupXII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KZinc;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMZinc;
		}
				// If we are in the cadmium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KCadmium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMCadmium;
		}
				// If we are in the mercury box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KMercury;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMMercury;
		}
		// If we are in the copernicium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodVII)
		{
			// We show its name and number
			*iExampleText =  KCopernicium;
			*iGroupText =  KTMGroup;
			*iMMText =  KMMCopernicium;
		}
				// If we are in the boron box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KBoron;
			*iGroupText =  KMGroup;
			*iMMText =  KMMBoron;
		}
				// If we are in the aluminium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KAluminium;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMAluminium;
		}
				// If we are in the gallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGallium;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMGallium;
		}
				// If we are in the indium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIndium;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMIndium;
		}
				// If we are in the thallium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KThallium;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMThallium;
		}
				// If we are in the carbon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KCarbon;
			*iGroupText =  KPNMGroup;
			*iMMText =  KMMCarbon;
		}
				// If we are in the silicon box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSilicon;
			*iGroupText =  KMGroup;
			*iMMText =  KMMSilicon;
		}
				// If we are in the germanium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KGermanium;
			*iGroupText =  KMGroup;
			*iMMText =  KMMGermanium;
		}
				// If we are in the tin box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTin;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMTin;
		}
				// If we are in the lead box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KLead;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMLead;
		}
				// If we are in the flerovium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KFlerovium;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMFlerovium;
		}
				// If we are in the nitrogen box
		if (x == xValueOfGroupXV && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNitrogen;
			*iGroupText =  KDNGroup;
			*iMMText =  KMMNitrogen;
		}
				// If we are in the phosphorus box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KPhosphorus;
			*iGroupText =  KPNMGroup;
			*iMMText =  KMMPhosphorus;
		}
				// If we are in the arsenic box
		if (x == xValueOfGroupXV && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KArsenic;
			*iGroupText =  KMGroup;
			*iMMText =  KMMArsenic;
		}
				// If we are in the antimony box
		if (x == xValueOfGroupXV && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KAntimony;
			*iGroupText =  KMGroup;
			*iMMText =  KMMAntimony;
		}
				// If we are in the bismuth box
		if (x == xValueOfGroupXV && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KBismuth;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMBismuth;
		}
				// If we are in the oxygen box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KOxygen;
			*iGroupText =  KDNGroup;
			*iMMText =  KMMOxygen;
		}
				// If we are in the sulfur box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KSulfur;
			*iGroupText =  KPNMGroup;
			*iMMText =  KMMSulfur;
		}
				// If we are in the selenium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KSelenium;
			*iGroupText =  KPNMGroup;
			*iMMText =  KMMSelenium;
		}
				// If we are in the tellurium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KTellurium;
			*iGroupText =  KMGroup;
			*iMMText =  KMMTellurium;
		}
				// If we are in the polonium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KPolonium;
			*iGroupText =  KPTMGroup;
			*iMMText =  KMMPolonium;
		}
				// If we are in the fluorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KFluorine;
			*iGroupText =  KDNGroup;
			*iMMText =  KMMFluorine;
		}
				// If we are in the chlorine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KChlorine;
			*iGroupText =  KDNGroup;
			*iMMText =  KMMChlorine;
		}
				// If we are in the bromine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KBromine;
			*iGroupText =  KDNGroup;
			*iMMText =  KMMBromine;
		}
				// If we are in the iodine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KIodine;
			*iGroupText =  KDNGroup;
			*iMMText =  KMMIodine;
		}
				// If we are in the astatine box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KAstatine;
			*iGroupText =  KMGroup;
			*iMMText =  KMMAstatine;
		}
				// If we are in the helium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodI)
		{
				// We show its name and number
			*iExampleText =  KHelium;
			*iGroupText =  KNGGroup;
			*iMMText =  KMMHelium;
		}
				// If we are in the neon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodII)
		{
				// We show its name and number
			*iExampleText =  KNeon;
			*iGroupText =  KNGGroup;
			*iMMText =  KMMNeon;
		}
				// If we are in the argon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIII)
		{
				// We show its name and number
			*iExampleText =  KArgon;
			*iGroupText =  KNGGroup;
			*iMMText =  KMMArgon;
		}
				// If we are in the krypton box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodIV)
		{
				// We show its name and number
			*iExampleText =  KKrypton;
			*iGroupText =  KNGGroup;
			*iMMText =  KMMKrypton;
		}
				// If we are in the xenon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodV)
		{
				// We show its name and number
			*iExampleText =  KXenon;
			*iGroupText =  KNGGroup;
			*iMMText =  KMMXenon;
		}
				// If we are in the radon box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodVI)
		{
				// We show its name and number
			*iExampleText =  KRadon;
			*iGroupText =  KNGGroup;
			*iMMText =  KMMRadon;
		}
				// If we are in the lanthanum box
		if (x == xValueOfGroupIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLanthanum;
			*iGroupText =  KLGroup;
			*iMMText =  KMMLanthanum;
		}
				// If we are in the cerium box
		if (x == xValueOfGroupV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KCerium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMCerium;
		}
				// If we are in the praseodymium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPraseodymium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMPraseodymium;
		}
				// If we are in the neodymium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KNeodymium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMNeodymium;
		}
				// If we are in the promethium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KPromethium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMPromethium;
		}
				// If we are in the samarium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KSamarium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMSamarium;
		}
				// If we are in the europium box
		if (x == xValueOfGroupX && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KEuropium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMEuropium;
		}
				// If we are in the gadolinium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KGadolinium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMGadolinium;
		}
				// If we are in the terbium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KTerbium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMTerbium;
		}
				// If we are in the dysprosium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KDysprosium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMDysprosium;
		}
				// If we are in the holmium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KHolmium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMHolmium;
		}
				// If we are in the erbium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KErbium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMErbium;
		}
				// If we are in the thulium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KThulium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMThulium;
		}
				// If we are in the ytterbium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KYtterbium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMYtterbium;
		}
				// If we are in the lutetium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodLanthanides)
		{
				// We show its name and number
			*iExampleText =  KLutetium;
			*iGroupText =  KLGroup;
			*iMMText =  KMMLutetium;
		}
				// If we are in the actinium box
		if (x == xValueOfGroupIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KActinium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMActinium;
		}
				// If we are in the thorium box
		if (x == xValueOfGroupV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KThorium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMThorium;
		}
				// If we are in the protactinium box
		if (x == xValueOfGroupVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KProtactinium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMProtactinium;
		}
				// If we are in the uranium box
		if (x == xValueOfGroupVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KUranium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMUranium;
		}
				// If we are in the neptunium box
		if (x == xValueOfGroupVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNeptunium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMNeptunium;
		}
				// If we are in the plutonium box
		if (x == xValueOfGroupIX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KPlutonium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMPlutonium;
		}
				// If we are in the americium box
		if (x == xValueOfGroupX && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KAmericium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMAmericium;
		}
				// If we are in the curium box
		if (x == xValueOfGroupXI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCurium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMCurium;
		}
				// If we are in the berkelium box
		if (x == xValueOfGroupXII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KBerkelium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMBerkelium;
		}
				// If we are in the californium box
		if (x == xValueOfGroupXIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KCalifornium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMCalifornium;
		}
				// If we are in the einsteinium box
		if (x == xValueOfGroupXIV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KEinsteinium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMEinsteinium;
		}
				// If we are in the fermium box
		if (x == xValueOfGroupXV && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KFermium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMFermium;
		}
				// If we are in the mendelevium box
		if (x == xValueOfGroupXVI && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KMendelevium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMMendelevium;
		}
				// If we are in the nobelium box
		if (x == xValueOfGroupXVII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KNobelium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMNobelium;
		}
				// If we are in the lawrencium box
		if (x == xValueOfGroupXVIII && y == yValueOfPeriodActinides)
		{
				// We show its name and number
			*iExampleText =  KLawrencium;
			*iGroupText =  KAGroup;
			*iMMText =  KMMLawrencium;
		}
		if (x == xValueOfGroupXVI && y == yValueOfPeriodVII)
		{
				// We show its name and number
			*iExampleText =  KLivermorium;
			*iGroupText =  KUGGroup;
			*iMMText =  KMMLivermorium;
		}


			// Draw the view
		DrawNow();



	if (iBrCtlInterface)
        {
        return iBrCtlInterface->OfferKeyEventL(aKeyEvent, aType);
        } 

	firstrun = 0;

	
    return EKeyWasConsumed;
    }
