#include<stdio.h>

union student{
	int roll,marks;
};

int main(){
	union student std;
	printf("enter Roll no: ");
	scanf("%d",&std.roll);
	printf("Roll no. : %d\n",std.roll);
	printf("Enter marks:");
	scanf("%d",&std.marks);
	printf("Marks: %d",std.marks);
	
	
	
	
	
	return 0;
}
