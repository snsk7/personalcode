#include<stdio.h>

int main(){
	int a;
	int *ab;
	scanf("%d",&a);
	ab=&a;
	printf("address: %u value:%d\t",ab,*ab);
	
	
}
