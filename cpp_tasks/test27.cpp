//problem B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r=0;
    cin>>n;
    string s;
    char a;
    cin>>s;

    for(int i=1;i<n;i++){
        a=s[i-1];
        if(a==s[i]){
            r++;
        }
    }
    
    cout<<r<<endl;

    return 0; 
}