//exact sum
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int search(vector<ll>& a,ll key){
    ll l=0,r=a.size()-1;
    while(l<=r){
        ll mid=(r+l)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}

void check(vector<ll>& a,ll money){
    ll minDiff=LLONG_MAX;
    pair<ll,ll> final;
    for(ll i=0;i<a.size();i++){
        ll complement=money-a[i];
        ll index=search(a,complement);
        if(index!=-1 && index!=i){
            ll Diff=abs(a[i]-a[index]);
            if(Diff<minDiff){
                minDiff=Diff;
                final = make_pair(min(a[i],a[index]),max(a[i],a[index]));
            }
        }

    }
    cout<<"Peter should buy books whose prices are "<<final.first<<" and "<<final.second<<'.'<<endl<<endl;
}
int main(){
    ll n;
    while(cin>>n && n!=EOF){
        vector<ll> a(n);
        vector<ll> result(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll money;
        cin>>money;
        check(a,money);
    }

    return 0;
}