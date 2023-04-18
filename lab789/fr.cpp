#include<stdio.h>

int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}int *par;
	par=&arr[0];
	for(int i=0;i<5;i++){
		printf("Enter %d value: %d\n",i+1,*(par+i));
	}
	
	
	
	
	return 0;
}
