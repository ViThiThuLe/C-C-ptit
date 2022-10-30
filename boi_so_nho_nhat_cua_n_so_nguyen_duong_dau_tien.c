#include<stdio.h>

int ucln(int a,int b){
	int k;
	while(b>0){
		k=a%b;
		a=b;
		b=k;
	}
	return a;
}

int bcnn(int a, int b){
	return a*b/ucln(a,b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, i, dem=0;
		scanf("%d", &n);
		int k=1;
		for(i=1; i<=n; i++){
			k = bcnn(k,i);
		}
		printf("%d\n", k);
	}
}
