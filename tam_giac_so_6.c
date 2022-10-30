#include<stdio.h>
int main(){
	int a, i, j, k, h;
	scanf("%d",&a);
	for( i=1; i<=a; i++){
		for( k=1; k<=a-i; k++){
			printf("~");
		}
		for( j=2; j<2*i; j+=2){
			printf("%d",j);
		}
		for( h=2*i; h>=2; h-=2){
			printf("%d",h);
		}
		printf("\n");
	}
}
