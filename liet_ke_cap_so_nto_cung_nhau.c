#include<stdio.h>
int ucln(int a,int b)
{
	int k;
	while(b>0)
	{
		k=a%b;
		a=b;
		b=k;
	}
	return (a == 1);
}

int main()
{
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	for(i=a; i<=b; i++)
	{
		for(j=i+1; j<=b; j++)
		{
			if(ucln(i,j))
			printf("(%d,%d)\n", i, j);
		}
	}
}
