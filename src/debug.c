#include <stdio.h>
#include "extensionGetter.h"
#include "romSorter.h"
#include "stringSwapper.h"

// Main function.
int main(int argc, char* argv[]) {
	char* stringA = "Garlic.Dude";
	char* stringB = "placeholder.rom";
	printf("Okay, let's print the two strings...\n");
	printf("%s\n", stringA);
	printf("%s\n", stringB);
	printf("Now, let's get their extensions...\n");
	printf("%s\n", getFileExtension(stringA));
	printf("%s\n", getFileExtension(stringB));
	return 0;
}
