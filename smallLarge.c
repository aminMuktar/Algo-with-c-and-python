#include<stdio.h>
int main(){
int arr[10];
int i,min,max;
for(i=0;i<10;i++){
printf("enter the value at position %d ",i);
scanf("%d",&arr[i]);
}
max=min=arr[0];
for(i=0;i<10;i++){
if(arr[i]<min){
min=arr[i];
}
if(arr[i]>max){
max=arr[i];
}
}
/*max=arr[0];
for(i=0;i<10;i++){
if(arr[i]>max){
max=arr[i];

}
}*/
printf("max = %d and min=%d ",max,min);
return 0;
}
