#include<stdio.h>

int min_val(int arr[10],int n){
    int min=arr[0],pos;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            break;
            pos=i;
        }
    }
    return pos;
}
int max_val(int arr[10],int n){
    int max=arr[0],pos;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            break;
            pos=i;
        }
    }
    return pos;
}
void swap(int arr[10],int n){
    int min=min_val(arr,n);
    int max=max_val(arr,n);
    int temp=min;
        min=max;
        max=temp;
        printf("after swap min=%d max=%d",min,max);
       
}
void read(int arr[10],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int arr[10],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int arr[10],n;
    scanf("%d",&n);
    read(arr,n);
    printf("%d",min_val(arr,n));
    printf("%d",max_val(arr,n));
  /*
   * display(arr,n);
    swap(arr,n);
    display(arr,n);
    */
   return 0;
}
