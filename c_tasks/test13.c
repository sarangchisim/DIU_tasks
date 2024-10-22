//bubble_sort_with_binary_search
#include<stdio.h>

int binary_search(int arr[],int l,int r,int s){
    int m;
    while(l<=r){
        m=(l+r)/2;
        if(arr[m]==s){
            return m;
        }
        else if(arr[m]>s){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return -1;
}
void bubble_sort(int arr[],int n){
    int i,j,temp=0,flag=0;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    /*
    int s;
    scanf("%d",&s);
    int l=0,r=n-1,m;
    m=binary_search(a,l,r,s);
    if(m==-1){
        printf("X\n");
    }
    else{
        printf("%d\n",m+1);
    }
    */
    return 0;
}