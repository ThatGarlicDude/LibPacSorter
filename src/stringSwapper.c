#include <stdio.h>

// Simply swaps the strings' pointers.
void swapStrings(char** stringA, char** stringB) {
	char* temporaryString = *stringA;
	*stringA = *stringB;
	*stringB = temporaryString;
}

// Ditto, but for constant strings.
void swapConstStrings(const char** stringA, const char** stringB) {
	const char* temporaryString = *stringA;
	*stringA = *stringB;
	*stringB = temporaryString;
	return;
}
