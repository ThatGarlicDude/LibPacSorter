# ![LibPacSorter](./assets/title/title_4x.png)

## Overview

*LibPacSorter* is a shared library that sorts virtual ROMs in a virtual ROM set. It requires *LibPacSet*, a shared library that can create the virtual ROMs and ROM set. It sorts ROMs by their filename extensions in lexicographical order, making the virtual ROM set organized without being messy via GNU's dirent feature. It is a must-have library for making your virtual ROM set manageable by other programs.

## Functions

### PacSort

* `int pac_set_sort(pac_set_t* set)`

### PacSwap

* `int pac_rom_swap(pac_rom_t** rom_a, pac_rom_t** rom_b)`

### PacExtension

* `const char* pac_rom_get_extension(pac_rom_t* rom)`

### PacCompare

* `int pac_rom_compare_names(pac_rom_t* rom_a, pac_rom_t* rom_b)`
* `int pac_set_find_lowest_rom_name(pac_set_t* set, size_t offset)`
* `int pac_set_find_highest_rom_name(pac_set_t* set, size_t offset)`

~~I think these functions should be put in *LibPacSet* instead. Probably gonna deprecate this soon. Dang.~~

## Copyright Disclaimer

This is not an official product by Bandai Namco. *Pac-Man* is owned by Bandai Namco, and *LibPacSorter* is created by GarlicDude. Moreover, *LibPacSorter* does not distribute any ROMs, code, or assets related to *Pac-Man*.

The logo and title for *LibPacSorter* uses the Press Start 2P text font. Press Start 2P is owned by CodeMan38.
