//cpp
#include <iostream>
#include <deque>
#include <stack>

using namespace std;

char ch[17] = "0123456789ABCDEF";

int main() {
    int N,x,tmp;
    cin >> N >> x;
    stack<int> dq;
    while (N >= x)
    {
        tmp = N%x;
        N = (N - tmp)/x;
        dq.push(tmp);
    }
    cout << ch[N];
    while (!dq.empty())
    {
        /* code */
        cout  << ch[dq.top()];
        dq.pop();
    }
    

    return 0;
}