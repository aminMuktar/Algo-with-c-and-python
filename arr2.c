#include<stdio.h>
void func1(int value);
void func2(int *ref,int size);
int main(){
	int arr[5]={2,3,4,5,6};
	func1(arr[3]);
	printf("\n");
	func2(arr,5);
	printf("\n");
	return 0;
	}
void func1(int val){
	printf("recieved value is %d",val);
	
	}
void func2(int *ref,int size){
	int i=0;
	
	for(i=0;i<size;i++){
		
		printf("%d ",*(ref+i));
		}
	
	}
