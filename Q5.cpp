#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main(){
  int  n,w,d,temp;
  cin>>n>>w>>d;
  vector<int> v(n);
  for(int i=0;i<n;i++){
      cin>>temp;
      v[i]=temp;
  }
  
    sort(v.begin(),v.end(),greater<int>());
    int a=w,b=w+d;
    int sumA = 0,sumB = 0;
    int  lenA = n%a,lenB = n%b;
    cout<<lenA<<endl<<lenB<<endl;
    for(int i=0;i<n-lenA;i++){
        sumA = sumA + v[i];
    }
    cout<<sumA<<endl;
    for(int i=0;i<n-lenB;i++){
        sumB = sumB + v[i];
    }
    cout<<sumB<<endl;
    if(sumA>sumB){
        int result= sumA-sumB;
        cout<<"Wrong "<<result;
    }
    else if(sumA==sumB){
        cout<<"Both are right"<<endl;
    }
    else{
        int result= sumB-sumA;
        cout<<"Right "<<result;
    }
    return 0;
}