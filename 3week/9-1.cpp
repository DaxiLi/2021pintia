#include <iostream> 
#include <stack>


using namespace std;

int main() {
    int N,tmp;
    stack<int> stk;
    cin >> N;
    while (N--)
    {
        /* code */
        cin >> tmp;
        if (tmp)
        {
            cin >> tmp;
            stk.push(tmp);
        }else if (stk.empty()){
            cout << "invalid"<<endl;
        }else{
            cout << stk.top() <<endl;
            stk.pop();
        }
    }
    


    return 0;
}
