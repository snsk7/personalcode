#include<stdio.h>

int main(){
    int arr[5];
    int (*ptr)[5];
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    ptr=&arr;
    int spnum=0;
    for(int i=0;i<4;i++){
        spnum=*ptr[i]+*ptr[i+1];
    }
    printf("the sum is %d\n",spnum);
    
    
    
    
    return 0;
}