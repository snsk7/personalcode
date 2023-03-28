#include<stdio.h>

void fib(int n){
	static int a=0,b=1,c;
	if(n>0){
		c=a+b;
		a=b;
		b=c;
		printf("%d \t",c);
		fib(n-1);
	}
		
}

int main(){
	int n;
	scanf("%d",&n);
	fib(n);
	
	
	
	return 0;
}
