#include<stdio.h>
int main(){
	int row=3;
	int col=2;
	int arr[row][col],i,j;
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf("enter the number at row %d, col %d",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf("%d ,",arr[i][j]);
		}
	}
	
	return 0;
	}
