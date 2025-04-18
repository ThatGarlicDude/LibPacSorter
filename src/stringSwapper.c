void swapStrings(char** stringA, char** stringB) {
	char* temporaryString = *stringA;
	*stringA = *stringB;
	*stringB = temporaryString;
}
