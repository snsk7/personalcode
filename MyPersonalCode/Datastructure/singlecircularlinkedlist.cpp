#include<iostream>

class node{
    public:
    int data;
    node* next;
};
node *head = NULL,*tail = NULL;int count = 0;

void insert(int x){
    node *newnode = new node;
    if(head == NULL){
        head = newnode;
        newnode->data =  x;
        newnode->next = head;
        tail = head;count++;
    }else{
        tail->next = newnode;
        newnode->data = x;
        newnode->next = head;
        head = newnode;count++;
    }
}

void insertatend(int x){
    node *newnode = new node;
    newnode->data = x;
    newnode->next = tail->next;
    tail->next = newnode;
    tail = newnode;count++;
}

void insertatgivenpos(int pos,int x){
    if(pos == 1){
        insert(x);
    }else if(pos == count+1){
        insertatend(x);
    }else if(pos > 1 && pos <= count){
        node *ptr = head,*newnode = new node;
        for(int i=1;i<pos-1;i++){
            ptr=ptr->next;
        }newnode->data = x;
        newnode->next = ptr->next;
        ptr->next = newnode;
        count++;
    }else
        std::cout<<"Invalid position! "<<std::endl;
}

void delfirstelement(){
    node *temp = head;
    head = temp->next;
    tail->next = head;
    delete temp;
    count--;
}

void dellastelement(){
    node *ptr = head;
    while(ptr->next != tail){
        ptr=ptr->next;
    }ptr->next = head;
    tail = ptr;
    count--;
}

void delfromgivenposition(int pos){
    if(pos ==  1){
        delfirstelement();
    }else if(pos == count){
        dellastelement();
    }else if(pos > 1 && pos <= count){
        node *ptr = head,*temp;
        for(int i=1;i<pos-1;i++){
            ptr = ptr->next;
        }temp = ptr->next;
        ptr->next = temp->next;
        delete temp;
        count--;
    }else{
        std::cout<<"Invalid positon! "<<std::endl;
    }
}

void search(int x){
    node *ptr = head;int pos = 0,co = 0;
    while(ptr != tail){
        pos++;
        if(x == ptr->data){
            std::cout<<"element at position "<<pos<<std::endl;co++;
        }ptr = ptr->next;
    }if(x == tail->data){
        pos++;
        std::cout<<"element at position "<<pos<<std::endl;co++;
    }
    if(co == 0 ){
        std::cout<<"invalid element! \n";
    }
}

void sortelement(){
    node *ptr = head,*tempnode;int hold;
    for(int i=1;i<=count;i++){
        tempnode = ptr->next;
        for(int i=1;i<=count;i++){
            if(tempnode->data > ptr->data){
                hold = tempnode->data;
                tempnode->data = ptr->data;
                ptr->data = hold;
            }tempnode=tempnode->next;
        }ptr=ptr->next;
    }
}

void insertinsort(int x){
    node *ptr = head,*newnode = new node;
    while(ptr!=tail){
        if(ptr == head){
            if(x < ptr->data){
                newnode->data = x;
                newnode->next = head;
                head = newnode;
                tail->next = head;
                count++;
                return;
            }
        }else if(x < ptr->data){
            newnode->data = ptr->data;
            ptr->data = x;
            newnode->next = ptr->next;
            ptr->next = newnode;
            count++;
            return;
        }ptr=ptr->next;
    }if(x > tail->data){
        newnode->data = x;
        newnode->next = head;
        tail->next = newnode;
        tail = newnode;
        count++;
        return;
    }
}

void display(){
    node *ptr = head;
    while(ptr!=tail){
        std::cout<<ptr->data<<" ";
        ptr=ptr->next;
    }std::cout<<tail->data<<" ";
    std::cout<<"\n";
}

int main(){
    insert(23);
    insert(346);
    insert(6);
    insert(6543);
    insert(2);
    insert(34);
    display();
    insertatend(3432);
    display();
    insertatgivenpos(8,534);
    display();
    delfromgivenposition(8);
    display();
    sortelement();
    display();
    insertinsort(23);
    display();
    


    return 0;
}