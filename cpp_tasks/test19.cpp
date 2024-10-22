//IQ test
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int e=0,o=0,index=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }

    if(e>o){
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                index=i+1;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                index=i+1;
            }
        }
    }
    cout<<index<<endl;
    
    return 0;
}