//problem A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0;
    cin>>n;
    
    if(n%5==0){
        r=n/5;
    }
    else{
        r=(n/5)+1;
    }
    
    cout<<r<<endl;

    return 0; 
}