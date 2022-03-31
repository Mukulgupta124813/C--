#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>> n;
        long long int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        long long int sum =0 ;
        for(int i =0;i<n;i++)
        {
            sum += ar[i];
        }
        for(int i =0;i<n;i++)
        {
            ar[i]=sum-ar[i];
        }
        for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
        cout<<"\n";
    }
    return 0;
}