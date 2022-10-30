#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
	if(n < 4) return n;
    else 
 		return f(n-1)+f(n-2);
}
int ktra(int n)
{
	for(int i=0;i<=n;i++)
	{
		if(f(i)==n)
		{
			return 1;
		}
		
	}
	return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
   		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            if(ktra(a[i])) cout << a[i] << " ";
        }
        cout << endl;		
	}
}
