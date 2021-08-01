#include <iostream>


using namespace std;

int main() {
    int N ;
    cin >> N;
    int num[N];
    int i;
    for (i = 0;i < N;++i)
    {
        cin >> num[i];
    }
    int count = 0;
    // for (i = 0;i < N;++i)
    // {
    //     for (int j = 1;j < N - i - 1;++j)
    //     {
    //         if (num[i] - num[i + j] == j)
    //         {
    //             ++count;
    //         }
    //     }
    // }
    for (i = 1;i < N - 1;i++)
    {
        for (int j = 0;j < N - i;++j)
        {
            if (num[j] - num[j + i] == i)
            {
                count++;
            }
        }
    }
    cout << count <<endl;
    return 0;
}