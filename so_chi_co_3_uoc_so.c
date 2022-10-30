#include<stdio.h>
#include<math.h>

int nto( long long n){
	int i;
	if(n<2) return 0;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int i;
		long long a, b, dem=-1;
		scanf("%lld %lld",&a, &b);
		long long m = sqrt(a),
				  n = sqrt(b);
		if(m*m != a || m == 1) dem++;
		for(i=m; i<=n; i++){
			if(nto(i)) dem++;
		}
		printf("%lld\n", dem);
	}
}
