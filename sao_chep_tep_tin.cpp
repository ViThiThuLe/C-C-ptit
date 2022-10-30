#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream Pin("PTIT.in");
    ofstream Pout("PTIT.out");
    while (!Pin.eof())
    {
        string s;
        getline(Pin, s);
        Pout << s;
        Pout << endl;
    }
    Pin.close();
    Pout.close();
}