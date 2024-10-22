#include <stdio.h>

int result(long long a,long long b,long long c){
    if(a==0){
        return c;
    }
    else if(a%b==0){
        c++;
        a=a/b;
        return result(a,b,c);
    }
    else{
        a--;
        c++;
        return result(a,b,c);
    }
}

int main(){
    int h;
    long long n,m,count=0;
    scanf("%d",&h);
    for(int i=0;i<h;i++){
        scanf("%lld %lld",&n, &m);
        printf("%d\n",result(n,m,count));
    }

    return 0;
}