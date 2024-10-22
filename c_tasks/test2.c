#include<stdio.h>

int main(){
    int a,e=0,h=0;
    scanf("%d",&a);
    int s[a];

    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
        if(s[i]==0){
            e++;
        }
        else{
            h++;
        }
    }
    if(e>h){
        printf("Remains\n");
    }
    else{
        printf("Changed\n");
    }


    return 0;
}