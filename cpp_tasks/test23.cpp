//shooting
#include<bits/stdc++.h>
using namespace std;
bool check(pair<int,int>& a,pair<int,int>& b){
    return a.first>b.first;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    int result=0;
    sort(a.begin(),a.end(),check);
    for(int i=0;i<n;i++){
        result+=a[i].first*i+1;
    }
    cout<<result<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i].second<<" ";
    }
    cout<<endl;
    return 0;
}