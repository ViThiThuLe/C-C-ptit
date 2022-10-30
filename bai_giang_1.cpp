#include<stdio.h>
void xem(float *a,int n)
{
	int i;
	for(i=0;i<n;i++,++a)
	printf("%f ",*a);
	return;
}

main()
{
	float b[100]={1,2,3,4,5};
	int n=5;
	xem(b,n);
	
}




//double max(double x,double y)
//{
//	return (x>y?x:y);
//}
