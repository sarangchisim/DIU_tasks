//Problem F
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    char a = s[0];
    if(a>=65 && a<=90){
        cout<<s<<endl;
    }
    else{
        s[0]=s[0]-32;
        cout<<s<<endl;
    }

    return 0; 
}