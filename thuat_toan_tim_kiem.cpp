#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int n, int x)
{
    int i = 0;
    while ((i < n) && (a[i] != x))
        i++;
    if (i == n)
        return 0;
    else
        return 1;
}

int BinarySearch(int a[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;
    do
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
            return 1;
        else if (a[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    } while (left <= right);
    return 0;
}

int main()
{
    int a[50000];
    int n = 50000;
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    if (LinearSearch(a, n, 40001))
        cout << "YES\n";
    else
        cout << "NO\n";
    if (BinarySearch(a, n, 40001))
        cout << "YES\n";
    else
        cout << "NO\n";
}
