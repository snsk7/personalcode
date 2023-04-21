#include<stdio.h>

int main(){
	int rollno,percentage;
	char name[50];
	FILE *fp;
	fp = fopen("student.txt","w");
	printf("Enter name: ");
	scanf("%s",&name);
	printf("Enter roll no. :");
	scanf("%d",&rollno);
	printf("Enter percentage:");
	scanf("%d",&percentage);
	fprintf(fp,"Name: %s\tRoll_No: %d\tPercentage: %d",&name,rollno,percentage);
	fclose(fp);
	
	
	
	
	return 0;
}
