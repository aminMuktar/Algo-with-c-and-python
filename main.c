#include<stdio.h>
int add(int a,int b);
int main(){
	int a,b;
	printf("enter the two numbers:");
	scanf("%d %d",&a,&b);
	printf("SUM : %d ",add(a,b));
	return 0;
	}
int add(int a,int b){
	return a+b;
	
	}
