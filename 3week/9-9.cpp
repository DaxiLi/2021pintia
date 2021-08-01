//cpp
#include <iostream>
#include <deque>

#define NEXT(p) vmem[p + 1]
#define VALUE(p) vmem[p]
using namespace std;

typedef int address;


int main() {
    int vmem[100005] = {-1},N;
    address L,L1 = 100000;
    cin >> L >> N;
    int i = N,tmp;
    while (i--)
    {
        /* code */
        cin >> tmp;
        cin >> vmem[tmp];
        cin >> vmem[NEXT(tmp)];
    }
    address p = L;
    address p3 = L1;
    while (vmem[p] != -1)
    {
        /* code */
        address p2 = p;
        while (p2 != -1)
        {
            if (vmem[p] == vmem[NEXT(p2)] || vmem[p] == -vmem[NEXT(p2)])
            {
                vmem[NEXT(p3)] = NEXT(p2);
                p3 = vmem[NEXT(p3)];
                vmem[NEXT(p3)] = -1;
            }
            p2 = vmem[NEXT(p2)];
        }
        L = vmem[NEXT(p)];
    }
    p = L;
    while (p != -1)
    {
        /* code */
        cout << vmem[p];
        p = vmem[NEXT(p)];
    }
    
    


    return 0;
}