//#include<stdio.h>
//#include<string.h>
//struct hang{
//	int ma;
//	char ten[100];
//	char nhom[100];
//	double gm, gb, lai;
//};
//
//int main(){
//	int n,i,j;
//	scanf("%d",&n);
//	struct hang h[n],k;
//	for( i=0; i<n; i++){
//		scanf("\n");
//		gets(h[i].ten);
//		scanf("\n");
//		gets(h[i].nhom);
//		scanf("%lf %lf", &h[i].gm, &h[i].gb);
//		h[i].ma = i+1;
//		h[i].lai = h[i].gb - h[i].gm;
//	}
//	for(i=0; i<=n-1; i++){
//		for(j=i+1; j<n; j++){
//			if(h[i].lai < h[j].lai){
//				k = h[i];
//				h[i] = h[j];
//				h[j] = k;
//			}
//		}
//		printf("%d %s %s %.2lf \n",h[i].ma, h[i].ten, h[i].nhom, h[i].lai);
//	}
//}



#include <bits/stdc++.h>
using namespace std;

struct hang
{
    int ma;
    string ten;
    string nhom;
    double gm, gb, lai;
};

int main()
{
    int n, i, j;
    cin >> n;
    struct hang h[100], k;
    for (i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, h[i].ten);
        scanf("\n");
        getline(cin, h[i].nhom);
        cin >> h[i].gm >> h[i].gb;
        h[i].ma = i + 1;
        h[i].lai = h[i].gb - h[i].gm;
    }
    for (i = 0; i <= n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (h[i].lai < h[j].lai)
                swap(h[i], h[j]);
        }
        cout << h[i].ma << " " << h[i].ten << " " << h[i].nhom << " ";
        cout << setprecision(2) << fixed << h[i].lai << endl;
    }
}
