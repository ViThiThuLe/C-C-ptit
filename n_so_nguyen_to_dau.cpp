#include<stdio.h>
#include<math.h>
int ktra(int n){
	if(n<2) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	int i;
	for( i=2;;i++)
	{
		if(ktra(i))
		{
			printf("%d\n",i);
			dem++;
		}
		if(dem==n) break;
	}
}
