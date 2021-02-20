#include <stdio.h>;
#include "working_with_strings.h";

int main()
{
	char string[200];
	fgets(string, 200, stdin);
	printf("%s", max_lenght_word(string));
	return 0;
}