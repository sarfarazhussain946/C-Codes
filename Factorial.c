#include <stdio.h>
 
int main()
{
    int n,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        if(i==n)
       {
           printf("%d",i);
       }
       else{
            printf("%d X ",i);
       }
    }
    printf("\nFactorial is %d",fact);
   
   return(0);
 
}

