#include<stdio.h>
int main(){
	int n,g=1,t=0,k,m;
		scanf("%d",&n);
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
	if(t!=k) printf("0");
	else printf("1"); 
} 
