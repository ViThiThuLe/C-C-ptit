#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%ld",&n);
		int sochan=0,sole=0;
		while(n>0)
		{
			int m=n%10;
			if(m%2==0) sochan++;
			else sole++;
			n/=10;
		}
		if(sochan>sole) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
