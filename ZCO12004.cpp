#include<vector>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
int n, i, j, temp;
vector<int> k;
cin>>n;
for(i=0;i<n;i++) {
cin>>temp;
k.push_back(temp);
}
int dp[n][2];
dp[0][0] = k[0];
dp[0][1] = 0;
dp[1][0] = k[0]; 
dp[1][1] = k[1];

for(i=2;i<n;i++) {      
    if(i%2 == 0) {

        dp[i][0] = dp[i-2][0] + k[i];
        dp[i][1] = dp[i-1][1];              
    }
    else{ 
        dp[i][0] = dp[i-1][0];
        dp[i][1] = dp[i-2][1] + k[i];           
    }       

}
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
cout<<min(dp[n-1][0], dp[n-1][1]);
 }