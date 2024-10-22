//Problem C
#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    int a[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int len = n.length();
    int flag=0,count=0;

    for(int i=0;i<len;i++){
        if(n[i]=='4' || n[i]=='7'){
            count++;
        }
    }
    for(int i=0;i<14;i++){
        if(count==a[i]){
            flag=1;
            break;
        }
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0; 
}