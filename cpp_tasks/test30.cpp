//Problem E
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    char a,b;
    for(int i=0;i<n;i++){
        cin>>s;
        int len =s.length();
        if(len<=10){
            cout<<s<<endl;
        }
        else{
            a=s[0];
            b=s[len-1];
            cout<<a<<len-2<<b<<endl;
        }
    }

    return 0; 
}