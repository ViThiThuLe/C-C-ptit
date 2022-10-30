#include<stdio.h>
#include<math.h>
int nto(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int ktra(int n)
{
	int m;
	while(n>0)
	{
		m=n%10;
		if(nto(m)==0)
		{
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,i,dem=0;
		scanf("%d%d",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(nto(i) && ktra(i)) dem++;
		}
		printf("%d",dem);
		printf("\n");
	}
}
