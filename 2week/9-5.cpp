#include <iostream>
#include <math.h>


using namespace std;

inline int Chek(int val,int N)
{
    return !(N%val);
}


int main(){
    int N;
    cin >> N;
    int res = 1;
    int length = 1;
    int ct = 1;
    for (int i = 1;i < sqrt(N);++i)
    {
        int j = i,sum = i;
        while (N%sum == 0)
        {
            /* code */
            sum *= ++j;
        }
        if (j - i >= length)
        {
            length = j - i;
            res = i;

        }
    }
    cout << length <<endl <<res;
    for (int k = 1;k < length;k++)
    {
        cout << "*" << res + k ;
    }
    cout <<endl;
    return 0;
}