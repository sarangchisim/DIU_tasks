//dragon of loowater
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    while(cin>>n>>m && n!=0 && m!=0){
        vector<int> a(n);
        vector<int> b(m);
        int flag,sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int count=0;
        if(n<=m){
            for(int j=0;j<m;j++){
                if(b[j]>=a[count]){
                    sum+=b[j];
                    count++;
                }
                if(count==n){
                    flag=1;
                    break;
                }
                else{
                    flag=0;
                }
            }
        }
        else{
            flag=0;
        }
        
        if(flag==1){
            cout<<sum<<endl;
        }
        else{
            cout<<"Loowater is doomed!"<<endl;
        }
    }

    return 0;
}