#include <stdio.h>

// Print the filenames in an array.
void printFileNames(const char** romFiles, size_t size) {
	printf("\n-- FILENAME STRINGS --\n");
	for (size_t index = 0; index < size; index++) {
		printf("\tROM file #%ld is: %s.\n", index, romFiles[index]);
	}
}

// Prints the pointers for the filenames.
void printFileNamePointers(const char** romFiles, size_t size) {
	printf("\n-- FILENAME POINTERS --\n");
	for (size_t index = 0; index < size; index++) {
		printf("\tROM file #%ld points to: %p.\n", index, romFiles[index]);
	}
}
