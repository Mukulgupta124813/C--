#include <iostream>
using namespace std;

int binarySearch(int arr[],int f,int l,int key){
	int mid = (f+l)/2;
	if(f==l){
		cout<<"element not found!"<<endl;
		return 0;
	}
	if(key==arr[mid]){
		cout<<"Found! at index: "<<mid+1;
		return 0;
	}
	else if(key>mid){
		return binarySearch(arr,mid+1,l,key); 
	}
	else{
		return binarySearch(arr,f,mid-1,key); 
	}
}

int main(){
    int n;
	cout<<"Enter the number\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to find\n";
    cin>>key;
    binarySearch(arr,0,n-1,key);
    return 0;
}
