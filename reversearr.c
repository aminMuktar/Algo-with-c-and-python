#include<stdio.h>
int main(){
int arr[10]={4,6,7,1,2,3,9,8,5,55};
int front,rear,temp,i;
front=0;
rear=9;
while(front<rear){
temp=arr[front];
arr[front]=arr[rear];
arr[rear]=temp;
front++;
rear--;
}
for(i=0;i<10;i++){
printf("%d ,",arr[i]);

}
return 0;
}
