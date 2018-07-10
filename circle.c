#include <stdio.h>

int main()
{
    int r; float c,ar;
    float pi=3.14;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    c=2*pi*r;
    ar=pi*r*r;
    printf("The Circumference of the circle with radius %d is %f \n",r,c);
    printf("The Area of the circle with radius %d is %f ",r,ar);

    return 0;
}

