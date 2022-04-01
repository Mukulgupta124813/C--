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
    vll v;int n;
    int temp;
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>temp;
        v.pb(temp);
    }
    for(auto& i :v){
        cout<<i<<" ";}
    return 0;
}
