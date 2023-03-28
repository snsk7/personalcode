#include<stdio.h>

int volume(int l,int b,int h){
	int volume=l*b*h;
	return volume;
}

int volume1(){
	int l,b,h;
	scanf("%d %d %d",&l,&b,&h);
	int volume=l*b*h;
	return volume;
}

void volume2(){
	int l,b,h;
	scanf("%d %d %d",&l,&b,&h);
	int volume=l*b*h;
	printf("volume = %d",volume);
}

void volume4(int l,int b,int h){
	scanf("%d %d %d",&l,&b,&h);
	int volume=l*b*h;
	printf("volume = %d",volume);
}

int main(){
	int l,b,h;
	scanf("%d %d %d",&l,&b,&h);
	printf("Volume of box : %d",volume(l,b,h));
	printf("\n without arguements\n");
	printf("Volume of box : %d",volume1(l,b,h));
	printf("Functions only\n");
	volume2();
	printf("Arguement only\n");
	volume4(l,b,h);
	
	
	
	return 0;
}
