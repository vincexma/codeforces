#include <iostream>

using namespace std;

int main()
{
    int tar;
    cin >> tar;
    cout << ((10 < tar && tar < 22) ? ((tar == 20) ? 15 : 4) : 0) << endl;
    return 0;
}
