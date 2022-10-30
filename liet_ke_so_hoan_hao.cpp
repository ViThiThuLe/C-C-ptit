#include<stdio.h>
#include<math.h>
int kiemtra(int n){
	int s=1; 
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) 
		s+=i+n/i; 
		if(i*i==n) s-=i; 
	} 
	if(s==n) 
	return 1; 
	return 0; 
} 
 main(){
 	int t;
	scanf("%d",&t);
	for(int j=6;j<=t;j++){
		if(kiemtra(j)==1) printf("%d ",j); 
	}  
 } 
