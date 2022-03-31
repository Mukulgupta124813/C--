#include<iostream>
using namespace std;

void linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"Found! at index: "<<i<<endl;;
            return;
        }
    }
    cout<<"Notfound!"<<endl;
}

int main(){
    int n;
    cout<<"Enter:\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    linearsearch(arr,n,key);
    return 0;
}