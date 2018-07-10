
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of two variables a & b:");
    scanf("%d%d",&a,&b);
    printf("\nNow---\na=%d\nb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter swapping---\na=%d\nb=%d",a,b);

    return 0;
}
