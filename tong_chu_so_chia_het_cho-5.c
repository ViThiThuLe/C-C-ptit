#include<stdio.h>
#include<math.h>
int ktra(int n)
{
	int i;
	if(n<2) return 0;
	for( i=2;i<=sqrt(n);i++)
	{ 
		if(n%i==0) return 0;
	}
	return 1;
}

int ktra_tong(int n)
{
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	if(s%5==0) return 1;
	return 0;
}
int main()
{
	int n, m, s=0, dem=0, k, i;
	scanf("%d",&n);
	for( i=5;i<=n;i++){
		if(ktra(i) && ktra_tong(i))
		{
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n");
	printf("%d",dem);
}
