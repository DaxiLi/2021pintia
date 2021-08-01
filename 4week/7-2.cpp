#include <iostream>
#include <stack>
#include <deque>
#include <vector>
#include <set>
#include <map>
#include <cstring>

using namespace std;

// struct G{
//     int a;
//     int b;

//     bool operator <(const struct G &t)const{
//         return this->a <  t.a;
//     }
// }
int flag[12] = {0};

void BFS(int G[12][12], int index, int N, int E)
{
    for (int i = index  +1; i < N; i++)
    {
        if (G[index][i] && !flag[i])
        {
            cout << i << ' ';
            flag[i] = 1;
        }
    }
    for (int i = index + 1;i < N ;++i)
    {
        if (G[index][i] && flag[i] != 2)
        {

            flag[i] = 2;
            BFS(G,i,N,E);
        }
    }
}

void DFS(int G[12][12], int index, int N, int E)
{
    if (!flag[index])
    {
        cout << index << ' ';
        flag[index] = 1;
    }
    for (int i = index + 1; i < N; ++i)
    {
        if (G[index][i] && !flag[i])
        {
            DFS(G, i, N, E);
        }
    }
}

int main()
{
    int N, E;
    cin >> N >> E;
    int G[12][12] = {0};
    int a, b;
    while (E--)
    {
        /* code */
        cin >> a >> b;
        G[a][b] = 1;
        G[b][a] = 1;
    }
    memset(flag, 0, sizeof(int) * 12);
    for (int i = 0; i < N; ++i)
    {
        if (!flag[i])
        {
            cout << "{ ";
            DFS(G, i, N, E);
            cout << '}' << endl;
            ;
        }
    }
    memset(flag, 0, sizeof(int) * 12);
    for (int i = 0; i < N; ++i)
    {
        if (!flag[i])
        {
            cout << "{ " << i << ' ';
            flag[i] = 2;
            BFS(G, i, N, E);
            cout << "}" << endl;
        }
    }
    return 0;
}