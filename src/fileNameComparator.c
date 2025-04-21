#include <stdio.h>
#include <string.h>
#include "extensionGetter.h"

// Compares two files' extensions. Used for telling which ROM should be placed first.
int compareFileExtensions(const char* fileNameA, const char* fileNameB) {
	// Get the extensions from both of the files.
	const char* extensionA = getFileExtension(fileNameA);
	const char* extensionB = getFileExtension(fileNameB);
	return strcmp(extensionA, extensionB);
}
