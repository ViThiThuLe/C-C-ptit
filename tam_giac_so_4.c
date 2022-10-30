#include<stdio.h>
int main(){
	int a, i, j, k, h;
	scanf("%d",&a);
	for( i=1; i<=a; i++){
		for(k=1; k<=a-i; k++){
			printf("~");
		}
		for( j=1; j<2*i-1; j+=2){
			printf("%d",j);
		}
		for( h=2*i-1; h>=1; h-=2){
			printf("%d",h);
		}
		printf("\n");
	}
}
