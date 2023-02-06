#include<iostream>

int top = -1;

void isempty(int size){
    if(top >= size){
        return;
    }else
        top++;
}

void enqueue(int x,int queue[],int size){
    isempty(size);
    queue[top] = x;
}

void dequeue(int queue[]){
    if(top == -1){
        return;
    }else{
        if(top == 0){
            queue[0] = 0;
        }else{
            for(int i=0;i<top-1;i++){
                queue[i] = queue[i+1];
            }queue[top] = 0;
            top--;
        }
    }
}

void display(int queue[]){
    for(int i=0;i<=top;i++){
        std::cout<<queue[i]<<" ";
    }std::cout<<"\n";
}

int main(){
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);
    enqueue(234,arr,size);
    enqueue(34,arr,size);
    display(arr);
    dequeue(arr);
    display(arr);




    return 0;
}