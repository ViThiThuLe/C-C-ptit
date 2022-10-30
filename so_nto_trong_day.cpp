#include<stdio.h>
#include<math.h>
int ktra(int a){
	if(a<2) return 0;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			if(ktra(a[i])) printf("%d ",a[i]);
		}
		printf("\n");
	}
}
