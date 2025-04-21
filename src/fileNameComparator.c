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

// Finds which file has the lowest extension.
const char* getLowerExtension(const char* fileNameA, const char* fileNameB) {
	int result = compareFileExtensions(fileNameA, fileNameB);
	if (result < 0) {
		return fileNameA; // If that's lower, return that.
	} else if (result > 0) {
		return fileNameB; // Otherwise, return the other filename.
	} else {
		return NULL; // Return null if they match.
	}
}

// Ditto, but for the highest extension.
const char* getHigherExtension(const char* fileNameA, const char* fileNameB) {
	// Not sure if this function should really exist long-term.
	int result = compareFileExtensions(fileNameA, fileNameB);
	if (result > 0) {
		return fileNameA;
	} else if (result < 0) {
		return fileNameB;
	} else {
		return NULL;
	}
}
