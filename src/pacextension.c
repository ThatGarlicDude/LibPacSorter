#include <stdio.h>
#include <string.h>
#include "pacrom.h"

// Returns the file extension included in the filename.
const char* pac_rom_get_extension(pac_rom_t* rom) {
	char* period = strchr(rom->name, '.');
	// Stop if there is no period.
	if (!period) {
		return NULL;
	}
	// Return the string after the period.
	return ++period;
}
