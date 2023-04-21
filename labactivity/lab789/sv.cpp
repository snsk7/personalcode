#include<stdio.h>

struct studen{
	char name[50];
	int rollno,percentage;
};

int main(){
	struct studen st[3];
	FILE *fp;
	fp = fopen("student.txt","w");
	for(int i=0;i<3;i++){
		printf("Enter name: ");
		scanf("%s",&st[i].name);
		printf("Enter roll no. :");
		scanf("%d",&st[i].rollno);
		printf("Enter percentage:");
		scanf("%d",&st[i].percentage);
		fprintf(fp,"Name: %s\tRoll_No: %d\tPercentage: %d\n",&st[i].name,st[i].rollno,st[i].percentage);
	}
	fclose(fp);
	
	
	
	
	return 0;
}
