/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream.h>
#include<stack>

void reverse(char *c,int n)
{
    int i;
    stack <char> s;
    for(i=0;i<n;i++)
    {
        s.push(c[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=s.top;
        s.pop;
    }
    
}

int main()
{
    char c[20];
    printf("Enter a string");
    gets(c);
    reverse(c,strlen(c));
    printf("%s",c);

    return 0;
}

