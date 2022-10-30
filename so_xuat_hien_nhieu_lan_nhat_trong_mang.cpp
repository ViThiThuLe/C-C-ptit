#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void xuly(int a[],int n){
    int b[100]={0},i,j,d=0;
    for(i=0;i<n;i++){
        if(b[i]==0){
            b[i]=1;
            for(j=i+1;j<n;j++)
                if(a[j]==a[i]){
                    b[i]++;
                    b[j]=-1;
                }
        }
    }
    int m = b[0];
    for( i=1; i<n; i++) if(b[i] > m) m = b[i];
    for( i=0; i<n;i++) if( b[i] == m) printf("%d ",a[i]);
    printf("\n");
}
main(){
    int t;
    scanf("%d",&t);
    while(t--){
          int a[100],n;
    scanf("%d",&n);
    nhap(a,n);
    xuly(a,n);
    }
}
