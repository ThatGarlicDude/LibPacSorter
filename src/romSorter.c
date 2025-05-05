#include <stdio.h>
#include <string.h>
#include "extensionGetter.h"
#include "fileNameComparator.h"
#include "fileNamePrinter.h"
#include "stringSwapper.h"
#include "romSorter.h"

// Sorts the ROMs in an array.
void sortRoms(RomSet* romSet) {
	size_t size = romSet->size;
	for (size_t index = 0; index < size; index++) {
		int lowestFileExtension = findLowestFileExtension(romSet, index);
		swapConstStrings(&(romSet->filePaths[index]), &(romSet->filePaths[lowestFileExtension]));
	}
}
