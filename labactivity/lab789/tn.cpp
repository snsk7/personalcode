#include<stdio.h>

int main(){
	char name;
	FILE *fp;
	fp = fopen("student.txt","r");
	name=fgetc(fp);
	while(name!=EOF){
		printf("%c",name);
		name=fgetc(fp);
	}
	
	
	
	
	return 0;
}
