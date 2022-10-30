#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		for(int i=2;i<=a;i++){
			while(a>1){
				if(a%i==0){
					printf("%d ",i);
					a/=i;
				}
				else i++;
			}
		}
		printf("\n");
	}
}
