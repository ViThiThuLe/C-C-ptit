#include<stdio.h>
int ktra(int n)
{
	int a=n;
	int m=0;
	while(a>0)
	{
		m=m*10+a%10;		
		a/=10;
	}
	if(m==n) return 1;
	return 0;
}
int ktra2(int n)
{
	int m;
	while(n>0)
	{
		m=n%10;
		n/=10;
		if(m==9)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(ktra(i)==1&&ktra2(i))
		{
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}
