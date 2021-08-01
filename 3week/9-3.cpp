#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;



int main()
{
    int N, c;
    stack<char> brakets;
    cin >> N;
    cin.get();
    int falg = 1;
    while (N--)
    {
        falg = 1;
        while ((c = cin.get()) != '\n')
        {
            switch (c)
            {
            case '}':
                if (brakets.empty() || brakets.top() != '{')
                {
                    falg = 0;
                }
                else
                {
                    brakets.pop();
                }
                break;
            case ']':
                if (brakets.empty() || brakets.top() != '[')
                {
                    falg = 0;
                }
                else
                {
                    brakets.pop();
                }
                break;
            case ')':
                if (brakets.empty() || brakets.top() != '(')
                {
                    falg = 0;
                }
                else
                {
                    brakets.pop();
                }
                break;
            default:
                brakets.push(c);
                break;
            }
        }
        if(falg && brakets.empty())
        {
            cout << "Yes" <<endl;
        }else
        {
            cout << "No"<<endl;
        }
        while (!brakets.empty())
        {
            /* code */
            brakets.pop();
        }
        
    }

    return 0;
}