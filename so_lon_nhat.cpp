#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,max,vtri;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		max=a[0];
		vtri=1;
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		printf("%d\n",max);
		for(i=0;i<n;i++) 
		{
			if(max==a[i])
			printf("%d ",i);
		}
		printf("\n");
	}
}
