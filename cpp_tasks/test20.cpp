//teams forming (not done yet)
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum1=0,sum2=0,result;
    for(long long i=0;i<n/2;i++){
        sum1+=a[i];
    }
    for(long long i=n/2;i<n;i++){
        sum2+=a[i];
    }
    if(sum1>sum2){
        result=sum1-sum2;
    }
    else{
        result=sum2-sum1;
    }
    cout<<result<<endl;
    return 0;
}   