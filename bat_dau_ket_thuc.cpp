#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,m,n,k;
		scanf("%d",&a);
		m=a%10;
		while(a>1){
			k=a%10;
			a/=10;
		}
		if(m==a) printf("YES");
		else printf("NO");
		printf("\n");
	} 
}
