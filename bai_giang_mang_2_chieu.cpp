#include<stdio.h>
#include<malloc.h>
// mang 2 chieu khai bao con tro **a = a[][3]
void xem(float a[][3],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%f ",a[i][j]);
		}
	}
		
}

// a[][x],b[2][y].....x=y
main()
{
	float b[2][3]={1,2,3,4,5};
	// b[2][3]=**b....floatf **b;int m=2,n=3,i,j;
	// b=(float **)malloc(m*sizeof(float*));
	// for(i=0;i<m;i++)
	//	b[i]=(float*)malloc(n*sizeof(float));
	// for(i=0;i<m;i++)
	//  for(j=0;j<n;j++)
	//    b[i][j]=i+j;
	xem(b,m,n);
}




