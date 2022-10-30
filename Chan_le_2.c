#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
			int a;
		scanf("%d",&a);
		int sochan=0;
		int sole=0;
	while(a!=0){
		int i=a%10;
		if(i%2==0) sochan++;
		else sole++;
		a=a/10;
	}
	printf("%d %d",sole, sochan);
	printf("\n");
}
}
