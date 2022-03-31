#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,str;
	int n;
	cin>>s>>n;
    bool c[26]={false};
    for(int i=0;i<s.length();i++){
        c[s[i] - 'a']=true;
    }
    while(n--) {
        cin>>str;
        bool ans=1;
        for(int i=0;i<str.length();i++){
            if(!c[str[i]-'a']){
                ans = false;
            }
        }
        if(!ans)
        cout<<"No";
        else
        cout<<"Yes";
        cout<<endl;
    }
     
    
	return 0;
}
