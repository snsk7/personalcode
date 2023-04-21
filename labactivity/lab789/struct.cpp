#include<stdio.h>

struct Book{
	char name[50],author[50];
	struct published_date{
		int day,month,year;
	}published_date;
	int price;
};

int main(){
	struct Book bd[100];int i;
	for(i=0;i<100;i++){
		printf("Enter name of Book:");
		scanf("%s",&bd[i].name);
		printf("Enter author name:");
		scanf("%s",&bd[i].author);
		printf("Enter published date(d/m/y):");
		scanf("%d%d%d",&bd[i].published_date.day,&bd[i].published_date.month,&bd[i].published_date.year);
		printf("Enter price: ");
		scanf("%d",&bd[i].price);
	}
	for(i=0;i<100;i++){
		printf("Book Name:%s\tBook AuthorName:%s\tBook Price:%d\tBook Publilshed date:%d/%d/%d\n",bd[i].name,bd[i].author,bd[i].price,bd[i].published_date.day,bd[i].published_date.month,bd[i].published_date.year);
	}
	
	
	return 0;
}
