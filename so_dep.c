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

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[500];
		gets(a);
		int i, k=1;
		for(i=0; i<strlen(a); i++){
			if(a[i] != a[strlen(a)-i-1] || nto(a[i]-'0') == 0){
				k=0;
				break;
			}
		}
		if(k==1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
