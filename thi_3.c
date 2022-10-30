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

void nhap(int n, int m, int a[][100]){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
			if(nto(a[i][j])) a[i][j] = 1;
			else a[i][j] =0;
		}
	}
}

void in(int n, int m, int a[][100]){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n, m, a[100][100];
	scanf("%d%d", &n, &m);
	nhap(n,m,a);
	in(n,m,a);
}
