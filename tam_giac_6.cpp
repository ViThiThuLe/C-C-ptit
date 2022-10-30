#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int k=1;k<=a-i;k++){
			printf("~");
		}
		for(int j=2;j<2*i;j+=2){
			printf("%d",j);
		}
		for(int h=2*i;h>=2;h-=2){
			printf("%d",h);
		}
		printf("\n");
	}
}
