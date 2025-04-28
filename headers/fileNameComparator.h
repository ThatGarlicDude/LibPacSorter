#include <stdio.h>

#ifndef FILENAME_COMPARATOR_H
#define FILENAME_COMPARATOR_H

	// Compares two files' extensions. Used for telling which ROM should be placed first.
	int compareFileExtensions(const char* fileNameA, const char* fileNameB);

	// Returns the index in which where the lowest ROM extension is at.
	int findLowestFileExtension(const char** romFiles, size_t size, int offset);

	// Ditto, but for the highest ROM extension.
	int findHighestFileExtension(const char** romFiles, size_t size, int offset);

#endif
