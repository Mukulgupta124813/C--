#include<bits/stdc++.h>
#include<string>
#include<random>
#include<map>
#include<iterator>
#include<algorithm>
#include<limits>
#include<utility>
#include<vector>
#define ll long long int
#define pb push_back
#define vll vector<long long int>
using namespace std;
 
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int sum=0;
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
               sum+=abs(arr[i]-arr[j]);
          
       
      }
  }
  cout<<sum<<endl;
    return 0;
}