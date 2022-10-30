#include<stdio.h>
#include<math.h>
int ktra(int a){
	if(a<2) return 0;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}


		
int main(){	
	int n;
	scanf("%d",&n);
	int a[n];	int dem=0;
	for(int i=0; i<n;i++){
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++)
	{
		if (ktra(a[i])) dem++;
	}
	printf("%d ",dem);
	for(int i=0;i<n;i++){
		if(ktra(a[i])) printf("%d ",a[i]);
	}
	
}
	
