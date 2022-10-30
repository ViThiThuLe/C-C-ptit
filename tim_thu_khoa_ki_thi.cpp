#include<stdio.h>
#include<string.h>
struct thisinh{
	int ma;
	char ten[100];
	char ngaysinh[100];
	double d1,d2,d3,dt;
};

int main(){
	int n;
	scanf("%d",&n);
	double max=0;
	struct thisinh a[n];
	for(int i=1;i<=n;i++){
		scanf("\n");
		gets(a[i].ten);
		scanf("\n");
		gets(a[i].ngaysinh);
		scanf("\n");
		scanf("%lf %lf %lf", &a[i].d1, &a[i].d2, &a[i].d3);
		a[i].ma = i;
		a[i].dt = a[i].d1 + a[i].d2 + a[i].d3;
		if(a[i].dt >= max) max = a[i].dt;
	}
	for(int i=1; i<=n; i++){
		if(a[i].dt == max) printf("%d %s %s %.1lf \n",a[i].ma,a[i].ten,a[i].ngaysinh,a[i].dt);
	}
}
