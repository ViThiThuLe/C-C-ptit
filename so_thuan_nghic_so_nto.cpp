#include<stdio.h>
#include<math.h>
int ktra1(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
		return 1;
}
int ktra2(int n){
	int x=n,y=0;
	while(n>0){
		y=y*10+n%10;
		n/=10;
	}
	if(y==x) return 1;
	return 0;
}
main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,dem=0;
		scanf("%d%d",&a,&b);
		for(int j=a;j<=b;j++){
			if(ktra1(j)==1 && ktra2(j)==1){
				printf("%d ",j);
				dem++;
			}	
			if(dem>10){
				printf("\n");
				dem=0;
			}
		}
		printf("\n");
		printf("\n");
	}
}
