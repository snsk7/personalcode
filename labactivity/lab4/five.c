#include<stdio.h>
int main(){
	int i;
	while(true){
		printf("enter a number:\n");
		scanf("%d", &i);
		if(i%5 == 0){
			break;
		}
	}
	return 0;
}
