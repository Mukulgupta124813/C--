
#include <bits/stdc++.h>
using namespace std;


int main()
{   int n;
    cin>>n;
    vector<bool> arr;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    int b,i=0;
    cin>>b;
    int count=0;
    while(i<n){
        if(arr[i]==1){
            for(int j=(i-b+1);j<(i+b-1);j++){
                arr[j]=1;
            }
            i=i+b-1;
            count++;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<count<<endl;
    return 0;
}
