#include<stdio.h>
#include<math.h>
int kiemtra(int n){
	int giaithua=1,tong=0,m,k;
	k=n;
	while(n>0){
		m=n%10;
		for(int i=2;i<=m;i++){
			giaithua*=i;
		}
		tong+=giaithua;
		giaithua=1;
		n/=10;	
	}
	if(tong==k)
	return 1;
	return 0;
}
main(){
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		if(kiemtra(j)==1) printf("%d ",j);
	}
}
