#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

struct G
{
    /* data */
    int node;
    int next;
    int val;
    G(int a, int b, int c)
    {
        this->node = a;
        this->next = b;
        this->val = c;
    }

    bool operator<(const struct G &tg) const
    {
        if (this->node == tg.node)
        {
            return this->next < tg.next;
        }else{
            return this->node < tg.node;
        }
    }
    bool operator==(const struct G &tg) const
    {
        return this->node == tg.node;
    }
    bool operator==(const int inval) const
    {
        return this->node == inval;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    int i = e;
    multiset<G> graph;
    int a, b, c;
    while (i--)
    {
        /* code */
        cin >> a >> b >> c;
        graph.insert(G(a, b, c));
    }
    multiset<G>::iterator it = graph.begin();
    while (it != graph.end())
    {
        /* code */
        int val = it->node;
        cout << val << ":";
        for (;it != graph.end();it++)
        {
            if (it->node == val)
            {
                cout << "(" << it->node << "," << it->next << ','<< it->val<<')';
            }else{
                cout << endl;
                break;
            }
        }
    }

    return 0;
}