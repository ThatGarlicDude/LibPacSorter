#include <stdio.h>
#include <string.h>
#include "extensionGetter.h"
#include "romComparator.h"
#include "romSwapper.h"

// Sorts the ROMs in the Rom set.
void sortROMs(RomSet* romSet) {
	size_t size = romSet->size;
	for (size_t index = 0; index < size; index++) {
		int lowestROM = findLowestROM(romSet, index);
		swapROMs(&romSet->roms[index], &romSet->roms[lowestROM]);
	}
	return;
}
