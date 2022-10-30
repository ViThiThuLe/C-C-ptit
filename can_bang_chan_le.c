#include<stdio.h>
#include<math.h>

int ktra(int n)
{
	int chan=0,le=0;
	while(n>0)
	{
		int m=n%10;
		if(m%2 == 0) chan++;
		else le++;
		n/=10;
	}
	if(chan==le) return 1;
	return 0;
}

int main()
{
	int n, i, dem=0;
	scanf("%d",&n);
	if(n%2!=0) return 0;
	else 
	{
		int a=pow(10,n-1),b=pow(10,n);
		for(i=a; i<b; i++)
		{
			if(ktra(i))
			{
				printf("%d ",i);
				dem++;
			}
			if(dem == 10) 
			{
				printf("\n");
				dem=0;
			}
		}
	}
}
