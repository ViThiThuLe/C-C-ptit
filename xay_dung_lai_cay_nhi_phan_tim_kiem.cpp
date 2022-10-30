#include <bits/stdc++.h>
using namespace std;

// NLR: preorder
// LNR: inorder
// LRN: posorder

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

// ham duyet theo preorder-NLR
void NLR(node *t)
{
    if (t == NULL)
        return;
    cout << t->data << " ";
    NLR(t->l);
    NLR(t->r);
}

// cay nhi phan tim kiem => nho ho ben trai, lon hon ben phai
void themnode(node *&t, int x)
{
    if (t == NULL)
    {
        t = new node(x);
    }
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
    NLR(t);
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        duyet();
    }
}