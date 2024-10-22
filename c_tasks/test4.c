//playboy_chimp
#include <stdio.h>
void sort(int arr[],int n){
    int i,j,temp=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void check(int arr[],int a,int b){
    int r=0,i;
    for(i=0;i<a;i++){
        if(arr[i]>b){
            r=arr[i];
            break;
        }
    }
    if(r!=0){
        printf("%d\n",r);
    }
    else{
        printf("X\n");
    }
    
}

void find(int a[],int a1,int b[],int b1){
    int i,j;
    for(i=0;i<b1;i++){
        for(j=a1-1;j>=0;j--){
            if(b[i]>a[j]){
                printf("%d",a[j]);
                printf(" ");
                check(a,a1,b[i]);
                break;
            }
        }
    }
}

int main()
{
    int m,n,r=0,c=0,i,j;
    scanf("%d",&m);
    int lady[m];
    for(i=0;i<m;i++){
        scanf("%d",&lady[i]);
    }
    scanf("%d",&n);
    int q[n];
    for(i=0;i<n;i++){
        scanf("%d",&q[i]);
    }
    
    sort(q,n);
    find(lady,m,q,n);
    
    
    return 0;
}
