#include<stdio.h>

int main(){
	int i=1,j=1;
	for(i=1;i<5;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}printf("\n");
	}printf("\n");
	for(i=4;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
	}
	
	
	
	return 0;
}
