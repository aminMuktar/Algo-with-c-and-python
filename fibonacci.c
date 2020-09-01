#include<stdio.h>
void fibonacci(int num){
	int first=0,second=1;
	if(num<2){
		printf("%d",second);
		}
		else{
				for(int i=0;i<=num;i++){
					int temp=first+second;
					printf("%d, ",temp);
					first=second;
					second=temp;
					}
			
			}
}
	
int main(){
	int num;
	scanf("%d",&num);
	fibonacci(num);
	return 0;
	}
