#include<stdio.h>
#include<math.h>
int main(){
	long n;
	scanf("%ld",&n);
	double s=0;
	for(int i=1;i<=n;i++){
		s+=(float)1/i;
	}
	printf("%.4lf",s);
}
