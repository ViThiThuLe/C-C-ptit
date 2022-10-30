#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
    {
        string s;
        getline(cin, s);
        string a[100];
        int k = 0;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
            {
                a[k] = 2;
                k++;
            }
            else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
            {
                a[k] = 3;
                k++;
            }
            else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
            {
                a[k] = 4;
                k++;
            }
            else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
            {
                a[k] = 5;
                k++;
            }
            else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
            {
                a[k] = 6;
                k++;
            }
            else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
            {
                a[k] = 7;
                k++;
            }
            else if (s[i] == 'T' || s[i] == 'V' || s[i] == 'U' || s[i] == 't' || s[i] == 'u' || s[i] == 'v')
            {
                a[k] = 8;
                k++;
            }
            else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
            {
                a[k] = 9;
                k++;
            }
        }
        int check = 1;
        for (int i = 0; i < k / 2; i++)
        {
            if (a[i] != a[k - i - 1])
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}