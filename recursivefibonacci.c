#include<stdio.h>
int fibonaci(int n){
	if(n<=1){
		return 1;
		}
	else{
		return fibonaci(n-1)+fibonaci(n-2); 
		}
	
	}
int main(){
	int num;
	scanf("%d",&num);
	printf("%d , ",fibonaci(num));
	return 0;
	}
