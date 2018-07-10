/*The Perfect number, a positive integer that is equal to the sum of its proper divisors. 
The smallest perfect number is 6, which is the sum of 1, 2, and 3*/

#include<stdio.h>

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<n;i++){
	    if(n%i==0)
	        sum=sum+i;
	}
	if(sum==n)
	    printf("Yeah...Its a perfect number !");
	else
	    printf("Oops ...Its not perfect, Try again ! ");

	return 0;
}



