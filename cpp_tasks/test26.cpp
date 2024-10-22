//peter's smokes
#include <bits/stdc++.h>
using namespace std;

int calculate(int a,int b){
    int total = a;
    while(a>=b){
        int newCig = a / b;
        total+=newCig;
        a = newCig+(a%b);
    }
    return total;
}

int main(){
    int n,k;
    while(cin>>n>>k){
        if(n==0 || k ==0){
            break;
        }
        int max=calculate(n,k);
        cout<<max<<endl;
    }
    return 0;

}