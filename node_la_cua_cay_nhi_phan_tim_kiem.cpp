#include <bits/stdc++.h>
using namespace std;

// NLR: preorder
// LNR: inorder
// LRN: posorder
int cnt[100], m = 0;

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

int ktra(node *t)
{
    queue<node *> q;
    int level = 0;
    int sosanh = INT_MAX;
    q.push(t);
    while (!q.empty())
    {
        level++;
        int sizeq = q.size();
        while (sizeq--)
        {
            node *v = q.front();
            q.pop();
            if (v->l != NULL)
            {
                q.push(v->l);
                if (v->l->l == NULL && v->l->r == NULL)
                {
                    if (sosanh == INT_MAX)
                        sosanh = level;
                    else if (sosanh != level)
                        return 0;
                }
            }
            if (v->r != NULL)
            {
                q.push(v->r);
                if (v->r->l == NULL && v->r->r == NULL)
                {
                    if (sosanh == INT_MAX)
                        sosanh = level;
                    else if (sosanh != level)
                        return 0;
                }
            }
        }
    }
    return 1;
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