#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int N, tmp;
    deque<int> dq;
    cin >> N;
    while (N--)
    {
        /* code */
        cin >> tmp;
        if (tmp)
        {
            cin >> tmp;
            dq.push_back(tmp);
        }
        else if (dq.empty())
        {
            cout << "invalid" << endl;
        }
        else
        {
            cout << dq.front() << endl;
            dq.pop_front();
        }

    }

        return 0;
}