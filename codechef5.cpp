#include<bits/stdc++.h>
using namespace std;
 
bool solve(){
    string s,str1,str2;
    cin>>s;
    int l = 0, r =s.length()-1;
    int mid=s.length()/2;
    str1 = s.substr(l,mid);
    if(s.length()%2==0){
        str2 = s.substr(mid,r);
    }
    else{
        str2 = s.substr(mid+1,r);
    }
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}

int main(){
  int t;
  cin>>t;
  while(t--){
      if(solve()){
          cout<<"YES";
      }
      else{
          cout<<"NO";
      }
      cout<<endl;
  }
    return 0;
}