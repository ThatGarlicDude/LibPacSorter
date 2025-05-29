#include "romFile.h"

#ifndef EXTENSION_GETTER_H
#define EXTENSION_GETTER_H

	// Returns the file extension included in the filename.
	const char* getFileExtension(const char* fileName);

	// Ditto, but for the RomFile struct.
	const char* getROMExtension(RomFile* romFile);

#endif
