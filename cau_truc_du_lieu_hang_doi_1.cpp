#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<int> q;
        int s;
        int x;
        while (n--)
        {
            cin >> s;
            // trả về kích thước của queue
            if (s == 1)
            {
                cout << q.size() << endl;
            }
            // nếu queue rỗng thì in YES, nếu không in NO
            else if (s == 2)
            {
                if (q.empty())
                {
                    cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;
            }
            // cho 1 số nguyên và đẩy số nguyên vào cuối queue
            else if (s == 3)
            {
                cin >> x;
                q.push(x);
            }
            // loại bỏ phần tử đầu của queue nếu queue khác rỗng
            else if (s == 4)
            {
                if (!q.empty())
                    q.pop();
            }
            // trả về phần tử đầu queue, nếu queue rỗng in ra -1
            else if (s == 5)
            {
                if (q.empty())
                    cout << -1 << endl;
                else
                    cout << q.front() << endl;
            }
            // trả về phần tử cuối queue, nếu queue rỗng in ra -1
            else
            {
                if (q.empty())
                {
                    cout << -1 << endl;
                }
                else
                    cout << q.back() << endl;
            }
        }
    }
}