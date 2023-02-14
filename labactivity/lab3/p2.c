#include<stdio.h>

int main(){
	char a;int i, count=0;
	char vo[10] = {'a','e','i','o','u','A','E','I','O','U'};
	scanf("%c",&a);
	for(i=0;i<10;i++){
		if(a == vo[i]){
			printf("Vowel");
			count++;
		}
	}if(count == 0){
		printf("consonant");
	}
	
	
	
	
	
	return 0;
}
