#include<stdio.h>
#include<math.h>

int ktra(int n)
{
	int a=n%10;
	n/=10;
	while(n>0)
	{
		int b=n%10;
		if(a<b) return 0;
		a=b;
		n/=10;
		
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int a=pow(10,n-1),b=pow(10,n);
		for(i=a;i<b;i++)
		{
			if(ktra(i)) printf("%d ",i);
		}
		printf("\n");
	}
}
