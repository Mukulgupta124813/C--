#include<bits/stdc++.h>
using namespace std;
 
bool solve(){
    int n;
      string s;
      cin>>n>>s;
      int count=0;
      
      for (int i=0;i<n;i++){
          if(s[i]=='H'){
              count++;
          }
          else if(s[i]=='T'){
              count--;
          }
          if(count<0 || count>1){
              return false;
          }
      }
      if(count!=0){
          return false;
      }
      return true;
}

int main(){
  int r;
  cin>>r;
  while(r--){
      if(solve()){
          cout<<"Valid";
      }
      else{
          cout<<"Invalid";
      }
      cout<<endl;
  }
    return 0;
}