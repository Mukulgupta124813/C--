#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int a[N];
    if(N>10){
        cout<<"Constraint violated"<<endl;
        return 0;
    }
    for(int i=0;i<N;i++)
     cin>>a[i];
    int biggest = 0;
    for(int i=0;i<N;i++) 
    biggest = max(biggest, a[i]);
    int count = 0;
    for(int i=0;i<N;i++) 
    if (a[i] == biggest)
     count++;
        cout<<count<<endl;
    return 0;
}