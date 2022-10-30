#include <bits/stdc++.h>
using namespace std;

void sinhxaunhiphan()
{
    int n;
    cin >> n;
    // vi so duoc sinh ra rat dai -> dung string
    queue<string> q;
    q.push("1");
    int dem = 0;
    while (!q.empty() && dem < n)
    {
        string a = q.front();
        cout << a << " ";
        // sinh ra 2 so moi tu so cu
        q.push(a + '0');
        q.push(a + '1');
        q.pop();
        dem++;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sinhxaunhiphan();
    }
}
