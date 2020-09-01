#include<stdio.h>
int sum(int n){
	int remainder,div;
	if(n<=0){
		return 0;
		}
	else{
		remainder=n%10;
		div=n/10;
		return remainder+sum(div);
		}
	
	}
int main(){
	int n;
	scanf("%d",&n);
	printf("sum of digits: %d",sum(n));
	return 0;
	}
