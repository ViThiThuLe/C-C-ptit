#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream Pin("VANBAN.in");
    while (!Pin.eof())
    {
        string s;
        getline(Pin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
        string a[100];
        stringstream s1(s);
        int k = 0;
        while (s1 >> a[k])
        {
            k++;
        }
        for (int i = 0; i < k; i++)
        {
            for (int j = i + 1; j < k; j++)
            {
                if (a[i] > a[j])
                    swap(a[i], a[j]);
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << endl;
            if (a[i] == a[i + 1])
                i++;
        }
        Pin.close();
    }
}
