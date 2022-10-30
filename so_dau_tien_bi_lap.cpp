#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	while(m--)
	{
		int n,s=1;
		scanf("%d",&n);
		int a[n];
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(a[i]==a[j])
				{
					printf("%d\n",a[i]);
					s=0;
					break;
				}
			}
			if(s==0) break;
		}
		if(s==1) printf("NO\n");
	}
}
