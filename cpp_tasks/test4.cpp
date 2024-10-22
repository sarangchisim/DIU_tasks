//Insertion_sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key,temp;
    for(int i=0;i<n-1;i++){
        key=a[i+1];
        for(int j=i;j>=0;j--){
            if(a[j]>key){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else
            {
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    
}