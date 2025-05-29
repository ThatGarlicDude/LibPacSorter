#include <stdio.h>
#include <string.h>
#include "romFile.h"

// Returns the file extension included in the filename.
const char* getFileExtension(const char* fileName) {
	char* period = strchr(fileName, '.');
	// If there is no period, then just return NULL.
	if (period == NULL) {
		return NULL;
	}
	// Return the string after the period.
	return ++period;
}

// Ditto, but for the RomFile struct.
const char* getROMExtension(RomFile* romFile) {
	return getFileExtension(romFile->fileName);
}
