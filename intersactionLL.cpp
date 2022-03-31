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

void insertAtTail(node* &head1,int val){
     
     node* n = new node(val);
     if(head1==NULL){
         head1=n;
         return;
     }
     node* temp=head1;
     while(temp->next!=NULL){
         temp=temp->next;
    }
    temp->next =n;
}


void display(node* head1){
    node* temp=head1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int length(node* head1){
    node* temp=head1;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int intersection(node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        if(ptr1!=NULL && ptr2!=NULL){
            return ptr1->data;
        }
    }
    return -1;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    insertAtTail(head1,7);
    insertAtTail(head2,10);
    insertAtTail(head2,20);
    insertAtTail(head2,30);
    insertAtTail(head2,40);
    display(head1);
    display(head2);
    return 0;
}