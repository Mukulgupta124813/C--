//MTYFRI
#include<bits/stdc++.h>
using namespace std;
 
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void checkAs(int arr[],int m,int n){
    int sumA=0,sumB=0;
    for(int i=0;i<m;i++){
        sumA+=arr[i];
    }
     for(int j=m;j<n;j++){
        sumB+=arr[j];
    }
    // cout<<sumA<<" "<<sumB;
    if(sumA<sumB){
        cout<<"YES";
    }
    else if(sumA>=sumB){
        cout<<"NO";
    }
    cout<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      int m=n-n/2;
      int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    if(k>0){
    while(k--){
        int Max=-9999,Min=9999,x,y;
        for(int i=0;i<m;i++){
        if(arr[i]>Max){
            Max=max(arr[i],Max);
            x=i;
        }
    }
     for(int j=m;j<n;j++){
        if(arr[j]<Min){
            Min=min(arr[j],Min);
            y=j;
        }
    }
    swap(arr,x,y);
    }
    }
    
    checkAs(arr,m,n);
    
  }
    return 0;
}