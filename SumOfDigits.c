#include <stdio.h>
int length(int x){
    int count=0,a;
    while(x>0){
        a=x%10;
        count++;
        x=x/10;
    }
    return count;
}
int main() {
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int sum=0, i ,temp=0; int l;
	l=length(n);
	for(i=0;i<l;i++){
	    temp=n%10;
	    sum=sum+temp;
	    n=n/10;
	    }
	 printf("The sum of digits is:%d",sum);
	return 0;
}



