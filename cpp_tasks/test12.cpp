//helpful maths
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int len=str.length();
    int a=0,b=0,c=0,plus=0;
    for(int i=0;i<len;i++){
        if(str[i]=='1'){
            a++;
        }
        else if(str[i]=='2'){
            b++;
        }
        else if(str[i]=='3'){
            c++;
        }
        else{
            plus++;
        }
    }
    for(int i=0;i<len;i++){
        if(a>0 && i%2==0){
            str[i]='1';
            a--;
        }
        else if(b>0 && i%2==0){
            str[i]='2';
            b--;
        }
        else if(c>0 && i%2==0){
            str[i]='3';
            c--;
        }
        else{
            str[i]='+';
            plus--;
        }
    }
    cout << str << endl;
    return 0;
}