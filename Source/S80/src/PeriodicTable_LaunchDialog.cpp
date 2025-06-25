#include "PeriodicTable.h"




void CExampleAppView::LaunchElementDialog(TInt aElement)
{
	
	
	// UI environment
	CEikonEnv* eikonEnv=CEikonEnv::Static();

			 // Name of multi bit map file containing the
	         // bitmap to be used as the icon.
/*	_LIT(KBitMapFile_z,"Z:\\system\\apps\\PeriodicTable\\element.mbm");
	_LIT(KBitMapFile_c,"C:\\system\\apps\\PeriodicTable\\element.mbm");
	_LIT(KBitMapFile_d,"D:\\system\\apps\\PeriodicTable\\element.mbm");

	
			 // Create bitmap and push object onto cleanup stack until we have 
	         // safely created the Graphics Utility Icon object (CGulIcon).
	         // Ownership of the bitmap is passed to the CGulICon object.
			 //
	         // (NB The bitmap originates in ckon.mbm)
	CFbsBitmap* bitmap;
	TRAPD(err, bitmap = eikonEnv->CreateBitmapL(KBitMapFile_c,0));
	if (err)
	{
		TRAP(err, bitmap = eikonEnv->CreateBitmapL(KBitMapFile_d,0));
		if (err)
		{
			bitmap = eikonEnv->CreateBitmapL(KBitMapFile_z,0);
		}
	}
	CleanupStack::PushL(bitmap);
    CGulIcon* icon = CGulIcon::NewL(bitmap);
	CleanupStack::Pop();

			 // We retain ownership of the CGulICon object, so we
	         // are responsible for destroying it later.
	CleanupStack::PushL(icon);
	*/

			// Initialise the resources
	HBufC* general_title = eikonEnv->AllocReadResourceLC(R_GENERAL_TITLE);
	HBufC* physical_title = eikonEnv->AllocReadResourceLC(R_PHYSICAL_TITLE);
	HBufC* atomic_title = eikonEnv->AllocReadResourceLC(R_ATOMIC_TITLE);
	HBufC* name_title = eikonEnv->AllocReadResourceLC(R_NAME_TITLE);
	HBufC* other_title = eikonEnv->AllocReadResourceLC(R_OTHER_TITLE);
	HBufC* general;
	HBufC* physical;
	HBufC* atomic;
	HBufC* name;
	HBufC* other;
	HBufC* other2;
	HBufC* other3;
	HBufC* other4;
	HBufC* other5;
	HBufC* other6;

			// If we're in the first group
	if (aElement >= 1 && aElement <= 7)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group1.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group1.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group1.rsc" ));
			}
		}
			// Hydrogen
		if (aElement == 1)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_HYDROGEN_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_HYDROGEN_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_HYDROGEN_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_HYDROGEN_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_HYDROGEN_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Lithium
		else
		if (aElement == 2)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_LITHIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_LITHIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_LITHIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_LITHIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_LITHIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Sodium
		else
		if (aElement == 3)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_SODIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_SODIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_SODIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_SODIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_SODIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Potassium
		else
		if (aElement == 4)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_POTASSIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_POTASSIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_POTASSIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_POTASSIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_POTASSIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Rubidium
		else
		if (aElement == 5)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_RUBIDIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_RUBIDIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_RUBIDIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_RUBIDIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_RUBIDIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Caesium
		else
		if (aElement == 6)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CAESIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CAESIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CAESIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CAESIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CAESIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_CAESIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Francium
		else
		if (aElement == 7)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_FRANCIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_FRANCIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_FRANCIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_FRANCIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_FRANCIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_FRANCIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x2aec7000);
	}

			// If we're in the second group
	else
	if (aElement >= 8 && aElement <= 13)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group2.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group2.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group2.rsc" ));
			}
		}
			// Beryllium
		if (aElement == 8)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_BERYLLIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_BERYLLIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_BERYLLIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_BERYLLIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_BERYLLIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_BERYLLIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Magnesium
		else
		if (aElement == 9)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_MAGNESIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_MAGNESIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_MAGNESIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_MAGNESIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_MAGNESIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_MAGNESIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Calcium
		else
		if (aElement == 10)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CALCIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CALCIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CALCIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CALCIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CALCIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_CALCIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Strontium
		else
		if (aElement == 11)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_STRONTIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_STRONTIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_STRONTIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_STRONTIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_STRONTIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_STRONTIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Barium
		else
		if (aElement == 12)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_BARIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_BARIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_BARIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_BARIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_BARIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_BARIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Radium
		else
		if (aElement == 13)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_RADIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_RADIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_RADIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_RADIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_RADIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_RADIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0xaa02000);
	}


			// If we're in the third group
	else
	if (aElement >= 14 && aElement <= 15)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group3.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group3.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group3.rsc" ));
			}
		}
			// Scandium
		if (aElement == 14)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_SCANDIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_SCANDIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_SCANDIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_SCANDIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_SCANDIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_SCANDIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Yttrium
		else
		if (aElement == 15)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_YTTRIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_YTTRIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_YTTRIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_YTTRIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_YTTRIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_YTTRIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x5bd8d000);
	}


			// If we're in the fourth group
	else
	if (aElement >= 16 && aElement <= 19)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group4.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group4.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group4.rsc" ));
			}
		}
			// Titanium
		if (aElement == 16)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_TITANIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_TITANIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_TITANIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_TITANIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_TITANIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_TITANIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Zirconium
		else
		if (aElement == 17)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ZIRCONIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ZIRCONIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ZIRCONIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ZIRCONIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ZIRCONIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ZIRCONIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Hafnium
		else
		if (aElement == 18)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_HAFNIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_HAFNIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_HAFNIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_HAFNIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_HAFNIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_HAFNIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Rutherfordium
		else
		if (aElement == 19)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_RUTHERFORDIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_RUTHERFORDIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_RUTHERFORDIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_RUTHERFORDIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_RUTHERFORDIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_RUTHERFORDIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x61d7a000);
	}


			// If we're in the fifth group
	else
	if (aElement >= 20 && aElement <= 23)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group5.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group5.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group5.rsc" ));
			}
		}
			// Vanadium
		if (aElement == 20)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_VANADIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_VANADIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_VANADIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_VANADIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_VANADIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_VANADIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Niobium
		else
		if (aElement == 21)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_NIOBIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_NIOBIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_NIOBIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_NIOBIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_NIOBIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NIOBIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Tantalum
		else
		if (aElement == 22)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_TANTALUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_TANTALUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_TANTALUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_TANTALUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_TANTALUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_TANTALUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Dubnium
		else
		if (aElement == 23)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_DUBNIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_DUBNIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_DUBNIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_DUBNIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_DUBNIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_DUBNIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x69fd6000);
	}


			// If we're in the sixth group
	else
	if (aElement >= 24 && aElement <= 27)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group6.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group6.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group6.rsc" ));
			}
		}
			// Chromium
		if (aElement == 24)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CHROMIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CHROMIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CHROMIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CHROMIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CHROMIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Molybdenum
		else
		if (aElement == 25)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_MOLYBDENUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_MOLYBDENUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_MOLYBDENUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_MOLYBDENUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_MOLYBDENUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_MOLYBDENUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Tungsten
		else
		if (aElement == 26)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_TUNGSTEN_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_TUNGSTEN_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_TUNGSTEN_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_TUNGSTEN_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_TUNGSTEN_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_TUNGSTEN_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Seaborgium
		else
		if (aElement == 27)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_SEABORGIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_SEABORGIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_SEABORGIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_SEABORGIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_SEABORGIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0xff66000);
	}




			// If we're in the seventh group
	else
	if (aElement >= 28 && aElement <= 31)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group7.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group7.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group7.rsc" ));
			}
		}
			// Manganese
		if (aElement == 28)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_MANGANESE_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_MANGANESE_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_MANGANESE_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_MANGANESE_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_MANGANESE_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_MANGANESE_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Technetium
		else
		if (aElement == 29)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_TECHNETIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_TECHNETIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_TECHNETIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_TECHNETIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_TECHNETIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_TECHNETIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_TECHNETIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Rhenium
		else
		if (aElement == 30)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_RHENIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_RHENIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_RHENIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_RHENIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_RHENIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_RHENIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Bohrium
		else
		if (aElement == 31)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_BOHRIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_BOHRIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_BOHRIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_BOHRIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_BOHRIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x3ebe1000);
	}






			// If we're in the eighth group
	else
	if (aElement >= 32 && aElement <= 35)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group8.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group8.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group8.rsc" ));
			}
		}
			// Iron
		if (aElement == 32)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_IRON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_IRON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_IRON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_IRON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_IRON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_IRON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Ruthenium
		else
		if (aElement == 33)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_RUTHENIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_RUTHENIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_RUTHENIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_RUTHENIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_RUTHENIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Osmium
		else
		if (aElement == 34)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_OSMIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_OSMIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_OSMIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_OSMIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_OSMIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_OSMIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Hassium
		else
		if (aElement == 35)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_HASSIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_HASSIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_HASSIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_HASSIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_HASSIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x2e8e0000);
	}


			// If we're in the ninth group
	else
	if (aElement >= 36 && aElement <= 39)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group9.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group9.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group9.rsc" ));
			}
		}
			// Cobalt
		if (aElement == 36)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_COBALT_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_COBALT_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_COBALT_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_COBALT_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_COBALT_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_COBALT_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_COBALT_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Rhodium
		else
		if (aElement == 37)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_RHODIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_RHODIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_RHODIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_RHODIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_RHODIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_RHODIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Iridium
		else
		if (aElement == 38)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_IRIDIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_IRIDIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_IRIDIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_IRIDIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_IRIDIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_IRIDIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_IRIDIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Meitnerium
		else
		if (aElement == 39)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_MEITNERIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_MEITNERIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_MEITNERIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_MEITNERIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_MEITNERIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_MEITNERIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x11197000);
	}



			// If we're in the tenth group
	else
	if (aElement >= 40 && aElement <= 43)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group10.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group10.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group10.rsc" ));
			}
		}
			// Nickel
		if (aElement == 40)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_NICKEL_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_NICKEL_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_NICKEL_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_NICKEL_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_NICKEL_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NICKEL_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NICKEL_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Palladium
		else
		if (aElement == 41)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_PALLADIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Platinum
		else
		if (aElement == 42)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_PLATINUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_PLATINUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_PLATINUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_PLATINUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_PLATINUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_PLATINUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Darmstadtium
		else
		if (aElement == 43)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_DARMSTADTIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_DARMSTADTIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_DARMSTADTIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_DARMSTADTIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_DARMSTADTIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x44e67000);
	}




			// If we're in the eleventh group
	else
	if (aElement >= 44 && aElement <= 47)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group11.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group11.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group11.rsc" ));
			}
		}
			// Copper
		if (aElement == 44)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_COPPER_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_COPPER_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_COPPER_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_COPPER_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_COPPER_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_COPPER_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_COPPER_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Silver
		else
		if (aElement == 45)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_SILVER_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_SILVER_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_SILVER_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_SILVER_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_SILVER_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_SILVER_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_SILVER_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_SILVER_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Gold
		else
		if (aElement == 46)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_GOLD_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_GOLD_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_GOLD_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_GOLD_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_GOLD_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_GOLD_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_GOLD_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Roentgenium
		else
		if (aElement == 47)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ROENTGENIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ROENTGENIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ROENTGENIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ROENTGENIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ROENTGENIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ROENTGENIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ROENTGENIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Copernicium
		else
		if (aElement == 112)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_COPERNICIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_COPERNICIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_COPERNICIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_COPERNICIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_COPERNICIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_COPERNICIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_COPERNICIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x11320000);
	}


			// If we're in the twelfth group
	else
	if (aElement >= 48 && aElement <= 50)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group12.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group12.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group12.rsc" ));
			}
		}
			// Zinc
		if (aElement == 48)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ZINC_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ZINC_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ZINC_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ZINC_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ZINC_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ZINC_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ZINC_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_ZINC_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Cadmium
		else
		if (aElement == 49)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CADMIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CADMIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CADMIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CADMIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CADMIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_CADMIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_CADMIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Mercury
		else
		if (aElement == 50)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_MERCURY_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_MERCURY_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_MERCURY_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_MERCURY_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_MERCURY_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_MERCURY_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_MERCURY_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_MERCURY_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_MERCURY_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x7ea2c000);
	}


			// If we're in the thirteenth group
	else
	if (aElement >= 51 && aElement <= 55)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group13.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group13.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group13.rsc" ));
			}
		}
			// Boron
		if (aElement == 51)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_BORON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_BORON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_BORON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_BORON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_BORON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_BORON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_BORON_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_BORON_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Aluminium
		else
		if (aElement == 52)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ALUMINIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ALUMINIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ALUMINIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ALUMINIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ALUMINIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ALUMINIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ALUMINIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_ALUMINIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Gallium
		else
		if (aElement == 53)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_GALLIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_GALLIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_GALLIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_GALLIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_GALLIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_GALLIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_GALLIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_GALLIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Indium
		else
		if (aElement == 54)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_INDIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_INDIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_INDIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_INDIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_INDIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_INDIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_INDIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Thallium
		else
		if (aElement == 55)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_THALLIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_THALLIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_THALLIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_THALLIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_THALLIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_THALLIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_THALLIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0xc672000);
	}





			// If we're in the fourteenth group
	else
	if (aElement >= 56 && aElement <= 60)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group14.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group14.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group14.rsc" ));
			}
		}
			// Carbon
		if (aElement == 56)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CARBON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CARBON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CARBON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CARBON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CARBON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_CARBON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_CARBON_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_CARBON_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Silicon
		else
		if (aElement == 57)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_SILICON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_SILICON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_SILICON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_SILICON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_SILICON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_SILICON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_SILICON_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Germanium
		else
		if (aElement == 58)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_GERMANIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_GERMANIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_GERMANIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_GERMANIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_GERMANIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_GERMANIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_GERMANIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_GERMANIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Tin
		else
		if (aElement == 59)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_TIN_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_TIN_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_TIN_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_TIN_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_TIN_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_TIN_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_TIN_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_TIN_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_TIN_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Lead
		else
		if (aElement == 60)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_LEAD_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_LEAD_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_LEAD_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_LEAD_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_LEAD_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_LEAD_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_LEAD_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_LEAD_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0xeb6a000);
	}





			// If we're in the fifteenth group
	else
	if (aElement >= 61 && aElement <= 65)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group15.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group15.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group15.rsc" ));
			}
		}
			// Nitrogen
		if (aElement == 61)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_NITROGEN_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_NITROGEN_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_NITROGEN_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_NITROGEN_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_NITROGEN_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NITROGEN_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NITROGEN_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NITROGEN_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Phosphorus
		else
		if (aElement == 62)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_PHOSPHORUS_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_PHOSPHORUS_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_PHOSPHORUS_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_PHOSPHORUS_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_PHOSPHORUS_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_PHOSPHORUS_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_PHOSPHORUS_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_PHOSPHORUS_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Arsenic
		else
		if (aElement == 63)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ARSENIC_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ARSENIC_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ARSENIC_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ARSENIC_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ARSENIC_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ARSENIC_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ARSENIC_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Antimony
		else
		if (aElement == 64)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ANTIMONY_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ANTIMONY_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ANTIMONY_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ANTIMONY_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ANTIMONY_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ANTIMONY_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ANTIMONY_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Bismuth
		else
		if (aElement == 65)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_BISMUTH_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_BISMUTH_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_BISMUTH_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_BISMUTH_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_BISMUTH_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_BISMUTH_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_BISMUTH_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_BISMUTH_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_BISMUTH_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x45039000);
	}





			// If we're in the sixteenth group
	else
	if (aElement >= 66 && aElement <= 70)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group16.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group16.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group16.rsc" ));
			}
		}
			// Oxygen
		if (aElement == 66)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_OXYGEN_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_OXYGEN_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_OXYGEN_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_OXYGEN_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_OXYGEN_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_OXYGEN_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_OXYGEN_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_OXYGEN_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_OXYGEN_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_OXYGEN_OTHER6);
		}
				// Sulfur
		else
		if (aElement == 67)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_SULFUR_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_SULFUR_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_SULFUR_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_SULFUR_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_SULFUR_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_SULFUR_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_SULFUR_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_SULFUR_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Selenium
		else
		if (aElement == 68)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_SELENIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_SELENIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_SELENIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_SELENIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_SELENIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_SELENIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_SELENIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_SELENIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Tellurium
		else
		if (aElement == 69)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_TELLURIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_TELLURIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_TELLURIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_TELLURIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_TELLURIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_TELLURIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_TELLURIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Polonium
		else
		if (aElement == 70)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_POLONIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_POLONIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_POLONIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_POLONIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_POLONIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_POLONIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_POLONIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_POLONIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x4c84f000);
	}





			// If we're in the seventeenth group
	else
	if (aElement >= 71 && aElement <= 75)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group17.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group17.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group17.rsc" ));
			}
		}
			// Fluorine
		if (aElement == 71)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_FLUORINE_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_FLUORINE_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_FLUORINE_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_FLUORINE_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_FLUORINE_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_FLUORINE_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_FLUORINE_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Chlorine
		else
		if (aElement == 72)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CHLORINE_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CHLORINE_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CHLORINE_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CHLORINE_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CHLORINE_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_CHLORINE_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_CHLORINE_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Bromine
		else
		if (aElement == 73)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_BROMINE_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_BROMINE_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_BROMINE_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_BROMINE_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_BROMINE_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_BROMINE_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_BROMINE_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Iodine
		else
		if (aElement == 74)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_IODINE_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_IODINE_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_IODINE_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_IODINE_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_IODINE_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_IODINE_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_IODINE_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_IODINE_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Astatine
		else
		if (aElement == 75)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ASTATINE_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ASTATINE_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ASTATINE_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ASTATINE_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ASTATINE_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ASTATINE_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ASTATINE_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x1f1c4000);
	}



			// If we're in the eighteenth group
	else
	if (aElement >= 76 && aElement <= 81)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group18.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group18.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group18.rsc" ));
			}
		}
			// Helium
		if (aElement == 76)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_HELIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_HELIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_HELIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_HELIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_HELIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_HELIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_HELIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_HELIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_HELIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Neon
		else
		if (aElement == 77)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_NEON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_NEON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_NEON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_NEON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_NEON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NEON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NEON_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NEON_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Argon
		else
		if (aElement == 78)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ARGON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ARGON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ARGON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ARGON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ARGON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ARGON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ARGON_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_ARGON_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Krypton
		else
		if (aElement == 79)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_KRYPTON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_KRYPTON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_KRYPTON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_KRYPTON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_KRYPTON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_KRYPTON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Xenon
		else
		if (aElement == 80)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_XENON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_XENON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_XENON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_XENON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_XENON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_XENON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_XENON_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_XENON_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// Radon
		else
		if (aElement == 81)
		{
				 // The app supplies both the first and second lines of the
		         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_RADON_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_RADON_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_RADON_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_RADON_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_RADON_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_RADON_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_RADON_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_RADON_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_RADON_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x276a2000);
	}




			// If we're in the lanthanides
	else
	if (aElement >= 82 && aElement <= 96)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group19.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group19.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group19.rsc" ));
			}
		}
			// Lanthanum
		if (aElement == 82)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_LANTHANUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_LANTHANUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_LANTHANUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_LANTHANUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_LANTHANUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_LANTHANUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_LANTHANUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Cerium
		if (aElement == 83)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CERIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CERIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CERIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CERIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CERIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_CERIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_CERIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Praseodymium
		if (aElement == 84)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_PRASEODYMIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_PRASEODYMIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_PRASEODYMIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_PRASEODYMIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_PRASEODYMIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_PRASEODYMIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_PRASEODYMIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Neodymium
		if (aElement == 85)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_NEODYMIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_NEODYMIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_NEODYMIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_NEODYMIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_NEODYMIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NEODYMIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NEODYMIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NEODYMIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Promethium
		if (aElement == 86)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_PROMETHIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Samarium
		if (aElement == 87)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_SAMARIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_SAMARIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_SAMARIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_SAMARIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_SAMARIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_SAMARIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_SAMARIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_SAMARIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Europium
		if (aElement == 88)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_EUROPIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_EUROPIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_EUROPIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_EUROPIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_EUROPIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_EUROPIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_EUROPIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_EUROPIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Gadolinium
		if (aElement == 89)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_GADOLINIUM_OTHER6);
		}
			// Terbium
		if (aElement == 90)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_TERBIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_TERBIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_TERBIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_TERBIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_TERBIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_TERBIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_TERBIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_TERBIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_TERBIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Dysprosium
		if (aElement == 91)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_DYSPROSIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Holmium
		if (aElement == 92)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_HOLMIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_HOLMIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_HOLMIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_HOLMIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_HOLMIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_HOLMIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_HOLMIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_HOLMIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Erbium
		if (aElement == 93)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ERBIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ERBIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ERBIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ERBIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ERBIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ERBIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ERBIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_ERBIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_ERBIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_ERBIUM_OTHER6);
		}
			// Thulium
		if (aElement == 94)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_THULIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_THULIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_THULIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_THULIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_THULIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_THULIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_THULIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_THULIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_THULIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Ytterbium
		if (aElement == 95)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_YTTERBIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_YTTERBIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_YTTERBIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_YTTERBIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_YTTERBIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_YTTERBIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_YTTERBIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_YTTERBIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Lutetium
		if (aElement == 96)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_LUTETIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x39f0b000);
	}



			// If we're in the actinides
	else
	if (aElement >= 97 && aElement <= 111)
	{
			// Add more resource files
		TRAPD(err, eikonEnv->AddResourceFileL( _L( "c:\\system\\apps\\PeriodicTable\\group20.rsc" )));
		if (err)
		{
			TRAP(err, eikonEnv->AddResourceFileL( _L( "d:\\system\\apps\\PeriodicTable\\group20.rsc" )));
			if (err)
			{
				eikonEnv->AddResourceFileL( _L( "z:\\system\\apps\\PeriodicTable\\group20.rsc" ));
			}
		}
			// Actinium
		if (aElement == 97)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_ACTINIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_ACTINIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_ACTINIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_ACTINIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_ACTINIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_ACTINIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_ACTINIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_ACTINIUM_OTHER3);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Thorium
		if (aElement == 98)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_THORIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_THORIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_THORIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_THORIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_THORIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_THORIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_THORIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_THORIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_THORIUM_OTHER5);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Protactinium
		if (aElement == 99)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_PROTACTINIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_PROTACTINIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_PROTACTINIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_PROTACTINIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_PROTACTINIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_PROTACTINIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_PROTACTINIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Uranium
		if (aElement == 100)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_URANIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_URANIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_URANIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_URANIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_URANIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_URANIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_URANIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_URANIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Neptunium
		if (aElement == 101)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_NEPTUNIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_NEPTUNIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_NEPTUNIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_NEPTUNIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_NEPTUNIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NEPTUNIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NEPTUNIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Plutonium
		if (aElement == 102)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_PLUTONIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_PLUTONIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_PLUTONIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_PLUTONIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_PLUTONIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_PLUTONIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_PLUTONIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_PLUTONIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Americium
		if (aElement == 103)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_AMERICIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_AMERICIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_AMERICIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_AMERICIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_AMERICIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_AMERICIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_AMERICIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_AMERICIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Curium
		if (aElement == 104)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CURIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CURIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CURIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CURIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CURIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_CURIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_CURIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_CURIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Berkelium
		if (aElement == 105)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_BERKELIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_BERKELIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_BERKELIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_BERKELIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_BERKELIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_BERKELIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_BERKELIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Californium
		if (aElement == 106)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_CALIFORNIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_CALIFORNIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_CALIFORNIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_CALIFORNIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_CALIFORNIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_CALIFORNIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_CALIFORNIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Einsteinium
		if (aElement == 107)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_EINSTEINIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_EINSTEINIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_EINSTEINIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_EINSTEINIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_EINSTEINIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_EINSTEINIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_EINSTEINIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_EINSTEINIUM_OTHER4);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Fermium
		if (aElement == 108)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_FERMIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_FERMIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_FERMIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_FERMIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_FERMIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_FERMIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_FERMIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Mendelevium
		if (aElement == 109)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_MENDELEVIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_MENDELEVIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_MENDELEVIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_MENDELEVIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_MENDELEVIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_MENDELEVIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_MENDELEVIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Nobelium
		if (aElement == 110)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_NOBELIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_NOBELIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_NOBELIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_NOBELIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_NOBELIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_NOBELIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
			// Lawrencium
		if (aElement == 111)
		{
			 // The app supplies both the first and second lines of the
	         // text (from the resource file)
			general   = eikonEnv->AllocReadResourceLC(R_LAWRENCIUM_GENERAL);
			physical   = eikonEnv->AllocReadResourceLC(R_LAWRENCIUM_PHYSICAL);
			atomic   = eikonEnv->AllocReadResourceLC(R_LAWRENCIUM_ATOMIC);
			name   = eikonEnv->AllocReadResourceLC(R_LAWRENCIUM_NAME);
			other   = eikonEnv->AllocReadResourceLC(R_LAWRENCIUM_OTHER);
			other2   = eikonEnv->AllocReadResourceLC(R_LAWRENCIUM_OTHER2);
			other3   = eikonEnv->AllocReadResourceLC(R_LAWRENCIUM_OTHER3);
			other4   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other5   = eikonEnv->AllocReadResourceLC(R_NOTHING);
			other6   = eikonEnv->AllocReadResourceLC(R_NOTHING);
		}
				// We must delete the resource file - the offset is found in the
				// rsg files
		eikonEnv->DeleteResourceFile(0x5793000);
	}





	CFbsBitmap* bitmap;
	_LIT(KBitMapFile_z,"Z:\\system\\apps\\PeriodicTable\\element.mbm");
	_LIT(KBitMapFile_c,"C:\\system\\apps\\PeriodicTable\\element.mbm");
	_LIT(KBitMapFile_d,"D:\\system\\apps\\PeriodicTable\\element.mbm");
	_LIT(KBitMapFile_radioactive_z,"Z:\\system\\apps\\PeriodicTable\\elementradioactive.mbm");
	_LIT(KBitMapFile_radioactive_c,"C:\\system\\apps\\PeriodicTable\\elementradioactive.mbm");
	_LIT(KBitMapFile_radioactive_d,"D:\\system\\apps\\PeriodicTable\\elementradioactive.mbm");
    CGulIcon* icon;

	// If the element is radioactive,
	// we load the radioactivity icon
if (aElement == 7 || aElement == 13 || aElement == 19 || 
	aElement == 23 || aElement == 27 || aElement == 29 || 
	aElement == 31 || aElement == 39 || aElement == 43 || 
	aElement == 47 || aElement == 70 || aElement == 75 || 
	aElement == 81 || aElement == 86 || aElement == 97 || 
	aElement == 99 || aElement == 100 || aElement == 101 || 
	aElement == 102 || aElement == 103 || aElement == 104 || 
	aElement == 105 || aElement == 106 || aElement == 107 || 
	aElement == 108 || aElement == 109 || aElement == 110 || 
	aElement == 111)
{
			 // Create bitmap and push object onto cleanup stack until we have 
	         // safely created the Graphics Utility Icon object (CGulIcon).
	         // Ownership of the bitmap is passed to the CGulICon object.
			 //
	         // (NB The bitmap originates in ckon.mbm)
	TRAPD(err, bitmap = eikonEnv->CreateBitmapL(KBitMapFile_radioactive_c,0));
	if (err)
	{
		TRAP(err, bitmap = eikonEnv->CreateBitmapL(KBitMapFile_radioactive_d,0));
		if (err)
		{
			bitmap = eikonEnv->CreateBitmapL(KBitMapFile_radioactive_z,0);
		}
	}
	CleanupStack::PushL(bitmap);
    icon = CGulIcon::NewL(bitmap);
	CleanupStack::Pop();

			 // We retain ownership of the CGulICon object, so we
	         // are responsible for destroying it later.
	CleanupStack::PushL(icon);
}

	// If the element is one of the non-radioactive ones,
	// we load the right icon
else
{
			 // Create bitmap and push object onto cleanup stack until we have 
	         // safely created the Graphics Utility Icon object (CGulIcon).
	         // Ownership of the bitmap is passed to the CGulICon object.
			 //
	         // (NB The bitmap originates in ckon.mbm)
	TRAPD(err, bitmap = eikonEnv->CreateBitmapL(KBitMapFile_c,0));
	if (err)
	{
		TRAP(err, bitmap = eikonEnv->CreateBitmapL(KBitMapFile_d,0));
		if (err)
		{
			bitmap = eikonEnv->CreateBitmapL(KBitMapFile_z,0);
		}
	}
	CleanupStack::PushL(bitmap);
    icon = CGulIcon::NewL(bitmap);
	CleanupStack::Pop();

			 // We retain ownership of the CGulICon object, so we
	         // are responsible for destroying it later.
	CleanupStack::PushL(icon);
}















			 // Launch the dialog
    CCknInfoDialog::RunDlgLD(*general_title,*general,icon);
    CCknInfoDialog::RunDlgLD(*physical_title,*physical,icon);
    CCknInfoDialog::RunDlgLD(*atomic_title,*atomic,icon);
    CCknInfoDialog::RunDlgLD(*name_title,*name,icon);
    CCknInfoDialog::RunDlgLD(*other_title,*other,icon);
	if ((aElement >= 6 && aElement <= 23) || (aElement >= 25 &&
		aElement <= 26) || (aElement >= 28 && aElement <= 30) ||
		aElement == 32 || aElement == 34 || (aElement >= 36 &&
		aElement <= 42) || (aElement >= 44 && aElement <= 111))
	{
		CCknInfoDialog::RunDlgLD(*other_title,*other2,icon);
	}

	if (aElement == 29 || aElement == 36 || aElement == 38 ||
		aElement == 40 || aElement == 41 || (aElement >= 44 &&
		aElement <= 78) || (aElement >= 80 && aElement <= 81) ||
		(aElement >= 82 && aElement <= 96) || (aElement >= 97 &&
		aElement <= 109) || aElement == 111)
	{
		CCknInfoDialog::RunDlgLD(*other_title,*other3,icon);
	}

	if (aElement == 41 || aElement == 45 || aElement == 48 ||
		aElement == 50 || aElement == 51 || aElement == 52 ||
		aElement == 53 || aElement == 56 || (aElement >= 58 &&
		aElement <= 62) || aElement == 65 || (aElement >= 66 &&
		aElement <= 68) || aElement == 70 || aElement == 74 ||
		(aElement >= 76 && aElement <= 78) || (aElement >= 80 &&
		aElement <= 81) || (aElement >= 85 && aElement <= 96) ||
		aElement == 98 || aElement == 100 || aElement == 102 ||
		aElement == 103 || aElement == 104 || aElement == 107)
	{
		CCknInfoDialog::RunDlgLD(*other_title,*other4,icon);
	}

	if (aElement == 41 || aElement == 50 || aElement == 59 ||
		aElement == 65 || aElement == 66 || aElement == 76 ||
		aElement == 81 || aElement == 86 || aElement == 89 ||
		aElement == 90 || aElement == 91 || aElement == 93 ||
		aElement == 94 || aElement == 96 || aElement == 98)
	{
		CCknInfoDialog::RunDlgLD(*other_title,*other5,icon);
	}

	if (aElement == 66 || aElement == 89 || aElement == 93)
	{
		CCknInfoDialog::RunDlgLD(*other_title,*other6,icon);
	}


	         // Remove and destroy all objects
	CleanupStack::PopAndDestroy(16);

	// We'll make the "Open" button the default one, with underlining
	CEikButtonGroupContainer::Current()->SetDefaultCommand(ECbaButton0);
}

