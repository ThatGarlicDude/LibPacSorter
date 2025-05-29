#include <stdio.h>
#include <string.h>
#include "extensionGetter.h"
#include "romSet.h"
#include "romFile.h"

// Compares two ROMs' extensions. Used for telling which ROM should be placed first.
int compareROMs(RomFile* romA, RomFile* romB) {
	// Get the extensions from both of the ROMs.
	const char* extensionA = getROMExtension(romA);
	const char* extensionB = getROMExtension(romB);
	return strcmp(extensionA, extensionB);
}

// Returns the index in which where the lowest ROM extension is at.
int findLowestROM(RomSet* romSet, int currentIndex) {
	int lowestFileExtension = currentIndex;
	int result;
	// Scan to find the lowest ROM in the ROM set.
	for (size_t index = currentIndex; index < romSet->size; index++) {
		result = compareROMs(&romSet->roms[lowestFileExtension], &romSet->roms[index]);
		// Is it lower (or I guess greater based on the code)?
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
	// Scan to find the highest ROM in the ROM set.
	for (size_t index = currentIndex; index < romSet->size; index++) {
		result = compareROMs(&romSet->roms[highestFileExtension], &romSet->roms[index]);
		// Is it higher (or I guess lesser based on the code)?
		if (result < 0) {
			highestFileExtension = index;
		}
	}
	return highestFileExtension;
}
