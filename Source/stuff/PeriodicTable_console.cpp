// PeriodicTable.cpp
//

/*
	This example shows how to use multiple resource files with cross-referenced
	resources.  It depends on the resource file created for the MultiRead1 project.

	It introduces a second resource file, MultiRead2, which contains an LLINK
	to a resource defined in the MultiRead1 project. The important point to note is
	that the effect of introducing this second resource file is minimal: just
	another #include file; and the logic in doExampleL() would be identical whether
	the LLINK pointed to another resource in the same file or a different file.
*/

#include "PeriodicTable.h"    // definition of multi-resource-reader class

// Do the example
HBufC8* doExampleL()
	{
	_LIT(KFormat,"%S\n");

	// allocate multi-reader
	CMultipleResourceFileReader* multiReader =
			CMultipleResourceFileReader::NewLC();

		// open a couple of resource files
	#if defined(__WINS__)
			// add MultiRead1 version 23
	_LIT(KZSystemDataBasigbRsc,"Z:\\system\\data\\PeriodicTable1.rsc");
	multiReader->AddResourceFileL(KZSystemDataBasigbRsc,23);
			// add MultiRead2 version 17
	_LIT(KZSystemDataBasiguRsc,"Z:\\system\\data\\PeriodicTable2.rsc");
	multiReader->AddResourceFileL(KZSystemDataBasiguRsc,17);
	#endif

	#if defined(__ARM__)
			// add MultiRead1 version 23
	_LIT(KCSystemDataBasigbRsc,"C:\\system\\data\\PeriodicTable1.rsc");
	multiReader->AddResourceFileL(KCSystemDataBasigbRsc,23);
			// add MultiRead2 version 17
	_LIT(KCSystemDataBasiguRsc,"C:\\system\\data\\PeriodicTable2.rsc");
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
	// write string to test console
	console->Printf(KFormat, &textBuffer);
	// clean up data buffer
	CleanupStack::PopAndDestroy(); // finished with dataBuffer
	// cleanup multi-reader
	CleanupStack::PopAndDestroy(); // multi-reader
	return dataBuffer;
	}
