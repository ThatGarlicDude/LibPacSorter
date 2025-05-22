#include <stdio.h>
#include "romFile.h"

// Simply swaps the ROM pointers.
void swapROMs(RomFile* romA, RomFile* romB) {
	RomFile tempRom = *romA;
	*romA = *romB;
	*romB = tempRom;
}
