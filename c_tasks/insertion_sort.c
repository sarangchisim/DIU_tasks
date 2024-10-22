#include<stdio.h>
int main(){
    int n,temp=0,k=0;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        k=a[i+1];
        for(int j=i;j>=0;j--){
            if(k<a[j]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else{
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}