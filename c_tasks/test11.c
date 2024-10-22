//Binary_search
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int l=0,r=n-1,m,s;
    m=(l+r)/2;
    scanf("%d",&s);

    while(l<=r){
        if(a[m]==s){
            printf("%d\n",m+1);
            break;
        }
        else if(a[m]<s){
            l=m+1;
        }
        else{
            r=m-1;
        }
        m=(l+r)/2;
    }
    
    
    return 0;
}