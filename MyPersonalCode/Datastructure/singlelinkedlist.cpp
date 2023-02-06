#include<iostream>

class node;
void insert(int x);
void insertatlast(int x);
void insertatgivenpos(int pox,int x);
void delfirstelement();
void dellastelement();
void delfromgivenpos(int pos);
void search(int x);
void sortelement();
void reverselist();
void insertinsortedarrray(int x);
void display();

int main(){
    insert(3433);
    insert(45);
    insert(856);
    insert(564);
    insert(23);
    insert(8);
    insert(77);
    insert(644);
    insert(2);
    insert(78);
    insert(65);
    insert(23);
    insert(745);
    insert(35);
    display();
    sortelement();
    display();
    insertinsortedarrray(3434);
    display();

    return 0;
}

class node{
    public:
    int data;
    node* next;
};
node* head = NULL;
int count = 0;

void insert(int x){
    node* tempnode = new node;
    tempnode->data = x;
    tempnode->next = head;
    head = tempnode;
    count++;
}

void insertatlast(int x){
    node *ptr = head,*tempnode = new node;;
    while(ptr != NULL){
        if(ptr->next->next == NULL){
            ptr->next->next = tempnode;
            tempnode->data = x;
            tempnode->next = NULL;
            return;
        }
        ptr=ptr->next;
    }count++;
}

void  insertatgivenpos(int pos,int x){
    if(pos == 1){
        insert(x);
    }else if(pos == count){
        insertatlast(x);
    }else{
        node *tempnode = new node,*ptr = head;
        for(int i=1;i<pos-1;i++){
            ptr = ptr->next;
        }tempnode->next = ptr->next;
        ptr->next = tempnode;
        tempnode->data =  x;
        count++;
    }
}

void delfirstelement(){
    node *ptr = head;
    head = ptr->next;
    delete ptr;
    count--;
}

void dellastelement(){
    if(count == 1){
        delfirstelement();
    }else{
       node *ptr = head,*tempnode;
       while(ptr->next->next != NULL){
           ptr=ptr->next;
       }tempnode = ptr->next;
       ptr->next = NULL;
       delete tempnode;
       count--;
    }
}

void delfromgivenpos(int pos){
    if(pos == 1){
        delfirstelement();
    }else if(pos-1 == count){
        dellastelement();
    }else if(pos-1 < count && pos > 1){
        node *ptr = head,*tempnode;
        for(int i=1;i<pos-1;i++){
            ptr=ptr->next;
        }tempnode = ptr->next;
        ptr->next = tempnode->next;
        delete tempnode;
        count--;
    }else{
        std::cout<<"Invalid position! \n";
    }
}

void search(int x){
    node *ptr=head;int pos = 0,k=0;
    for(int i=pos;i<=count;i++){
        pos++;
        if(ptr->data == x){
            std::cout<<"Element at position "<<pos<<std::endl;
            k++;
        }ptr=ptr->next;
    }if(k == 0){
        std::cout<<"No such element found \n";
    }
}

void sortelement(){
    node *ptr = head,*tempnode;int hold;
    while(ptr!=NULL){
        tempnode = ptr->next;
        while(tempnode!=NULL){
            if(tempnode->data < ptr->data){
                hold = tempnode->data;
                tempnode->data = ptr->data;
                ptr->data = hold;
            }tempnode=tempnode->next;
        }ptr=ptr->next;
    }
}

void reverselist(){
    node* ptr = head,*prev = NULL,*next = NULL;
    while(ptr!=NULL){
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }head = prev;
}

void insertinsortedarrray(int x){
    node *newnode = new node,*ptr = head,*tempnode;int num = 0;
    while(ptr!=NULL){
        if(ptr == head){
            if(x < ptr->data){
            newnode->data = x;
            newnode->next = ptr;
            head = newnode;
            return;
            }
        }else{
            if(x <= ptr->data){
                num = ptr->data;
                ptr->data = x;
                tempnode = ptr->next;
                ptr->next = newnode;
                newnode->data = num;
                newnode->next = tempnode;
                return;
            }
        }if(ptr->next == NULL){
            newnode->data = x;
            newnode->next = NULL;
            ptr->next = newnode;
            return;
        }ptr=ptr->next;
    }
}

void display(){
    node* ptr = head;
    while(ptr!=NULL){
        std::cout<<ptr->data<<" ";
        ptr=ptr->next;
    }std::cout<<"\n";
}