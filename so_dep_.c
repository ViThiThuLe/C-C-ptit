#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[100];
		gets(a);
		int i, k=1,m=1;
		for(i=0; i<strlen(a); i++){
			if(2*(a[0] - '0') != (a[strlen(a)-1] - '0') && 2*(a[strlen(a)-1] - '0') != (a[0] - '0')){
				k=0;
				break;
			}
		}
		for(i=1; i<=strlen(a)-2; i++){
			if(a[i] != a[strlen(a)-i-1]){
				m=0;
				break;
			}
		}
		if(k==1 && m==1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
