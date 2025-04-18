#include <stdio.h>
#include "romSorter.h"
#include "stringSwapper.h"

// Main function.
int main(int argc, char* argv[]) {
	char* stringA = "Garlic";
	char* stringB = "Dude";
	printf("Okay, let's print the two strings...\n");
	printf("%s\n", stringA);
	printf("%s\n", stringB);
	printf("Now, let's swap them...\n");
	swapStrings(&stringA, &stringB);
	printf("Now we print them...\n");
	printf("%s\n", stringA);
	printf("%s\n", stringB);
	return 0;
}
