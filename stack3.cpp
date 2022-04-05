#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    stack<int> st2;
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++){
        int Min=9999999;
        for(int j=i;j>=0;j--){
            Min=min(Min,arr[j]);
        }
        if(Min==arr[i]){
            st.push(-1);
        }
        else{st.push(Min);}
    }
    while(!st.empty()){
    	st2.push(st.top());
    	st.pop();
	}
	while(!st2.empty()){
		cout<<st2.top()<<" ";
		st2.pop();
	}
	return 0;
}