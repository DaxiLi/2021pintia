#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;


/**
 * @brief 素数检测，还是枚举，只需要算到N的开方即可，减少不必要计算
 * 
 * @param n 
 * @return int 
 */
int isPrime(int n)
{
    for (int i = 2;i <= sqrt(n);i++)
    {
        if (0 == (n%i) && i <= n -1)
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    int count = 0;
    cin >> N;
    for (int i = 3;i <= N - 2;i+=2)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            count++;
        }
    }
    cout << count;


    return 0;
}