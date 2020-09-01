#include<stdio.h>
int factorial(int num){
	if(num<=1){
		
		return 1;
		}
		else{
			
				return num*factorial(num-1);
			}
			return 0;
	
	}
int main(){
	int n;
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
	return 0;
	}

