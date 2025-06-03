#include <stdio.h>
#include <string.h>
#include "pacextension.h"
#include "pacset.h"
#include "pacrom.h"

// Compares two ROMs' extensions. Used for telling which ROM should be placed first.
int pac_rom_compare_names(pac_rom_t* rom_a, pac_rom_t* rom_b) {
	const char* extension_a;
	const char* extension_b;
	// Stop if either of the ROM pointers are null.
	if (!rom_a || !rom_b) {
		printf("Error (pac_rom_compare_names): One of the ROM pointers is null.\n");
		return 0;
	}
	// Get the extensions from both of the ROMs.
	extension_a = pac_rom_get_extension(rom_a);
	extension_b = pac_rom_get_extension(rom_b);
	return strcmp(extension_b, extension_a);
}

// Returns the index in which where the lowest ROM extension is at.
int pac_set_find_lowest_rom_name(pac_set_t* set, size_t offset) {
	int lowest_rom_name = offset;
	// Stop if the ROM set pointer is null.
	if (!set) {
		printf("Error (pac_set_find_lowest_rom_name): ROM set pointer is null.\n");
		return -1;
	}
	// Scan to find the lowest ROM in the ROM set.
	for (size_t index = offset; index < set->size; index++) {
		int result = pac_rom_compare_names(set->roms[lowest_rom_name], set->roms[index]);
		// Is it lower?
		if (result < 0) {
			lowest_rom_name = index;
		}
	}
	return lowest_rom_name;
}

// Ditto, but for the highest ROM extension.
int pac_set_find_highest_rom_name(pac_set_t* set, int offset) {
	int highest_rom_name = offset;
	// Stop if the ROM set pointer is null.
	if (!set) {
		printf("Error (pac_set_find_highest_rom_name): ROM set pointer is null.\n");
		return -1;
	}
	// Scan to find the highest ROM in the ROM set.
	for (size_t index = offset; index < set->size; index++) {
		int result = pac_rom_compare_names(set->roms[highest_rom_name], set->roms[index]);
		// Is it higher?
		if (result > 0) {
			highest_rom_name = index;
		}
	}
	return highest_rom_name;
}
