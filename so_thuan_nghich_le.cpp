#include<stdio.h>
int thuannghich(long long n)
{
	long long a=n,m=0;
	while(a>0)
	{
		m=m*10 + a%10;
		a/=10;
	}
	if(m==n) return 1;
	return 0;
}

int sole(long long n)
{
	int m;
	while(n>0)
	{
		m=n%10;
		if(m%2!=0)
		{
			return 1;
		}
		n/=10;
	}
	return 0;
}

int tong(long long n)
{
	int m,s=0;
	while(n>0)
	{
		m=n%10;
		s+=m;
		n/=10;
	}
	if(s%2!=0) return 1;
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(thuannghich(n) && sole(n) && tong(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
