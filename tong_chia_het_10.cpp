#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,m,s=0;
		scanf("%d",&a);
		while(a>0){
			m=a%10;
			s+=m;
			a/=10;
		}
		if(s%10==0) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

