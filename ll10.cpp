#include<bits/stdc++.h>
using namespace std;
 
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertattail(node* &head,int val){
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
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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

int main(){
     node* head=NULL;
    int n,k=2,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        insertattail(head,temp);
    }

    node* newhead = reversek(head,k);
    display(newhead);
    return 0;
}