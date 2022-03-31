#include<bits/stdc++.h>
#include<string>
using namespace std;


int palindrom(string st, int i,int j,int count){
    int start =i,end=j;
    bool check=false;
    while(start<end){
        if(st[start]==st[end]){
            check=true;
        }else{
            check=false;
            break;
        }
    }
    if(check){
        count++;
    }
    
    return 0;
}

void solve(string st,int j){
    int count=0,i=0;
     while(j <= st.length()- 1){
      palindrom(st,i,j,count);
      i++;j++;
  }
  cout<<count;
  return ;
}

int main(){
  int n,m,count=0;;
  cin>>n;
  string st;
  cin>>st;
  cin>>m;
    int cases[m];
    for(int i=0;i<m;i++){
        cin>>cases[i];
    }
    int i=0;
    while(i<=m){
        solve(st,cases[i]);
        i++;
    }
    return 0;
}