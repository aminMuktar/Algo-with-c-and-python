#include<stdio.h>
float simpleInterest(int p,int r,int t);
int main(){
	int p,t,r;
	printf("enter principle");
	scanf("%d",&p);
	printf("enter rate");
	scanf("%d",&r);
	printf("enter time");
	scanf("%d",&t);
	printf("answer= %f",simpleInterest(p,r,t));
	return 0;
	}
	float simpleInterest(int p,int r,int t){
		float interest=(float)(p*r*t)/100;
		return interest;
		}
