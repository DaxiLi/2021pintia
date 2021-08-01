#include <iostream>



using namespace std;


int main(){
    int N;
    cin >> N;
    int num[N];
    int i = 0;
    int sum = 0;
    while (i < N)
    {
        cin >> num[i];
        i++;
    }
    i = 0;
    while (i < N)
    {
        int tmp = num[i] * 10;
        sum += tmp * ( N - 1);
        for (int val : num)
        {
            sum += val;
        }
        sum -= num[i];
        i++;
    }
    cout << sum;

    return 0;;
}