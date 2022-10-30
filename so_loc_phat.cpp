#include<stdio.h>
int main(){
	int t,n,m,check=0;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		while(n!=0){
			m=n%10;
			if(m!=0&&m!=6&&m!=8){
				check=1; 
				break;
			}
			n/=10;
		}
		if(check==1) printf("NO");
		else printf("YES");
		printf("\n");
	}
}
