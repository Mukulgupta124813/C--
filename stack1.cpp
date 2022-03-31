#include<bits/stdc++.h>
using namespace std;
 
int main(){
  stack<char> st;
  string s;
  cin>>s;
  int count=0;
  for(int i=0;i<s.length()-1;i++){st.push(s[i]);}
  for(int i=0;i<s.length()-1;i++){
     if(s[i]!='('){
         break;
     }
      count++;
  }
  for(int i=s.length()-1;i>=0;i++){
     if(s[i]!=')'){
         break;
     }
      count--;
  }
  cout<<count<<endl;
  if(count==0){
      cout<<1<<endl;
  }
  else{
      cout<<0<<endl;
  }
    return 0;
}