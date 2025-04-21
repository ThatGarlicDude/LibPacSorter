#ifndef FILENAME_COMPARATOR_H
#define FILENAME_COMPARATOR_H

	// Compares two files' extensions. Used for telling which ROM should be placed first.
	int compareFileExtensions(const char* fileNameA, const char* fileNameB);

	// Finds which file has the lowest extension.
	const char* getLowerExtension(const char* fileNameA, const char* fileNameB);

	// Ditto, but for the highest extension.
	const char* getHigherExtension(const char* fileNameA, const char* fileNameB);

#endif
