#include <stdio.h>
#include "pacset.h"
#include "pacrom.h"
#include "pacprint.h"
#include "pacswap.h"
#include "pacsort.h"

#define NAME_ROM_SWAP_TEST "ROM Swap Test"
#define NAME_ROM_SORT_TEST "ROM Sort Test"

// Test the ROM-swapping functionality.
void rom_swap_test() {
	pac_rom_t* rom1 = pac_rom_create("GarlicDude.2a");
	pac_rom_t* rom2 = pac_rom_create("OnionGal.7h");
	printf("Before swapping...\n");
	pac_rom_print(rom1);
	pac_rom_print(rom2);
	pac_rom_swap(&rom1, &rom2);
	printf("After swapping...\n");
	pac_rom_print(rom1);
	pac_rom_print(rom2);
	pac_rom_destroy(rom1);
	pac_rom_destroy(rom2);
	rom1 = NULL;
	rom2 = NULL;
}

// Test sorting all the ROMs within a set.
void rom_sort_test() {
	// Create the ROM set.
	pac_set_t* set = pac_set_create();
	// Create the ROMs too.
	pac_rom_t* rom1 = pac_rom_create("GarlicDude.1a");
	pac_rom_t* rom2 = pac_rom_create("WiltedCabbage.a8");
	pac_rom_t* rom3 = pac_rom_create("RottenEggplant.3f");
	pac_rom_t* rom4 = pac_rom_create("OnionGal.2b");
	// Append the ROMs in to the set.
	pac_set_append_rom(set, rom1);
	pac_set_append_rom(set, rom2);
	pac_set_append_rom(set, rom3);
	pac_set_append_rom(set, rom4);
	// Print it out before sorting.
	printf("Before sorting...\n");
	pac_set_print(set);
	// Sorting it.
	pac_set_sort(set);
	// Now print the Set.
	printf("After sorting...");
	pac_set_print(set);
	// Free up everything from memory.
	pac_rom_destroy(rom1);
	pac_rom_destroy(rom2);
	pac_rom_destroy(rom3);
	pac_rom_destroy(rom4);
	pac_set_destroy(set);
}

// Prints the heading of a test.
void print_test(const char* test_name) {
	printf("== %s ==\n", test_name);
}

// Main function.
int main(int argc, char* argv[]) {
	int test_index;
	// Is there an argument?
	if (argv[1]) {
		test_index = ((int) argv[1][0]) - 48;
	} else {
		printf("Please enter a test number (0, 1, 2, ...).\n");
		return -1;
	}
	// Select test function.
	switch(test_index) {
		// Call rom_swap_test().
		case 0:
			print_test(NAME_ROM_SWAP_TEST);
			rom_swap_test();
			break;
		// Call rom_sort_test().
		case 1:
			print_test(NAME_ROM_SORT_TEST);
			rom_sort_test();
			break;
		// Stop if no functions can be found.
		default:
			printf("No test function can be found.\n");
			return -1;
	}
	printf("End of test.\n");
	return 0;
}
