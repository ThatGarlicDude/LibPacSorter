#include <stdio.h>
#include <string.h>
#include "extensionGetter.h"
#include "romSet.h"

// Compares two files' extensions. Used for telling which ROM should be placed first.
int compareFileExtensions(const char* fileNameA, const char* fileNameB) {
	// Get the extensions from both of the files.
	const char* extensionA = getFileExtension(fileNameA);
	const char* extensionB = getFileExtension(fileNameB);
	return strcmp(extensionA, extensionB);
}

// Returns the index in which where the lowest ROM extension is at.
int findLowestFileExtension(RomSet* romSet, int currentIndex) {
	int lowestFileExtension = currentIndex;
	int result;
	for (size_t index = currentIndex; index < romSet->size; index++) {
		result = compareFileExtensions(romSet->filePaths[lowestFileExtension], romSet->filePaths[index]);
		if (result > 0) {
			lowestFileExtension = index;
		}
	}
	return lowestFileExtension;
}

// Ditto, but for the highest ROM extension.
int findHighestFileExtension(RomSet* romSet, int currentIndex) {
	int highestFileExtension = currentIndex;
	int result;
	for (size_t index = currentIndex; index < romSet->size; index++) {
		result = compareFileExtensions(romSet->filePaths[highestFileExtension], romSet->filePaths[index]);
		if (result < 0 ) {
			highestFileExtension = index;
		}
	}
	return highestFileExtension;
}
