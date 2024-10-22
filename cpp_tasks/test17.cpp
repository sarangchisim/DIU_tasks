//night at the museum
#include<bits/stdc++.h>
using namespace std;
int main(){
    string god;
    cin>>god;
    int len=god.length();
    vector<int> a(len);
    int count=0,temp;
    for(int i=0;i<len;i++){
        a[i]=(god[i]-96);
    }
  
    for(int i=0;i<len;i++){
        if(i==0){
            temp=abs(1-a[i]);
            count+=min(temp,26-temp);
        }
        else{
            temp=abs(a[i-1]-a[i]);
            count+=min(temp,26-temp);
        }
    }
    cout<<count<<endl;
    return 0;
}
