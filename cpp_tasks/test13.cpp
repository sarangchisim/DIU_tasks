//restoring numbers
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4,max=-9999,index=0;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(max<a[i]){
            max=a[i];
            index=i;
        }
    }
    for(int i=0;i<n;++i){
        if(i!=index){
            cout<<max-a[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}