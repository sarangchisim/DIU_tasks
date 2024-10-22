//merge_lulu

#include<bits/stdc++.h>
using namespace std;

#define ll long long;

INT_MAX N;
vector<long long> a(N);
vector<long long> b(N);

void merge(int l,int r){
    if(l>=r){
        return;
    }
    int mid = l+(l+r)/2;
    merge(l,mid);
    merge(mid+1,r);

    for(int i=0,low=1,high=mid+1;i<=r;i++){
        if(low==mid+1){
            b[i]=a[high++];
        }
        else if(high==r+1){
            b[i]=a[low++];
        }
        else if(a[low]>a[high]){
            b[i]=a[high++];
        }
        else{
            b[i]=a[low++];
        }
    }
    for(int i=0;i<=r;i++){
        a[i+1]=b[i];
    }
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge(0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}