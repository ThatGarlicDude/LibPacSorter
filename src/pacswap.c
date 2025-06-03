#include <stdio.h>
#include "pacrom.h"

// Simply swaps the ROM pointers.
int pac_rom_swap(pac_rom_t** rom_a, pac_rom_t** rom_b) {
	pac_rom_t* temp_rom;
	// Stop if one of the ROM pointers is null.
	if (!rom_a || !rom_b) {
		printf("Error (pac_rom_swap): One of the ROM pointers is null.\n");
		return -1;
	}
	// Swap the ROMs.
	temp_rom = *rom_a;
	*rom_a = *rom_b;
	*rom_b = temp_rom;
	return 0;
}
