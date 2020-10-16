#include <stdio.h>
void read_array(int arr[10],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
int find_small(int arr[10],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[10],n,i;
    scanf("%d",&n);
    read_array(arr,n);
    printf("smallest = %d ",find_small(arr,n));
    return 0;
}
