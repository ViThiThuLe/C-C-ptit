#include <bits/stdc++.h>
using namespace std;

int ok;
vector<int> res;

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
    if (t == NULL || ok == 1) // neu di qua r thi k duyet nua
        return;
    if (t->data == a) // neu node cho den co data = a
    {
        ok = 1;           // danh dau la da di qua
        noinode(t, b, c); // luc nay t=a -> chi can chuyen b vao
    }
    else // neu data != a -> t tro sang trai/phai de duyet tiep
    {
        taocay(t->l, a, b, c);
        taocay(t->r, a, b, c);
    }
}

void bfs(node *t)
{
    queue<node *> q;
    q.push(t);
    // duyet theo tung muc cua cay nhi phan da tao
    while (!q.empty())
    {
        node *v = q.front();
        q.pop();
        res.push_back(v->data); // push data vao vector res
        if (v->l != NULL)
            q.push(v->l);
        if (v->r != NULL)
            q.push(v->r);
    }
}

void duyet()
{
    res.clear();
    int n;
    cin >> n;
    node *t = NULL;
    while (n--)
    {
        int a, b;
        char c;
        cin >> a >> b >> c;
        ok = 0;
        if (t == NULL)
        {
            t = new node(a); // duyet node dau tien (goc)
            noinode(t, b, c);
        }
        else
            taocay(t, a, b, c);
    }
    bfs(t);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
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
