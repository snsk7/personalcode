#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char name[100];
	char *desc;
	
	strcpy(name,"Rihana kc");
	printf("%s",name);
	desc=(char*)malloc(24*sizeof(char));
	if(desc==NULL)
		printf("error");
	else
		strcpy(desc,"Rihana kc is a teacher");
	printf("%s\n",desc);
	desc=(char*)realloc(desc,100*sizeof(char));
	if(desc==NULL)
		printf("error");
	else
		strcat(desc,".she teaches well");
	printf("New text: %s\n",desc);
	
	return 0;
}
