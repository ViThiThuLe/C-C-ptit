#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
			if(j==i||j==1||i==a) printf("*");
			else printf(".");
		}
		printf("\n");
	}
}
