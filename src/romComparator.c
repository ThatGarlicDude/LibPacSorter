#include <stdio.h>
#include <string.h>
#include "extensionGetter.h"
#include "romSet.h"
#include "romFile.h"

// Compares two ROMs' extensions. Used for telling which ROM should be placed first.
int compareROMs(RomFile* romA, RomFile* romB) {
	// Get the extensions from both of the ROMs.
	char* extensionA = getROMExtension(romA);
	char* extensionB = getROMExtension(romB);
	return strcmp(extensionA, extensionB);
}

// Returns the index in which where the lowest ROM extension is at.
int findLowestROM(RomSet* romSet, int currentIndex) {
	int lowestFileExtension = currentIndex;
	int result;
	for (size_t index = currentIndex; index < romSet->size; index++) {
		result = compareROMs(&romSet->roms[lowestFileExtension], &romSet->roms[index]);
		if (result > 0) {
			lowestFileExtension = index;
		}
	}
	return lowestFileExtension;
}

// Ditto, but for the highest ROM extension.
int findHighestROM(RomSet* romSet, int currentIndex) {
	int highestFileExtension = currentIndex;
	int result;
	for (size_t index = currentIndex; index < romSet->size; index++) {
		result = compareROMs(&romSet->roms[highestFileExtension], &romSet->roms[index]);
		if (result < 0 ) {
			highestFileExtension = index;
		}
	}
	return highestFileExtension;
}
