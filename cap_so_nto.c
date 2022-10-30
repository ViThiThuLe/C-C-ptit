#include<stdio.h>
#include<math.h>
int nto(int n)
{
	int i;
	if(n<2) return 0;
	for( i=2; i<=sqrt(n); i++)
	{
		if(n%i ==0 ) return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n, i, j;
		scanf("%d", &n);
		for(i=2; i<n/2; i++)
		{
			if(nto(i) &&  nto(n-i) && i + (n-i) == n)
			printf("%d %d ", i, n-i);
		}
		printf("\n");
	}
}
