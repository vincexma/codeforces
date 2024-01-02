#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    while(x--)
        cout << n-- << ' ';
    for(int i = 0; i != n; ++i)
        cout << i + 1 << ' ';
}