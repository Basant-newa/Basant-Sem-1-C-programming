// WAP to read an alphabet and convert it into Uppercase if it is lowercase and vice versa.
#include <stdio.h>

int main() {
	char AL;
	printf("Write an Alphabet: ");
	scanf("%c", &AL);
	 (AL<97) ? printf("The lower case is %c", AL+32): printf("The upper case is %c", AL-32);
	return 0;
}
