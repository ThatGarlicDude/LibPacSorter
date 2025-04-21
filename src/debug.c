#include <stdio.h>
#include "extensionGetter.h"
#include "fileNameComparator.h"
#include "romSorter.h"
#include "stringSwapper.h"

// Main function.
int main(int argc, char* argv[]) {
	char* stringA = "GarlicDude.Rom";
	char* stringB = "placeholder.rom";
	printf("Okay, let's print the two strings...\n");
	printf("%s\n", stringA);
	printf("%s\n", stringB);
	printf("Now, let's find the lowest extension...\n");
	printf("Lowest extension: %s\n", getLowerExtension(stringA, stringB));
	printf("Highest extension: %s\n", getHigherExtension(stringA, stringB));
	return 0;
}
