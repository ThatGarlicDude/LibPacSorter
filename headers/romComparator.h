#include <stdio.h>
#include "romSet.h"
#include "romFile.h"

#ifndef ROM_COMPARATOR_H
#define ROM_COMPARATOR_H

	// Compares two ROMs' extensions. Used for telling which ROM should be placed first.
	int compareROMs(RomFile* romA, RomFile* romB);

	// Returns the index in which where the lowest ROM extension is at.
	int findLowestROM(RomSet* romSet, int currentIndex);

	// Ditto, but for the highest ROM extension.
	int findHighestROM(RomSet* romSet, int currentIndex);

#endif
