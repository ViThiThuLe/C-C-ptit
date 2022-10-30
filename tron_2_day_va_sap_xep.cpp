#include<stdio.h>
int main(){
	int m,t=1;
	scanf("%d",&m);
	while(t<=m){
		int n,a[30],b[30],c[30]={};
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=1;i<=n;i++){
			scanf("%d",&b[i]);
		}
		for(int i=0;i<n-1;i++){
			int t=0;
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					t=a[i],a[i]=a[j],a[j]=t;
				}
				if(b[i+1]<b[j+1]){
					t=b[i+1],b[i+1]=b[j+1],b[j+1]=t;
				}
			}
		}
		for(int i=0;i<n;i++){
			c[2*i]=a[i];
			c[2*(i+1)-1]=b[i+1];
		}
		printf("Test %d:\n",t);
		for(int i=0;i<2*n;i++){
			printf("%d ",c[i]);
		}
		printf("\n");
		t++;
	}
}
