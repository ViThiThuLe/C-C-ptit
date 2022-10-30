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

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j;
		scanf("%d",&n);
		if(n%2==0)
		{
			for(i=1;i<n;i++)
			{
				for(j=1;j<n;j++)
				{
					if(nto(j) &&  nto(i) && i+j==n && i<=j)
					printf("%d %d ",i,j);
				}
			}
		}
		printf("\n");
	}
}
