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
  
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int Max=INT_MIN,k;
          int sum=0;
        for(int i=0;i<n;i+=2){
            for(int j=0;j<n;j++){
                if(arr[j]>Max){
                Max=max(arr[],Max);
                k=j;}
            }
            arr[k]=INT_MIN;
             sum+=Max;
            }
            
           
        }
        cout<<sum<<endl;
    }

    return 0;
}