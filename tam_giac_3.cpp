#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<2*i-1;j+=2){
			printf("%d",j);
		}
		for(int h=2*i-1;h>=1;h-=2){
			printf("%d",h);
		}
		printf("\n");
	}
}
