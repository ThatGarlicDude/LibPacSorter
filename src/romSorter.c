#include <stdio.h>
#include <string.h>
#include "extensionGetter.h"
#include "romComparator.h"
#include "romSwapper.h"

// Sorts the ROMs in the ROM set.
void sortROMs(RomSet* romSet) {
	size_t size;
	// Just wanted to be silly with the failsafe thing.
	if (romSet == NULL) {
		printf("There's no ROM set to sort. You know the rules, and so do I.\n");
		return;
	}
	size = romSet->size;
	// Go through each of the ROMs in the set.
	for (size_t index = 0; index < size; index++) {
		int lowestROM = findLowestROM(romSet, index);
		swapROMs(&romSet->roms[index], &romSet->roms[lowestROM]);
	}
	return;
}
