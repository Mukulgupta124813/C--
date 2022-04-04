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
  int n,temp;
  cin>>n;
  vll v;
  for(int i=0;i<n;i++){
      cin>>temp;
      v.pb(temp);
  }
  sort(v.begin(),v.end());
  
  int mid=n/2;
  if(n%2==0){
        cout<<v[mid]*mid<<endl;
  }else{
        cout<<v[mid]*(mid+1)<<endl;
  }


  cout<<endl;
    return 0;
}