//a and b compilation errors

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    cin>>n;
    vector<int> a(n),b(n-1),c(n-2);
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum1+=a[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>b[i];
        sum2+=b[i];
    }
    for(int i=0;i<n-2;i++){
        cin>>c[i];
        sum3+=c[i];
    }
    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl;
    return 0;
}
