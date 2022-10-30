#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	int min=a[0];
	printf("%d ",min);
	for(int i=1;i<n;i++)
	{
		if( a[i]>min)
		{
			printf("%d",a[i]);
			break;
		}
	}
}
