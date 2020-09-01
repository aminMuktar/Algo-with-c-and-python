#include<stdio.h>
int isEven(int num){
		return (num%2==0) ? 1 : 0;
		}
int main(){
	int num;
	printf("enter the number");
	scanf("%d ",&num);
	printf("%d",isEven(num));
	return 0;
	}
	
