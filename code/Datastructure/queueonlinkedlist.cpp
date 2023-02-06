#include<iostream>

class node{
    public:
    int data;
    node *next = NULL;
};
node *head = NULL,*tail = NULL;

int isempty(){
    if(head == NULL){
        std::cout<<"empty queue !!!\n";
        exit(1);
    }return 0;
}

void enqueue(int x){
    if(head == NULL){
        node *newnode = new node;
        newnode->data = x;
        newnode->next = head;
        head = newnode;
        tail = newnode;
    }else{
        node *newnode = new node;
        newnode->data = x;
        newnode->next = head;
        head = newnode;
    }
}

void dequeue(){
    if(head == tail){
        node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }else{
        node *ptr = head,*temp;
        while(ptr->next != tail){
            ptr=ptr->next;
        }ptr->next = NULL;
        temp = tail;
        delete temp;
        tail = ptr;
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
    enqueue(23423);
    enqueue(234236);
    enqueue(234235);
    enqueue(34233);
    display();
    dequeue();
    display();
    dequeue();
    dequeue();
    dequeue();
    display();




    return 0;
}