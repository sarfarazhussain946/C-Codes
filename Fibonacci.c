#include <stdio.h>

int main()
{
    int f1=1,f2=1,fn,i,n;
    printf("Enter the number upto which you want to print the fibonacci series:");
    scanf("%d",&n);
    printf("%d\n%d\n",f1,f2);
   for(i=0;i<n-2;i++)
    {
        fn=f1+f2;
        f1=f2;
        f2=fn;
        
            printf("%d\n",fn);
    } 
}

