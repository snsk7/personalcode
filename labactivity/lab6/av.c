#include<stdio.h>
#define pi 3.14

void area(float r){
	printf("area = %f\n",pi*r*r);
}

void volume(float r){
	printf("volume = %f",(4/3)*pi*r*r*r);
}

int main(){
	float r;
	scanf("%f",&r);
	area(r);
	volume(r);
	
	
	
	
	
	return 0;
}
