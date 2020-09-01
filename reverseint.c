#include<stdio.h>

int reversed(int num){
	int remainder,rev=0;
	while(num!=0){
		remainder=num%10;
		rev=rev*10+remainder;
		num/=10;
			}
			return rev;
	}

int main(){
	int n;
	printf("enter the number to reverse");
	scanf("%d",&n);
	printf("\n\nreversed : %d ",reversed(n));
	
	return 0;
	}
