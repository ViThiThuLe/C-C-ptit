#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	float s=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s+=a[i];
	}
	printf("%.3f",(float)s/n);
}
