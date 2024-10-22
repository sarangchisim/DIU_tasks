//monkey and oiled bamboo

#include<stdio.h>
int main(){
    int n,m,i,j,diff=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        int a[m];
        diff=0,max=0;
        for(j=0;j<m;j++){
            scanf("%d",&a[j]);
        }
        max=a[0];
        for(j=1;j<m;j++){
            diff=a[j]-a[j-1];
            if(diff>max){
                max=diff;
            }
        }
        printf("Case %d: %d\n",i+1,max);
    }
    return 0;
}