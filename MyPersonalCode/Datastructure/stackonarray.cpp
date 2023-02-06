#include<iostream>
int top = -1;

void isfull(int size){
    if(top >= size){
        std::cout<<"No More Space !!!"<<std::endl;
        return;
    }else
        top++;
}

int isempty(int size){
    if(top == -1){
        std::cout<<"empty !!!\n";
        return 0;
    }return 1;
}

void push(int x,int stack[],int size){
    isfull(size);
    stack[top] = x;
}

void pop(int stack[]){
    if(isempty == 0){
        std::cout<<"stack is empty !!!\n";
    }else{
        stack[top] = 0;
        top--;
    }
}

void display(int stack[]){
    for(int i=0;i<=top;i++){
        std::cout<<stack[i]<<" ";
    }std::cout<<"\n";
}

int main(){
    int stack[10];
    int size = sizeof(stack)/sizeof(stack[0]);
    push(12,stack,size);
    push(120,stack,size);
    push(120,stack,size);
    push(120,stack,size);
    push(1233,stack,size);
    push(1266,stack,size);
    push(121,stack,size);
    push(126,stack,size);
    push(123,stack,size);
    push(122,stack,size);
    push(3242,stack,size);
    display(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    display(stack);


    return 0;
}