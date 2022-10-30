#include<stdio.h>
//int f(int n)
//{
//	if(n==0||n==1) return 1;
//    else 
// 		return f(n-1)+f(n-2);
//}
//int ktra(int n)
//{
//	for(int i=0;i<=n;i++)
//	{
//		if(f(i)==n)
//		{
//			return 1;
//		}
//		
//	}
//	return 0;
//}

int main()
{
	int n,i,dem=0;
   	scanf("%d",&n);	
	long long f[100];
	f[0]=0,f[1]=1,f[2]=1;
	 printf("%lld ",f[0]);
	 printf("%lld ",f[1]);

	if(n>=3)
	{
		for(int i=2;;i++)
		{
			f[i]=f[i-1]+f[i-2];
			dem++;
			printf("%lld ",f[i]);
			if(dem==n-2) break;
		}
	}
}
