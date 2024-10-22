//in search of an easy problem
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a=0,flag=0;
    cin >> n;
    while(n >= 0){
        cin>>a;
        if(a==1){
            flag=1;
        }
        n--;
    }
    if(flag==1){
        cout << "HARD" << endl;
    }
    else{
        cout << "EASY" << endl;
    }
    return 0;
}