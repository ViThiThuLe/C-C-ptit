#include<stdio.h>
#include<conio.h>
int main()
{	int n;
    scanf("%d",&n);
    int i,A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
	int j,dem;
    for(i=0;i<n;i++)
    {
       dem =0;
       for(j=0;j<n;j++)
       {
           if(A[i]==A[j]&&i!=j)
              dem =1;
       }
       if(dem==0)
          printf("%d",A[i]);
    }
   // getch();
}
