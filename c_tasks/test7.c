//Open_Credit_System
#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int ns,i,k;
    for(k=0;k<T;k++)
    {
        scanf("%d",&ns);
        int pos[ns],max=-160000,diff=-160000;
        for(i=0;i<ns;i++){
            scanf("%d",&pos[i]);
        }

        for(i=0;i<ns-1;i++){
            if(pos[i]>max){
                max=pos[i];
            }
            if(max-pos[i+1]>diff){
                diff=max-pos[i+1];
            }
        }
        printf("%d\n",diff);

    }
    

    return 0;
}