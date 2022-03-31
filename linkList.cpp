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

void insertAthead(node* &head,int val){
    node* n =new node(val);
    n->next=head;
    head=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deletionAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

node* reversek(node* &head,int k){
    node* prvptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count=0;
    while(currptr!=NULL && count!=k){
        nextptr=currptr->next;
        currptr->next=prvptr;
        prvptr=currptr;
        currptr=nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next = reversek(nextptr,k);
    }

    return prvptr;
}

void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }

    temp->next=startNode;
}

bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast);
    fast=head;
    while(slow->next != fast->next ){
        fast=fast->next;
        slow=slow->next;
    }

    slow->next=NULL;
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
    insertAtTail(head,8);
    insertAtTail(head,9);
    // insertAthead(head,4);
    // display(head);
    makeCycle(head,4);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    // int k=2;
    // node* newHead=reversek(head,k);
    // display(newHead);
    // cout<<search(head,3)<<endl;
    // deletion(head,2);
    display(head);
    return 0;
}