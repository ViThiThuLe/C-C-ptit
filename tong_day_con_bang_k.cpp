#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100], dem;

int check(){
	int sum =0;
	for(int i = 0; i < n; i++){
		if(b[i] == 1){
			sum += a[i];
		}
	}
	if(sum == k) return 1;
	return 0;
}

void in(){
	if(check()){
		dem++;
		for(int i = 0; i < n; i++){
			if(b[i] == 1){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}

void quaylui(int x){
	for(int i = 0; i< n; i++){
		b[x] = i;
		if(x == n - 1)
			in();
		else
			quaylui(x + 1);
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	quaylui(0);
	cout << dem << endl;
}






//#include <bits/stdc++.h>
//using namespace std;
//
//int ok, a[105], b[105], n, k;
//
//void ktao()
//{
//    for (int i = 1; i <= n; i++)
//    {
//        a[i] = 0;
//    }
//}
//
//void sinh()
//{
//    int i = n;
//    while (i >= 1 && a[i] == 1)
//    {
//        a[i] = 0;
//        i--;
//    }
//    if (i == 0)
//        ok = 0;
//    else
//        a[i] = 1;
//}
//
//bool check()
//{
//    int sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (a[i])
//            sum += b[i];
//    }
//    if (sum == k)
//        return true;
//    return false;
//}
//
//int main()
//{
//    cin >> n >> k;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> b[i];
//    }
//    ktao();
//    ok = 1;
//    int cnt = 0;
//    while (ok)
//    {
//        if (check())
//        {
//            cnt++;
//            for (int i = 1; i <= n; i++)
//            {
//                if (a[i])
//                    cout << b[i] << " ";
//            }
//            cout << endl;
//        }
//        sinh();
//    }
//    cout << cnt << endl;
//    return 0;
//}
