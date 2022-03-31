#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,temp;
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++){
      cin>>temp;
      arr.push_back(temp);
      }
for(int i=0;i<n;i++){
      temp=arr[i];
      arr.push_back(temp);
      }
  int b;
  cin>>b;
  int maxi=-1;  
    for(int i=0;i<arr.size();i++){
    int sum=0;
    for(int j=i;j<i+b;j++){
          sum+=arr[j];
      }
    maxi = max(sum,maxi);
  }
    cout<<maxi<<endl;
    return 0;
}