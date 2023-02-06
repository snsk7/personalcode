#include<iostream>

class node{
    public:
    node *left;
    int data;
    node *right;
};
node *head = NULL,*tail = NULL;int count = 0;

void insert(int x){
    node *newnode = new node;
    if(head == NULL){
        head = newnode;tail = head;
        newnode->left = tail;
        newnode->data = x;
        newnode->right = head;
        count++;
    }else{
        head->left = newnode;
        newnode->left = tail;
        newnode->data = x;
        newnode->right = head;
        tail->right = newnode;
        head = newnode;
        count++;
    }
}

void insertatend(int x){
    if(head == NULL){
        insert(x);
    }else{
        node *newnode = new node;
        newnode->left = tail;
        tail->right = newnode;
        newnode->data = x;
        newnode->right = head;
        head->left = newnode;
        tail = newnode;
        count++;
    }
}

void insertatgivenpos(int pos,int x){
    if(pos ==  1){
        insert(x);
    }else if(pos == count+1){
        insertatend(x);
    }else if(pos > 1 && pos <=count){
        node *ptr = head,*newnode = new node;
        for(int i=1;i<pos;i++){
            ptr=ptr->right;
        }newnode->left = ptr->left;
        newnode->data = x;
        newnode->right = ptr;
        newnode->left->right = newnode;
        ptr->left = newnode;
        count++;
    }
}

void delfirstelement(){
    node *tempnode = head;
    tempnode->right->left = tail;
    tail->right = tempnode->right;
    head = tempnode->right;
    delete tempnode;
    count--;
}

void dellastelement(){
    node *tempnode = tail;
    head->left = tempnode->left;
    tail = head->left;
    tail->right = head;
    delete tempnode;
    count--;
}

void delfromgivenpos(int pos){
    if(pos == 1){
        delfirstelement();
    }else if(pos == count){
        dellastelement();
    }else if(pos < count && pos > 1){
        node *ptr = head;
        for(int i=1;i<pos;i++){
            ptr=ptr->right;
        }ptr->left->right = ptr->right;
        ptr->right->left = ptr->left;
        delete ptr;
        count--;
    }else{
        std::cout<<"invalid positon! \n";
    }
}

void search(int x){
    node *ptr = head;int pos = 0,a=0;
    do{
        pos++;
        if(ptr->data == x){
            std::cout<<"Element found at position "<<pos<<std::endl;a++;
        }ptr=ptr->right;
    }while(ptr!=head);
    if(a == 0){
        std::cout<<"Element not found \n";
    }
}

void sort(){
    node *ptr = head,*tempnode;int data;
    do{
        tempnode=ptr->right;
        while(tempnode!=head){
            if(tempnode->data < ptr->data){
                data = tempnode->data;
                tempnode->data = ptr->data;
                ptr->data = data;
            }tempnode=tempnode->right;
        }ptr=ptr->right;
    }while(ptr!=head);
}

void insertinsort(int x){
   insert(x);
   sort();
}

void reverse(){
    node *ptr = head,*prev = NULL,*next = NULL;
    do{
        next = ptr->right;
        ptr->right = ptr->left;
        ptr->left = next;
        ptr = next;
    }while(ptr != head);
    prev = tail;
    tail = head;
    head = prev;
}

void display(){
    node *ptr = head;
    do{
        std::cout<<ptr->data<<" ";
        ptr=ptr->right;
    }while(ptr != head);
    std::cout<<"\n";
}

int main(){
    insert(34);
    insert(6);
    insert(253);
    insert(235);
    insert(324);
    display();
    insertatend(342);
    display();
    insertatgivenpos(5,555);
    display();
    delfirstelement();
    display();
    dellastelement();
    display();
    delfromgivenpos(2);
    display();
    search(34);
    insert(64);
    insert(634);
    insert(6);
    insert(24);
    display();
    sort();
    display();
    insertinsort(423);
    display();
    reverse();
    display();


    return 0;
}