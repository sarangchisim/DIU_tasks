//Lucky_division
#include<stdio.h>
#include<math.h>
int check(int a){
    int c=0;
    while(a!=0){
        if(a%10==4 || a%10==7){
            c=1;
            a=a/10;
        }
        else{
            c=0;
            break;
        }
    }
    if(c==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    float y,z;
    scanf("%d",&n);
    if(n%4==0 || n%7==0){
        printf("YES\n");
    }
    else{
        y=n/4.0;
        z=n/7.0;
        y=round(y)*4;
        z=round(z)*7;
        int a=y,b=z;
        if(a%4==0 || b%7==0){
            printf("YES\n");
        }
        else if(check(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
					   	 	   		  		  		  	