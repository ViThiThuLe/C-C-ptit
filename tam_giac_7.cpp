#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		int k=a-1, n=a-1;
		for(int j=1;j<=i;j++){
			if(j==1)
			printf("%d ",i);
			else {
			 	printf("%d ",i+k);
				n--;
				k=k+n;
			}			
		}	
		printf("\n");
	}
}
