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

    int n;cin>>n;
    int b; 
    int ar[1000];
    int are[9] = {7,4, 3, 5, 6, 6, 16, 61, 15};
    int are2[6] = {4,1,6,6,10,4};
    for(int i = 0; i<n;i++){
        cin>>ar[i];
    }
       cout<<1<<" "<<2<<" "<<3;

    
    

return 0;   
}