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

// Returns the index in which where the lowest ROM extension is at.
int findLowestFileExtension(const char** romFiles, size_t size, int offset) {
	int lowestFileExtension = offset;
	int result;
	for (size_t index = offset; index < size; index++) {
		result = compareFileExtensions(romFiles[lowestFileExtension], romFiles[index]);
		if (result > 0) {
			lowestFileExtension = index;
		}
	}
	return lowestFileExtension;
}

// Ditto, but for the highest ROM extension.
int findHighestFileExtension(const char** romFiles, size_t size, int offset) {
	int highestFileExtension = offset;
	int result;
	for (size_t index = offset; index < size; index++) {
		result = compareFileExtensions(romFiles[highestFileExtension], romFiles[index]);
		if (result < 0 ) {
			highestFileExtension = index;
		}
	}
	return highestFileExtension;
}
