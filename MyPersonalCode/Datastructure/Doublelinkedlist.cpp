#include<iostream>

class node{
    public:
    node* left;
    int data;
    node *right;
};
node *head = NULL;int count = 0 ;

void insert(int x){
    node *newnode = new node;
    if(head == NULL){
        newnode->left = NULL;
        newnode->data = x;
        newnode->right = head;
        head = newnode;count++;
    }else{
        head->left = newnode;
        newnode->left = NULL;
        newnode->data = x;
        newnode->right = head;
        head = newnode;
        count++;
    }
}

void insertatend(int x){
    node *newnode = new node,*ptr = head;
    while(ptr->right != NULL){
        ptr=ptr->right;
    }ptr->right = newnode;
    newnode->left = ptr;
    newnode->data = x;
    newnode->right = NULL;
    count++;
}

void insertatgivenpos(int pos,int x){
    if(pos == 1){
        insert(x);
    }else if(pos-1 == count){
        insertatend(x);
    }else if(pos > 1 && pos <= count){
        node *ptr = head,*newnode = new node;
        for(int i=1;i<pos-1;i++){
            ptr=ptr->right;
        }newnode->left = ptr;
        newnode->data = x;
        newnode->right = ptr->right;
        ptr->right = newnode;
        count++;
    }else{
        std::cout<<"Invalid position !\n";
    }
}

void delfirstelement(){
    node *tempnode = head;
    head = head->right;
    head->left = NULL;
    delete tempnode;
    count--;
}

void dellastelement(){
    node *ptr = head;
    while(ptr->right != NULL){
        if(ptr->right->right == NULL){
            delete ptr->right;
            ptr->right = NULL;
            count--;
            return;
        }ptr=ptr->right;
    }
}

void delfromgivenpos(int pos){
    if(pos == 1){
        delfirstelement();
    }else if(pos == count){
        dellastelement();
    }else if(pos > 1 && pos < count){
        node *ptr = head,*tempnode;
        for(int i=1;i<pos;i++){
            ptr=ptr->right;
        }tempnode=ptr;
        ptr->left->right = tempnode->right;
        tempnode->right->left = tempnode->left;
        delete tempnode;
        count--;
    }
}

void search(int x){
    node *ptr = head;int pos = 0,co=0;
    while(ptr != NULL){
        pos++;
        if(ptr->data == x){
            std::cout<<"Element found at index "<<pos<<std::endl;co++;
        }ptr=ptr->right;
    }if(co == 0){
        std::cout<<"element not found "<<std::endl;
    }
}

void sort(){
    node *ptr = head,*tempnode;int data = 0;
    while(ptr!=NULL){
        tempnode = ptr->right;
        while(tempnode!=NULL){
            if(tempnode->data < ptr->data){
                data = tempnode->data;
                tempnode->data = ptr->data;
                ptr->data = data;
            }tempnode=tempnode->right;
        }ptr=ptr->right;
    }
}

void insertinsort(int x){
    node *ptr=head,*tempnode = new node;
    sort();
    while(ptr->right!=NULL){
        if(ptr->data > x){
            tempnode->left = ptr;
            tempnode->data = ptr->data;
            ptr->data = x;
            tempnode->right = ptr->right;
            ptr->right = tempnode;
            tempnode->right->left = tempnode;
            count++;
            return;
        }ptr=ptr->right;
    }if(ptr->data > x ){
        tempnode->data = ptr->data;
        ptr->data = x;
        ptr->right = tempnode;
        tempnode->left = ptr;
        tempnode->right = NULL;
        count++;
        return;
    }else{
        insertatend(x);
    }
}

void reverse(){
    node *ptr = head,*prev = NULL,*next = NULL;
    while(ptr!=NULL){
        next = ptr->right;
        prev = ptr->left;
        ptr->left = next;
        ptr->right = prev;
        ptr = next;
    }head = prev->left;
}

void display(){
    node *ptr = head;
    while(ptr!=NULL){
        std::cout<<ptr->data<<" ";
        ptr=ptr->right;
    }std::cout<<"\n";
}

int main(){
    insert(34);
    insert(6347);
    insert(134);
    insert(2334);
    insert(343);
    display();
    insertatend(52);
    display();
    insertatgivenpos(6,3444);
    display();
    delfirstelement();
    display();
    dellastelement();
    display();
    delfromgivenpos(4);
    display();
    sort();
    display();
    reverse();
    display();
    insertinsort(6345);
    display();



    return 0;
}