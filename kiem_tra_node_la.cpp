#include <bits/stdc++.h>
using namespace std;
int ok;

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

void noinode(node *&t, int b, char c)
{
    // t thay doi -> can chuyen tham chieu
    if (c == 'L')
        t->l = new node(b); // neu c=L -> chuyen b vao ben trai t
    else
        t->r = new node(b);
}

void taocay(node *t, int a, int b, char c)
{
    // chi do t nen khong can chuyen tham chieu
    if (t == NULL) // neu di qua r thi k duyet nua
        return;
    if (t->data == a) // neu node cho den co data = a
    {
        //  ok = 1;           // danh dau la da di qua
        noinode(t, b, c); // luc nay t=a -> chi can chuyen b vao
    }
    else // neu data != a -> t tro sang trai/phai de duyet tiep
    {
        taocay(t->l, a, b, c);
        taocay(t->r, a, b, c);
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
        // ok = 0;
        int a, b;
        char c;
        cin >> a >> b >> c;
        if (t == NULL)
        {
            t = new node(a);
            noinode(t, b, c);
        }
        else
            taocay(t, a, b, c);
    }
    if (ktra(t))
        cout << 1 << endl;
    else
        cout << 0 << endl;
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