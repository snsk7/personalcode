#include<stdio.h>
int main(){
	int num;
	printf("Enter any number: ");
    scanf("%d", &num);
    if((num % 5 == 0) && (num % 8 == 0))
    {
        printf("It is divisible by 5 and 8");
    }
    else
    {
        printf("It is not divisible by 5 and 8");
    }
	return 0;
}

