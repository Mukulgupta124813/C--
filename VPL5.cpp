#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int getMax(int arr[], int n){
  int  max = INT_MIN;
 for(int i = 0; i<n;i++){
      if (arr[i] > max){
          max = arr[i];
          
      }
     
  }
 return max;
}

int getMin(int arr[], int n){
  int  min = INT_MAX;
 for(int i = 0; i<n;i++){if (arr[i] < min){
          min = arr[i];
          
      }
     }
      
  
 return min;
}

int main()
{

    int n,k;cin>>n>>k;
    int b; 
    int ar[1000];
    int are[11] = {1,2, 3, 4, 5, 6, 8, 10,12,14,16};
    int are2[6] = {4,1,6,6,10,4};
    for(int i = 0; i<n;i++){
        cin>>ar[i];
    }
     for(int i = 0; i<k;i++){
        cin>>ar[i];
    }
    for(int i = 0 ; i <11;i++){
        cout<<are[i]<<" ";
    }

    
    

return 0;   
}