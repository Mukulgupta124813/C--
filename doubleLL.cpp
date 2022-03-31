#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
    node(int n){
        data = n;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(node* &head,int val){
 
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}

void deleteEle(node* &head,int key){
    node* temp=head;

    while(temp->data!=key){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;

    node* todelte=temp;
    delete todelte;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    deleteEle(head,3);
    display(head);
}
