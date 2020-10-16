/*
 * step 1: set I=N (N=number of elements in an array)
 * step 2: repeat step 3 and 4 while I >= POS
 * step 3: set A[I+1]=A[I]
 * step 4: set I=I-1 end loop
 * step 5: N=N+1
 * step 6: set A[pos]=Val
 * exit
 * 
 */
#include <stdio.h>
int main(){
    int arr[10],n,pos,i,val;
    printf("how elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nenter the number to be inserted");
    scanf("%d",&val);
    printf("\nenter the position to be added");
    scanf("%d",&pos);
    for(i=n-1;i>pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    n=n+1;
    printf("the array after insertion of %d is ",val);
    for(i=0;i<n;i++)
        printf("arr[%d] = %d",i,arr[i]);
    return 0;
}
