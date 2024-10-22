#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,x=0,flag=1;
    cin>>n>>p;
    vector<int> h(n);

    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    for(int i=1;i<n;i++){
        if(h[i-1]<h[i]){
            x=h[i]-h[i-1];
            p-=x;
        }
        else{
            x=h[i-1]-h[i];
            p+=x;
        }

        if(p<0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}