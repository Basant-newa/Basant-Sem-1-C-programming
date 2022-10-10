// WAP to declare variable of all Data Types, read the values and display them.
#include <stdio.h>

int main() {
	int p;
	char q;
	float r;
	double s;
	printf("Enter a integer: ");
	scanf("%d", &p);
	printf("Enter a character: ");
	scanf(" %c", &q);
	printf("Enter a float number: ");
	scanf(" %f", &r);
	printf("Enter a double: ");
	scanf(" %lf", &s);
	printf("The given input are\n Integer: %d \n Character: %c \n Float: %f \n Double: %lf ", p, q, r, s);
	return 0;
}
