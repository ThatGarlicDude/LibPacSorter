#include "romFile.h"

#ifndef EXTENSION_GETTER_H
#define EXTENSION_GETTER_H

	// Returns the file extension included in the filename.
	char* getFileExtension(const char* fileName);

	// Ditto, but for the RomFile struct.
	char* getROMExtension(RomFile* romFile);

#endif
