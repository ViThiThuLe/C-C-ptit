#include<stdio.h>

int tongchuso(int n){
	int s = 0;
	while(n>0){
		int m = n%10;
		s += m;
		n/=10;
	}
	return s;
}

int tongthuaso(int n){
	int i,s = 0;
	for( i = 2; i <= n; i++){
		while(n%i == 0){
			s += tongchuso(i);
			n/=i;
		}
	}
	return s;
}

int main(){
	int n;
	scanf("%d",&n);
	if(tongchuso(n) == tongthuaso(n)) printf("YES");
	else printf("NO");
}
