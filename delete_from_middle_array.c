#include <stdio.h>
int main(){
    int arr[10],i,pos,n,val;
    printf("no of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position of the element to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("the array after deletion");
    for(i=0;i<n;i++){
        printf("arr[%d] = %d",i,arr[i]);
    }
    return 0;
}
