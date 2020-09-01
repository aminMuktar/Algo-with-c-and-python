#include<stdio.h>
float converted(float cel){
	return (cel*1.8)+32;
	}
int main(){
	float cel;
	scanf("%f",&cel);
	printf("fahreniet value = %f\n",converted(cel));
	return 0;
	}
