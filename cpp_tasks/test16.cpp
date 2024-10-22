//combinition lock
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string original, mcduck;
    cin>>original;
    cin>>mcduck;
    int diff=0,count=0;
    for(int i=0;i<n;i++){
        diff=abs(original[i]-mcduck[i]);
        count+=min(10-diff,diff);
    }
    cout<<count<<endl;

    return 0;
}
