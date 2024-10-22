#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,w;
    cin>>t>>w;

    if(t>2000){
        cout<<"Bandor, these bananas are tasty enough."<<endl;
    }
    else if(t<=2000 && t>0 && w>100){
        cout<<"Bandor, these bananas are tasty enough."<<endl;
    }
    else{
        cout<<"No Bandor, bananas are not tasty enough."<<endl;
    }

    return 0;
}