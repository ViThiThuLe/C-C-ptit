#include<stdio.h>
#include<string.h>

struct sinhv{
	char ma[100];
	char ten[100];
	char sinh[100];
	float a,b,c;
};

int main(){
	int n;
	scanf("%d",&n);
	struct sinhv a[100];
	float b[100];
	int i, j;
	for(i=0; i<n; i++){
		scanf("\n");
		scanf("%s", &a[i].ma);
		scanf("\n");
		gets(a[i].ten);
		scanf("\n");
		gets(a[i].sinh);
		scanf("%f%f%f", &a[i].a, &a[i].b, &a[i].c);
		b[i] = a[i].a + a[i].b + a[i].c;
	}
	for(i=1; i<n; i++){
		for(j=1; j<n; j++){
			char t[100];
			if(strcmp(a[j-1].ten, a[j].ten) > 0){
				strcpy(t, a[j-1].ten);
				strcpy(a[j-1].ten, a[j].ten);
				strcpy(a[j].ten, t);
				strcpy(t, a[j-1].ma);
				strcpy(a[j-1].ma, a[j].ma);
				strcpy(a[j].ma, a[j].ten);
				strcpy(t, a[j-1].sinh);
				strcpy(a[j-1].sinh, a[j].sinh);
				strcpy(a[j].sinh, t);
				float x = a[j-1].a;
					a[j-1].a = a[j].a;
					a[j].a = x;
				float y = a[j-1].b;
					a[j-1].b = a[j].b;
					a[j].b = y;
				float z = a[j-1].c;
					a[j-1].c = a[j].c;
					a[j].c = z;
			}
		}
	}
	int c[100] = {0};
	for(j=0; j<n; j++){
		printf("%d ",j+1);
		printf("%s ", a[j].ma);
		printf("%s ", a[j].ten);
		printf("%s ", a[j].sinh);
		printf("%.1f %.1f %.1f\n", a[j].a, a[j].b, a[j].c);
		c[j] = 1;
	}
}
