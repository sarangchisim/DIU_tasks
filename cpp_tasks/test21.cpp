//hero to zero
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n--){
        if(n>100 || n<0){
            break;
        }
        long long a,b,count=0,r;
        cin>>a>>b;
        if(a>1000000000000000000 || b>1000000000000000000){
            break;
        }
        while(a>0){
            if(a%b==0){
                a=a/b;
                count++;
            }
            else{
                r=a%b;
                a-=r;
                count+=r;
            } 
        }
        cout<<count<<endl;
    }
    return 0;
}