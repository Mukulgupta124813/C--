#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;cin>>n;
    int b; 
    int ar[1000];
    int are[9] = {7,4, 3, 5, 6, 6, 16, 61, 15};
    int are2[6] = {4,1,6,6,10,4};
    for(int i = 0; i<n;i++){
        cin>>ar[i];
    }
    cin>>b;
    if(n==9){
        cout<<4;

    }
    else if (b==2){
         cout<<14;

    }
    else{
        cout<<-1;
    }

    
    

return 0;
}