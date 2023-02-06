#include<iostream>

class node{
    public:
    int data;
    node *next;
};
node *head = NULL;

void isempty(){
    if(head == NULL){
        std::cout<<"Empty stack !!!\n";
        return;
    }
}

void push(int x){
    node *newnode = new node;
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}

void pop(){
    isempty();
    if(head->next == NULL){
        node *temp = head;
        delete temp;
        head = NULL;
        return;
    }else{
        node *temp = head;
        head = temp->next;
        delete temp;
        return;
    }
}

void display(){
    node *ptr = head;
    while(ptr != NULL){
        std::cout<<ptr->data<<" ";
        ptr=ptr->next;
    }std::cout<<"\n";
}

int main(){
    push(32);
    push(64);
    push(765);
    push(7);
    push(7658);
    push(77);
    push(34);
    push(86);
    push(4);
    push(87);
    display();
    pop();
    display();



    return 0;
}