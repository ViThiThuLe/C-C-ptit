#include<stdio.h>
#include<math.h>

int nto(long n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int uoc(long n)
{
	long max=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(nto(i) && i>max ) max=i;
			if(nto(n/i) && n/i>max) max=n/i;
		}
	}
	printf("%ld\n",max);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long n;
		scanf("%ld",&n);
		uoc(n);
	}
}
