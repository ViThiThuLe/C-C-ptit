#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,dem=0;
		scanf("%d",&n);
		if(n%2==0)
		{
			
			for(int i=1;i<=sqrt(n);i++)
			{
				if (n%i==0 )
				{
					if(i%2==0)dem++;
					if(i==n/i) dem--;
					if(n/i%2==0) dem++;
				}
			}
		}
		printf("%d",dem);
		printf("\n");
	}
}
