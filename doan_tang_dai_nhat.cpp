#include<stdio.h>

void xuly(int a[],int n){
    int b[100]={0},i,j;
    for(i=0;i<n;i++){
        b[i]=1; j=i+1;
        while(j<n && a[j]>a[j-1]){
            b[i]++;
            j++;
        }
    }

    int m=b[0];
    for(i=1;i<n;i++) if(b[i]>m) m=b[i];

    printf("%d\n",m);
    for(i=0;i<n;i++){
        if(b[i]==m){
            for(j=i;j<i+m;j++)
                printf("%d ",a[j]);
            printf("\n");
        }
    }
}
main(){
    int t,t1;
    scanf("%d",&t);
    t1=1;
    while(t1<=t){
    	int n,a[100];
    	scanf("%d ",&n);
    	for(int i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
		}
        printf("Test %d:\n",t1);
        xuly(a,n);
        t1++;
    }
}
