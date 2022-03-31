#include<iostream>
using namespace std;
 
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countSort(int arr[],int n){
    
    int k=arr[0];
    for(int i=0;i<=n;i++){
        k = max(k,arr[i]);
        cout<<k<<" ";
    }
    cout<<endl;
 
    int count[k];
    for(int i=0;i<k;i++)
        count[i]=0;
   
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
     print(count,k);
    for(int i=1;i<=k;i++){
        count[i] += count[i-1];
    }
    int output[n];
    for(int i=(n-1);i>0;i--){
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }
    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
  
    cout<<endl;
}

int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//       cin>>arr[i];
//   }
    int arr[] = {1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
      print(arr,9);
    cout<<endl;
    return 0;
}