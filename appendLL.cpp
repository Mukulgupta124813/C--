#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int n){
        data = n;
        next = NULL;
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
    temp->next =n;
}


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int length(node* head){
    node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

node* appendK(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail=head;

    int l=length(head);
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;

    return newHead;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    node* newHead = appendK(head,3);
    display(newHead);
    return 0;
}