#include<stdio.h>
int strrecur(char *str){
	if(*str=='\0'){
		return 0;
		}
	else{
		return 1+strrecur(str+1);
		}
	}
int main(){
	char arr[]="GeeksforGeeks";
	printf("length :%d ",strrecur(arr));
	return 0;
	}
