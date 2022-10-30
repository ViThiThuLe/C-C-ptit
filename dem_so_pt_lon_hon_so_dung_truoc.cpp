#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,dem,dem2=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			dem=-1;
			for(int j=0;j<=i;j++)
			{
				if(a[i]>=a[j]) dem++;
			}
			if(dem==i) dem2++;
		}
		printf("%d",dem2);
		printf("\n");
	}
}
