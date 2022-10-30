#include<stdio.h>
#include<math.h>

int nto(int n){
	int i;
	if(n<2) return 0;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int ktra(int n){
	int a = n%10;
	n/=10;
	while(n>0){
		int b = n%10;
		if(a == b) return 0;
		a=b;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, i, dem=0;
		scanf("%d",&n);
		int a = pow(10, n-1), b = pow(10,n);
		for(i=a; i<b; i++){
			if(nto(i) )if( ktra(i)) dem++;
		}
		printf("%d\n", dem);
	}
}
