#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *l;
    node *r;
    node(int x)
    {
        data = x;
        l = NULL;
        r = NULL;
    }
};

void LRN(node *t)
{
    if (t == NULL)
        return;
    LRN(t->l);
    LRN(t->r);
    cout << t->data << " ";
}

void themnode(node *&t, int x)
{
    if (t == NULL)
        t = new node(x);
    else
    {
        if (x < t->data)
            themnode(t->l, x);
        else
            themnode(t->r, x);
    }
}

void duyet()
{
    int n;
    cin >> n;
    node *t = NULL;
    while (n--)
    {
        int x;
        cin >> x;
        themnode(t, x);
    }
    LRN(t);
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        duyet();
    }
}
