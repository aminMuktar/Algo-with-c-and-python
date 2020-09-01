#include<stdio.h>
int f(int num){
	int y;
	if(num==0){
		return 1;
		}
	else 
	{
		y=2*f(num-1);
		
		return y;
		}
			return 0;
	}
int main(){
	int n;
	scanf("%d",&n);
	printf("2 power of %d is %d",n,f(n));
	
	return 0;
	}
