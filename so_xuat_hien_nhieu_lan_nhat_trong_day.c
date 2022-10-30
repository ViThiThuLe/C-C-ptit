#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, i, j, dem=0, max=0;
		scanf("%d",&n);
		int a[100], b[100];
		for(i=0; i<n; i++){
			scanf("%d",&a[i]);
			b[i]=1;
		}
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				if(a[i] == a[j])	b[dem]++;
			}
			dem++;
		}
		for(i=0; i<n; i++){
			if(b[i]>max) max = b[i];
		}
		for(i=0; i<n; i++){
			if(b[i] == max) printf("%d ",a[i]);
		}
		printf("\n");
	}
}
