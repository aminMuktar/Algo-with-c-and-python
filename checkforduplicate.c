#include<stdio.h>
int main(){
    int arr[10],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                printf("the array have duplicate at %d and %d\n",i,j);
                break;
            }
        }
    }
    return 0;
}
