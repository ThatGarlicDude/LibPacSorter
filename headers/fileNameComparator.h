#include <stdio.h>
#include "romSet.h"

#ifndef FILENAME_COMPARATOR_H
#define FILENAME_COMPARATOR_H

	// Compares two files' extensions. Used for telling which ROM should be placed first.
	int compareFileExtensions(const char* fileNameA, const char* fileNameB);

	// Returns the index in which where the lowest ROM extension is at.
	int findLowestFileExtension(RomSet* romSet, int currentIndex);

	// Ditto, but for the highest ROM extension.
	int findHighestFileExtension(RomSet* romSet, int currentIndex);

#endif
