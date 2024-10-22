//merge_sort
#include<stdio.h>
void merge(int arr[],int l,int mid,int r){
    int n1=mid+1;
    int n2=r-mid;
    int a[n1],b[n2],i=0,j=0,k=l;
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=0,r=n-1,m;
    m=(n-1)/2;
    merge(a,l,m,r);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}