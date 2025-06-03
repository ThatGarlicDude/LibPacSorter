#include <stdio.h>
#include "pacset.h"
#include "pacrom.h"

#ifndef PACCOMPARE_H
#define PACCOMPARE_H

	// Compares two ROMs' extensions. Used for telling which ROM should be placed first.
	int pac_rom_compare_names(pac_rom_t* rom_a, pac_rom_t* rom_b);

	// Returns the index in which where the lowest ROM extension is at.
	int pac_set_find_lowest_rom_name(pac_set_t* set, size_t offset);

	// Ditto, but for the highest ROM extension.
	int pac_set_find_highest_rom_name(pac_set_t* set, size_t offset);

#endif
