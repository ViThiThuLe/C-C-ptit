#include<stdio.h>
#include<math.h>
int nto(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i<=sqrt(n); i++)
		if (n%i == 0) return 0;
	return 1;
}

int main(){
	int i, s=0, p=0, l=0, m, d=0;
	long n;
	scanf("%ld",&n);
	int a[100] ,b[100],tg;
	while(n>0){
		m = n%10;
		a[d] = m;
		d++;
		n/=10;
	}
	for( i=0;i<d/2;i++){
		tg = a[i];
		a[i] = a[d-i-1];
		a[d-i-1] = tg;
	}
	for( i=0; i<d; i++){
		int dem = 1;
		int m = 1;	
		if(nto(a[i])){
			int k;
			for( k=0; k<i; k++){
				if(nto(a[k]))
				if(a[k] ==a [i]) {
					m=0;
					break;
				}
			}
			if(m == 1){
				int j;
				for( j=i+1; j<d; j++){
					if(nto(a[j]))
					if(a[j] == a[i]) {
						dem++;
					}
				}
				b[s]=dem;
				l++;
				s++;
			}
		}
	}

	for( i=0; i<d; i++){	
		if(nto(a[i]) && a[p-1] != a[i]) {
			a[p]=a[i];	
			p++;
		}
	}
	for( i=0; i<l; i++){
		printf("%d %d\n",a[i],b[i]);
	}
}
