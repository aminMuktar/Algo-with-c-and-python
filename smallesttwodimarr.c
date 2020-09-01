#include<stdio.h>
int main(){
  int row=3,col=3,i,j;
int arr[3][3]={{1,4,2},{0,3,5},{6,8,7}};
int min=arr[0][0];
for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   // printf(" %d ",arr[i][j]);
    if(arr[i][j]<min){
      min=arr[i][j];
    }
  }
  printf("%d",min);
  printf("\n");
}


return 0;
}
