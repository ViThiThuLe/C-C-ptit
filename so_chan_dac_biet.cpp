#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		int m,k=1;
		while(n>0)
		{
			m=n%10;
			if(m%2!=0)
			{
				k=0;
				break;
			}
			n/=10;
		}
		if(n%2==0 && k==1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
