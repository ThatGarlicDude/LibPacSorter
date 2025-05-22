#include <stdio.h>
#include <string.h>
#include "romFile.h"

// Returns the file extension included in the filename.
char* getFileExtension(char* fileName) {
	char* period = strchr(fileName, '.');
	if (period == NULL) {
		return NULL; // If there is no period, then just return NULL.
	}
	return ++period; // Return the string after the period.
}

// Ditto, but for the RomFile struct.
char* getROMExtension(RomFile* romFile) {
	return getFileExtension(romFile->fileName);
}
