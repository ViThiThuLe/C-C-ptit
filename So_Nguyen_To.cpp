#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int m=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)m=1;
		}
		if(m==1)printf("NO");
		else printf("YES");
		printf("\n");
	}
}
