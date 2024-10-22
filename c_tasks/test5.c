#include<stdio.h>
#include<string.h>

int main(){
    int n,i;
    scanf("%d",&n);
    char s[100];
    fgets(s,sizeof(s),stdin);
    printf("You entered: %s\n", s);
    /*2
    for(i=0;i<n;i++){
        fgets(s,sizeof(s),stdin);
        
    }
    */

    return 0;
}