#include<stdio.h>

int main(){
	int n,sum=0,i=0;
	scanf("%d",&n);
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("sum = %d\n",sum);
	sum=0,i=0;
	scanf("%d",&n);
	do{
		sum+=i;
		i++;
	}while(i<=n);
	printf("sum = %d\n",sum);
	sum=0,i=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		sum+=i;
	printf("sum = %d",sum);
	
	
	
	
	
	
	return 0;
}
