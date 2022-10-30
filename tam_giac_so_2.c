#include<stdio.h>
int main(){
	int a, i, j;
	scanf("%d",&a);
	for( i=1; i<=a; i++){
		if(i%2 != 0){
			for( j=1; j<=2*i; j+=2){
			printf("%d",j);
			}	
		}
		else for( j=2; j<=2*i; j+=2){
			 printf("%d",j);
		}
		printf("\n");
	}
}
