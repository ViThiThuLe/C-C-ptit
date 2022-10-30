#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,ktra=1;
		scanf("%d",&n);
		int a[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n/2;i++)
		{
			if(a[i]!=a[n-1-i])
			{
				ktra=0;
				break;
			}
		}
		if(ktra==1) printf("YES");
		else printf("NO");
		printf("\n");
		ktra=1;
	}
}
