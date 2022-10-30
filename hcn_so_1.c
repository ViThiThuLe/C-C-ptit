#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	if(a<=b){
		int i,j;
		for(i=1; i<=a; i++){
			for(j=i; j<=b; j++){
				printf("%d",j);
			}
			for(j=i-1; j>=1; j--){
				printf("%d",j);
			}
			printf("\n");
		}
	}
	if(a>b){
		int i,j;
		for(i=1; i<=b; i++){
			for(j=i; j<=b; j++){
				printf("%d",j);
			}
			for(j=i-1; j>=1; j--){
				printf("%d",j);
			}
			printf("\n");
		}
		for(i=b+1; i<=a; i++){
			for(j=1; j<=b; j++){
				if(j==1) printf("%d",i);
				else printf("%d",b-j+1);
			}
			printf("\n");
		}
	}
}
