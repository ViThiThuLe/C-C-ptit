#include<stdio.h>
int main(){
	int a,k=1,n=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(i%2!=0){
			for(int j=1;j<=i;j++){
			printf("%d ",k++);
			}
			n=k++;
		}
		else {
			for(int j=1;j<=i;j++){
				printf("%d ",n--);
			}
		}
		printf("\n");
	}
}
