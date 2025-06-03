#include <stdio.h>
#include <string.h>
#include "pacextension.h"
#include "paccompare.h"
#include "pacswap.h"

// Sorts the ROMs in the ROM set.
int pac_set_sort(pac_set_t* set) {
	// Stop if the ROM set pointer is null.
	if (!set) {
		printf("Error (pac_set_sort): ROM set pointer is null.\n");
		return -1;
	}
	// Go through each of the ROMs in the set.
	for (size_t index = 0; index < set->size; index++) {
		int lowest_rom_name = pac_set_find_lowest_rom_name(set, index);
		pac_rom_swap(&set->roms[index], &set->roms[lowest_rom_name]);
	}
	return 0;
}
