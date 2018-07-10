/********* Left Shift two bits to the left *********/
#include<stdio.h>

void main(){
    int x,y;
    printf("Enter data to be left shifted :");
    scanf("%d",&x);
    x<<=3;
    y=x;
    printf("left shifted value: %d",y);
}
