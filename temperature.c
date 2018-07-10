#include <stdio.h>

int main()
{
    float c,f;
    printf("****  This program is written to convert temperature in 'C to Fahrenheit ****\n");
    printf("\nEnter the temperature in Celcius:");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("\nThe temperature in 'C:%f\n\nThe temperature in Fahrenheit:%f\n",c,f);

    return 0;
}
