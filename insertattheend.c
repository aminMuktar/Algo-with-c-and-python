#include<stdio.h>
int main(){
    int data[10],n,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    printf("enter the num");
    scanf("%d",&d);
        data[n]=d;
    for(int i=0;i<=n;i++){
        printf("num %d=%d",i,data[i]);
    }
    return 0;
}
