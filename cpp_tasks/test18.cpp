//ip checking (not done yet)
#include<bits/stdc++.h>
using namespace std;

void extra(int f1,string new1,int l){
    int i=0,count=0,temp=f1;
    while(temp!=0){
        temp=temp%10;
        count++;
    }
    if(l==0){
        count+=2;
    }
    else{
        l=new1.length();
        count+=l+2;
    }
    
    for(int i=count-1;i>=0;i--){
        if(i==count-1){
            new1[i]='.';
        }
        else{
            new1[i]=f1%10+48;
            f1=f1/10;
        }
    }
}

void convert(string b){
    int n=b.length();
    string new1;
    int f1=0,up,l1=0;
    for(int i=0;i<n;i+8){
        up=7;
        if(b[i]=='.'){
            i++;
        }
        else{
            for(int j=i;j<i+8;j++){
                f1+=(b[j]-48)+pow(2,up);
                up--;
            }
            extra(f1,new1,l1);
            f1=0;
        }
    }
    reverse(new1.begin(),new1.end());
    b=new1;
}
int check(string a,string b){
    int len1=a.length(),len=b.length();
    a[len1]=' ';
    b[len-1]=' ';
    if(a==b){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        convert(b);
        cout<<a<<endl;
        if(check(a,b)==1){
            cout<<"Case "<<i+1<<": Yes"<<endl;
        }
        else{
            cout<<"Case "<<i+1<<": Yes"<<endl;
        }
    }
}