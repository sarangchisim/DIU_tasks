//two buttons

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int temp=n,count=0,result=0;
    while(m!=n){
        if(n>m){
            count+=n-m;
            break;
        }
        else if(m%2==0){
            m=m/2;
            count++;
        }
        else{
            m++;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
