#include<stdio.h>

int main(){
	float unit,cost;int cid;
	char name[50];
	printf("Enter customer id: ");
	scanf("%d",&cid);
	printf("Enter unit: ");
	scanf("%f",&unit);
	printf("Enter name:");
	scanf("%s",&name);
	if(unit <= 199)
		cost=unit*1.20;
	else if(unit == 200 && unit <400)
		cost=unit*1.50;
	else if(unit == 400 && unit <600)
		cost=unit*1.80;	
	else if(unit >= 600)
		cost=unit*2.0;
	else 
		cost=100;
	
	if(cost > 400){
		cost = cost + ((15/100)*cost);
	}else if(cost < 100)
		cost=100;
	printf("Dear %s you need to pay %f",name,cost);
	
	
	
	return 0;
}
