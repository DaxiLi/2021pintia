//cpp
#include <iostream>
#include <stack>
#include <deque>

using namespace std;


int main() {
    int N,M,S;
    int  c;
    cin >> N>>M>>S;
    deque<int> dq[N + 1];
    cin.get();
    for (int i = 1; i <=N;++i)
    {
        for (int j = 0;j < M;j++)
        {
            dq[i].push_back(cin.get());
        }
        cin.get();
    }
    cin >> c;
    while (c != -1)
    {
        /* code */
        switch (c)
        {
        case 0:
            if (!dq[0].empty())
            {
                cout << (char)dq[0].back();
                dq[0].pop_back();
            }
            break;
        default:
            if (!dq[c].empty() && dq[0].size() < S)
            {
                dq[0].push_back(dq[c].front());
                dq[c].pop_front();
            }else if (!dq[c].empty())
            {
                cout << (char) dq[0].back();
                dq[0].pop_back();
                dq[0].push_back(dq[c].front());
                dq[c].pop_front();
            }
            break;
        }
        cin >> c;
    }
    

    return 0;
}