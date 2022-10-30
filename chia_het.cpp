#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min, max, a[10], dem = 0;
    cout << "nhap vao so luong so: ";
    scanf("%d", &n);
    cout << "nhap vao cac so can chia het: ";
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    cout << "nhap vao khoang: ";
    scanf("%d%d", &min, &max);
    for (int i = min + 1; i < max; ++i)
        for (int j = 0; j < n; ++j)
            if (i % a[j] == 0)
            {
                ++dem;
                break;
            }
    printf("%d\n", dem);
    return 0;
}
