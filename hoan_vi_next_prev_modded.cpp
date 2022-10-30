#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

void hoan_vi_ke_tiep()
{
    int arr[1005];
    int n, m;
    cout << "nhap vao n: ";
    cin >> n;
    cout << "nhap vao so hoan vi tiep theo: ";
    cin >> m;

    cout << "nhap vao hoan vi xuat phat: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int dem = 0;
    while (next_permutation(arr, arr + n) && dem < m)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << " || ";
        dem++;
    }
}
void hoan_vi_lien_ke_truoc()
{
    int arr[1005];
    int n, m;
    cout << "nhap vao n: ";
    cin >> n;
    cout << "nhap vao so hoan vi lien ke truoc: ";
    cin >> m;

    cout << "nhap vao hoan vi xuat phat: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int dem = 0;
    while (prev_permutation(arr, arr + n) && dem < m)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << " || ";
        dem++;
    }
}
int main()
{

    cin.tie(NULL);
    int mode;
    cout << "Chon Mode:" << endl
         << "0. Hoan vi ke tiep\n1. Hoan vi lien ke truoc\n";
    while (true)
    {
        cin >> mode;
        if (!mode)
        {
            hoan_vi_ke_tiep();
            break;
        }
        else if (mode == 1)
        {
            hoan_vi_lien_ke_truoc();
            break;
        }
        else
        {
            cout << "Chon mode cung chon sai, chon lai de!\n";
        }
    }
}
// Code by TN
// modded