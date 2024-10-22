//Bear_and_segments
#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        char S[100000];
        scanf("%s",&S);
        int len=strlen(S);
        char c[100000];
        int p=0,i,check=0;
        for(i=0;i<len;i++){
            if(S[i]=='1'){
                c[p]='1';
                p++;
            }
            else if(i>=1 && S[i-1]=='1' && S[i]=='0'){
                c[p]='0';
                p++;
            }
        }
        for(i=0;i<p-1;i++){
            if(c[i]=='0'){
                check=1;
                break;
            }
        }
        if(check==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    
    
    return 0;
}