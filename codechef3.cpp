#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
      ll n;
      cin>>n;
      string s;
      cin>>s;
      ll ones=0;
      for(int i=0;i<n;i++){
          if(s[i]=='1'){
              ones++;
          }
      }
    cout<<(ones*(ones+1))/2;
    cout<<endl;
  }
    return 0;
}