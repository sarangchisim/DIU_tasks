//problem D
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a ="I hate";
    string b ="I love";
    string c =" that ";
    string d =" it";


    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<a;
        }
        else{
            cout<<b;
        }
        if(i<n){
            cout<<c;
        }
    }
    cout<<d<<endl;

    return 0; 
}