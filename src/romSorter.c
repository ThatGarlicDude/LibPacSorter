#include <stdio.h>
#include <string.h>
#include "extensionGetter.h"
#include "fileNameComparator.h"
#include "fileNamePrinter.h"
#include "stringSwapper.h"

// Sorts the ROMs in an array.
void sortRoms(const char** romFiles, size_t size) {
	for (size_t index = 0; index < size; index++) {
		int lowestFileExtension = findLowestFileExtension(romFiles, size, index);
		swapConstStrings(&romFiles[index], &romFiles[lowestFileExtension]);
	}
}
