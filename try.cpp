#include<bits/stdc++.h>
#include<stdint.h>
#define ll long long int
using namespace std;
 
 const ll mx = 10e5 + 5;
 const ll mod = 10e9 + 7;

int ans[mx];

void pre(){
	ans[1] = 1;
	for(int i=2;i<mx;i++){ 
		ans[i] = (ans[i-1]*2) % mod;
	}
}

int32_t main(){
  pre();
  int t;
  cin>>t;
  while(t--){
	  int n;
	  cin>>n;
	  cout<<ans[n]<<endl;
  }
	return 0;
}