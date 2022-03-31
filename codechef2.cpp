#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  while(t--){
      string x,y;
      cin>>x>>y;
      int count=0;
      bool ans=true;
      for(int i=0;i<x.length();i++){
         if(x[i]=='?' || y[i]=='?')
            continue;         
         else if(x[i]!=y[i]){
              ans = false;
          }
      }
      if(ans){
          cout<<"Yes";
      }
      else{
          cout<<"No";
      }
        cout<<endl;
  }
    return 0;
}