#include<stdio.h>
#include<string.h>

struct sv{
	int ma;
	char ten[100];
	double A, B, C;
};

int main(){
	int n;
	scanf("%d",&n);
	if(n==1){
		int m,i;
		scanf("%d",&m);
		struct sv s[m];
		for(i=1; i<=m; i++){
			scanf("\n");
			gets(s[i].ten);
			sacnf("\n");
			sacnf("%lf %lf %lf",&s[i].A, &s[i].B, &s[i].C);
		}
		printf("%d",m);
	}
	if(n==2){
		
	}
}
