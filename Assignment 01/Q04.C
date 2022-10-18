// WAP to read temperature in Fahrenheit and convert it into centigrade. C=5/9(F-32)
#include <stdio.h>

int main() {
	float f ;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f" ,&f);
    float c ;
    c = ((f-32)*5/9);

    printf("Equivalent temperature in celcius is %0.2f." ,c);
    return 0;
}
