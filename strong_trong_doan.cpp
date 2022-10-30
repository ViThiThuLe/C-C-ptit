#include<stdio.h>
#include<math.h>
int kiemtra(int n){
	int k,m,g=1,t=0;
	k=n;
	while(n>0){
		m=n%10;
		for(int i=1;i<=m;i++){
			g*=i;
		}
		t+=g;
		g=1;
		n/=10;
	}
	if(t==k) return 1;
	return 0;
}
main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
			if(kiemtra(i)==1) printf("%d ",i);
		}
	} else{
		for(int i=b;i<=a;i++){
			if(kiemtra(i)==1) printf("%d ",i);
		}
	}
}
