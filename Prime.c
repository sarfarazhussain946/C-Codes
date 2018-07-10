#include<stdio.h>

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int f=0,i;
	for(i=2;i<n;i++){
	    if(n%i==0)
	        f=1;
	        break;
	}
	if(f==0)
	    printf("Yes it is Prime :)");
	else
	    printf("Oops...this is not Prime !");

	return 0;
}



