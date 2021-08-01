#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int N;
    deque<int> dqA, dqB;
    int c;
    cin >> N;
    while (N--)
    {
        /* code */
        cin >> c;
        if (c % 2)
        {
            dqA.push_back(c);
        }
        else
        {
            dqB.push_back(c);
        }
    }
    int flag = 0;
    while (!dqA.empty() || !dqB.empty())
    {
        /* code */
        int i = 2;
        while (i-- && !dqA.empty())
        {
            /* code */
            if (flag) {
                cout << ' ';
            }else {
                flag = 1;
            }
            cout << dqA.front() ;
            dqA.pop_front();
        }
        if (!dqB.empty())
        {
            if (flag) {
                cout << ' ';
            }else {
                flag = 1;
            }
            cout<<  dqB.front();
            dqB.pop_front();
        }
    }
    
    return 0;
}