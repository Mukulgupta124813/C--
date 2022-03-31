#include<bits/stdc++.h>
using namespace std;
int Solution(vector<int> &X, vector<int> &Y) {
    int count = 0;
    int a = 0; int b = 0;
    for (int i=0; i < (X.size()-1); ++i) {
        a = abs((X[i+1]-X[i]));
        b = abs((Y[i+1]-Y[i]));
        count += max(a,b);
    }
    return count;
}
int main(){
    vector<int> v= {0,1,1};
    vector<int> v1= {0,1,2};
    int ans =Solution(v,v1);
    cout<<ans<<endl;
    return 0;
}