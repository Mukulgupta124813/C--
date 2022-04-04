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
// from Rs. 1,000,001 to Rs. 1,250,000	20%
// from Rs. 1,250,001 to Rs. 1,500,000	25%
// above Rs. 1,500,000	30%
void solve(){
    int n;
    cin>>n;
   int ans=0;
   vector< vector <int> > arr;
    arr.pb({250000,500000,5});
    arr.pb({500000,750000,10});
    arr.pb({750000,1000000,15});
    arr.pb({1000000,1250000,20});
    arr.pb({1250000,1500000,25});
    arr.pb({1500000,n,30});
    for(int i=0;i<arr.size();i++){
        if(n<=arr[i][0])
        break;
        int slab=min(n,arr[i][1])-arr[i][0];
        int tax=(slab/100)*arr[i][2];
        ans+=tax;
        
    }
    cout<<(n-ans)<<endl;
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