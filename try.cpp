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
    queue<int> q(n);
    for(int i=1;i<n;i++){
       cin>>temp;
       q.push(temp);
    }
    
    int b,maxi=INT_MIN;
    cin>>b;
    vector<int> M;
    for(int i=1;i<n;i++){
        for(int j=i;j<i+b;i++){
            maxi=max(maxi,arr[j]);
        }
        M.pb(maxi);
    }
    for(auto& it:M){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}