//binary search
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int low=0, high=n-1;
    cout<<"Enter a search key: ";
    int key;
    cin>>key;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==key){
            cout<<mid+1<<endl;
            break;
        }
        else if(v[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

}