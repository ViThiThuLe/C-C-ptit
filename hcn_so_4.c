#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	if(a<=b){
		int i,j;
		for(i=1; i<=a; i++){
			for(j=b+1-i; j>=1; j--){
				printf("%d",j);
			}
			for(j=2; j<=i; j++){
				printf("%d",j);
			}
			printf("\n");
		}
	}
	if(a>b){
		int i,j;
		for(i=1;i<=a-b;i++)
		{
			for( j=a+1-i;j>=a-b+2-i;j--)
				printf("%d",j);
			printf("\n");
		}
		for(i=b; i>=1; i--){
			for(j=i; j>=1; j--){
				printf("%d",j);
			}
			for(j=2; j<=b-i+1; j++){
				printf("%d",j);
			}
			printf("\n");
		}	
	}
}
