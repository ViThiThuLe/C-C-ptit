#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void in(int a[],int n){
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}
void sapxep(int a[],int n){
    int i,j,m,t;
    for(i=0;i<n-1;i++){
        m=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[m]) m = j;

        t=a[m]; a[m]=a[i]; a[i]=t;

        printf("Buoc %d: ",i+1); in(a,n);
    }
}
main(){
    int a[100],n;
    scanf("%d",&n);
    nhap(a,n);
    sapxep(a,n);
}
