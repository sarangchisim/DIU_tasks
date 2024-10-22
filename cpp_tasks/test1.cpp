//way too long
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    cin >> n;
    while(n >= 0){
        getline(cin, str);
        if(str.length()>10){
            cout <<str.at(0)<< str.length()-2 <<str.at(str.length()-1) << endl;
        }
        else{
            cout << str << endl;
        }
        n--;
    }
    return 0;
}