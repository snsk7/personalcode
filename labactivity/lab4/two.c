#include<stdio.h>

int main(){
	int n,i=1;
	scanf("%d",&n);
	while(i<=10){
		printf("%d * %d = %d\n",n,i,i*n);
		i++;
	}printf("\n\n");i=1;
	do{
		printf("%d * %d = %d\n",n,i,i*n);
		i++;
	}while(i<=10);
	printf("\n\n");
	for(i=1;i<=10;i++)
		printf("%d * %d = %d\n",n,i,i*n);
	
	
	
	
	return 0;
}
