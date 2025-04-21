#include <stdio.h>
#include <string.h>

// Returns the file extension included in the filename.
const char* getFileExtension(const char* fileName) {
	const char* period = strchr(fileName, '.');
	if (period == NULL) {
		return NULL; // If there is no period, then just return NULL.
	}
	return ++period; // Return the string after the period.
}
