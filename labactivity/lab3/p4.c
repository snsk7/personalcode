#include<stdio.h>

int main(){
	char a;
	scanf("%s",&a);
	if(a == 69)
		a=101;
	else if(a == 86)
		a=118;
	else if(a == 71)
		a=103;
	else if(a == 65)
		a=97;
	else if(a == 70)
		a=102;
	switch (a){
		case 'e':
			printf("excellent");
			break;
		case 'v':
			printf("very good");
			break;
		case 'g':
			printf("good");
			break;
		case 'a':
			printf("average");
			break;
		case 'f':
			printf("fail");
			break;
		default :
			printf("invalid grade");
	}
	
	
	
	
	
	return 0;
}
