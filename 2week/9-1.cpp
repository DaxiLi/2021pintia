#include <iostream>


using namespace std;

long long gcd(int a,int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

long long lcm(int a,int b)
{
    return a * b / gcd(a, b); 
}

int main() {
    long long a, b;
    cin >> a >>b;
    cout << gcd(a,b) << ' ' << lcm(a,b) <<endl;
    
    return 0;
}