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
 

string setstring(int m){
    string temp="";
    while(m--){
        temp+="1";
    }
    return temp;
}

void solve(){
    int n,m;
    bool invalid=false,weak=false;
    cin>>n>>m;
    string temp = setstring(m);
    for(int i=0;i<n;i++){
        string s,num;
        cin>>s>>num;
        if(s=="correct"){
            if(num!=temp){
                invalid=true;
            }
        }
        if(s=="wrong"){
            if(num==temp){
                weak=true;
            }
        }
    }
    if(invalid ){
        cout<<"INVALID"<<endl;
    }
    else if(weak){
        cout<<"WEAK"<<endl;
    }
    else{
        cout<<"FINE"<<endl;
    }
}

int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}