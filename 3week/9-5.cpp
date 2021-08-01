//cpp
#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>


using namespace std;


int main() {
    stack<char> sk;
    stack<double> cal;
    char c;
    while ((c = cin.get()) != '\n')
    {
        /* code */
        sk.push(c);
    }
    while (!sk.empty())
    {
        /* code */
        c = sk.top();
        // cout << c << ' ' ;
        if ( c <= '9' && c >= '0')
        {
            cal.push(c - '0');
        }else if (c == '/')
        {
            double a = cal.top();
            cal.pop();
            double b = cal.top();
            cal.pop();
            cal.push(a/b);
        }else if (c == '*')
        {
            double a = cal.top();
            cal.pop();
            double b = cal.top();
            cal.pop();
            cal.push(b*a);
        }else if (c == '+')
        {
            double a = cal.top();
            cal.pop();
            double b = cal.top();
            cal.pop();
            cal.push(b+a);
        }else if (c == '-')
        {
            double a = cal.top();
            cal.pop();
            double b = cal.top();
            cal.pop();
            cal.push(a-b);
        }
        // cout << cal.top() <<endl;
        sk.pop();
    }
    
    printf("%.1f\n",cal.top());

    return 0;
}