/* The length and width of a rectangle and radius of a circle or input through the keyboard.*/
/* WAP to calculate the area and perimeter of the rectangle and the area and circumference of the circle. */
#include <stdio.h>
#define pi 3.14

int main() {
	float l, b, r;
	printf("Enter the length,  breadth and radus  of rectangle  respectively : \n");
	scanf("%f %f %f", &l , &b ,&r );
	
	printf("The area and perimeter of rectangle are %.2f and %.2f respectively.", l*b, 2*(l+b)) ;
	printf("\nThe area and circumference of Circle are %.2f and %.2f respectively. ", pi*r*r, 2*pi*r);
	return 0;
}
