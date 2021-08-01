#include <iostream>
#include <set>

using namespace std;


int main() {
    int N ;
    cin >> N;
    multiset<int> stu;
    int tmp;
    int i = 0;
    while (i < N)
    {
        /* code */
        cin >> tmp;
        stu.insert(tmp);
        i++;
    }
    cout << *stu.begin() << ' ' << stu.count(*stu.begin()) << endl;
    int max = 0;
    int max_val;
    for (auto val : stu)
    {
        if (val > max)
        {
            max = stu.count(val);
            max_val = val;
        }
    }
    cout << max_val << " " << max<<endl;
    return 0;
}