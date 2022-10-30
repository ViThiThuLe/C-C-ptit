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
	return a;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",ucln(a,b));
	}
}
