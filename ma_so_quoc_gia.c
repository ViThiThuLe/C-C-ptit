#include<stdio.h>
#include<string.h>

long long tachso(long long n){
	long long a = 0;
	long long c = n;
	int k = 0;
	while(n>0){
		int b = n%10;
		if(b == 4 && k == 0){
			c/=10;
			if(c%10 == 8){
				c/=10;
				if(c%10 == 0){
					k++;
					c/=10;
				}
			}
		}
		if(k == 1){
			k++;
			n = c;
			b = n%10;
			a = a*10 + b;
			n/=10;
			c/=10;
		}else{
			a = a*10 +b;
			c = n;
			n/=10;
			c/=10;
		}
	}
	return a;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long a = tachso(n);
		while(a>0){
			int b = a%10;
			printf("%d",b);
			a/=10;
		}
		printf("\n");
	}
}
