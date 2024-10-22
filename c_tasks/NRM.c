#include<stdio.h>
#include<math.h>
#define ff float

#define f(x) x-exp(-x)
#define df(x) 1+exp(-x)

void newton_raphson(ff x0,ff e){
    ff x,f1,f,df;
    int count=0;
    do{
        f=f(x0);
        df=df(x0);
        x=x0-(f/df); 
        x0=x;
        f1=f(x);
        count++;
        printf("i = %d X = %f f(x) = %f\n",count,x,f1);
    }while(abs(f1)>e);

    printf("Root = %f\n",x);
}

int main(){
    ff x0,e;
    printf("Enter the value of x0: ");
    scanf("%f",&x0);
    printf("Enter the value of e: ");
    scanf("%f",&e);
    printf("\n");

    newton_raphson(x0,e);

    return 0;
}