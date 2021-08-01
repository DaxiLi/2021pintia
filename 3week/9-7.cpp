//cpp
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int N, M, K, index = 1, flag = 1, so; // color stuff count
    cin >> N >> M >> K;
    stack<int> stuff;

    while (K--)
    {
        /* code */
        index = 1;
        flag = 1;
        int i = N;
        while (i--)
        {
            /* code */
            cin >> so;
            while (!stuff.empty() && stuff.top() == index)
            {
                stuff.pop();
                index++;
            }
            if (so != index )
            {
                stuff.push(so);
                if (stuff.size() > M)
                {
                    break;
                }
            }
            else
            {
                index++;
            }
        }
        while (!stuff.empty() && stuff.top() == index)
        {
            stuff.pop();
            index++;
        }
        if (stuff.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        while (!stuff.empty())
        {
            /* code */
            stuff.pop();
        }
    }

    return 0;
}