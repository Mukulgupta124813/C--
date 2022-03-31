#include <bits/stdc++.h>
#define for(i) for(int i = 0 ; i < n; i++)
using namespace std;
int main()
{


    int n ; cin>> n;
    bool c = true;
    int array[100];
    int cparray[1000];
    for(i){
        cin>>array[i];

    }
    for(i){
        cparray[i] =array[i];
    }
    int rev[100];
    int start = 0;
    int end = n-1;
    while(start<end){

            swap(array[start],array[end]);
            end --;
            start ++;
    }
    for(i){
        if (array[i] == cparray[i]){
            c = true;
        }
        else{
            c = false;
        }
    }
      
    if (c){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    


return 0;
}