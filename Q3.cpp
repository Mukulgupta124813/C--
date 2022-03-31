#include<bits/stdc++.h>
#include <vector>
using namespace std;
 
int main(){
  int l,b,h,temp;
  cin>>l>>b>>h;
  vector<int> v;
  for(int i=0;i<l;i++){
      cin>>temp;
      v.push_back(temp);
  }
  int sum = accumulate(v.begin(),v.end(),0);
  int count=0,Min=9999;
  int i = 0,j=v.size();
   while(i<j){
    if(v[i]<=b || v[i]<=h){
      continue;
    }
    count++;
    Min = min(Min,v[i]);
    i++;
}
  cout<<Min<<" "<<count<<" ";
  cout<<(sum - (count*Min)*h*b)<<endl;
    return 0;
}
