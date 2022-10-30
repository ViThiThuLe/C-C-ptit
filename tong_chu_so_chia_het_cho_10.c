#include<stdio.h>

int ktra(int n){
	int s=0;
	while(n>0){
		int m=n%10;
		s+=m;
		n/=10;
	}
	if(s%10 == 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, s=0;;
		scanf("%d",&n);
		if(ktra(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
