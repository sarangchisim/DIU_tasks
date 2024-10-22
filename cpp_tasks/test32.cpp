//Problem G
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len = s.length();
    int a=0,b=0,c=0;
    for(int i=0;i<len;i++){
        if(s[i]=='1'){
            a++;
        }
        else if(s[i]=='2'){
            b++;
        }
        else if(s[i]=='3'){
            c++;
        }
    }

    for(int i=0;i<len;i++){
        if(a>0 && i%2==0){
            cout<<"1";
            a--;
        }
        else if(b>0 && i%2==0){
            cout<<"2";
            b--;
        }
        else if(c>0 && i%2==0){
            cout<<"3";
            c--;
        }
        if(i%2!=0){
            cout<<"+";
        }
    }
    cout<<endl;

    return 0; 
}