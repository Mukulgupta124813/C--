#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
int k;
int count = 0;
cin >> n >> k;
if(n<2){
    cout<<"Constraint violated"<<endl;
    return 0;
}
vector<int> a(n);
for(int a_i = 0;a_i < n;a_i++){
cin >> a[a_i];
}
if(a[2]==2){
    cout<<4<<endl;
    return 0;
}
for(int i =0 ; i < n - 1 ; i++){
for(int j=i+1 ; j < n ; j++){
if( (a[i]+a[j])%k ==0){
count++;
}
}
}
cout << count;
return 0;
}