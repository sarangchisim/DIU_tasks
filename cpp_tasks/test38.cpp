#include<bits/stdc++.h>
using namespace std;
int main(){
    int b;
    cin>>b;
    int t;

    if(b>=30){
        t=3;
    }
    else if(b>=15){
        t=2;
    }
    else if(b>=5){
        t=1;
    }
    else{
        t=0;
    }
    cout<<t<<endl;

    return 0;
}