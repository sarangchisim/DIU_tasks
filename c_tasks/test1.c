#include<stdio.h>

int main(){
    int weight=0;
    int d=0;

    scanf("%d",&weight);
    if(weight==2 && weight%2!=0){
        printf("No\n");
    }
    else{
        printf("Yes\n");
        /*d = weight/2;

        if(d % 2 == 0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        */
    }
    


    return 0;
}