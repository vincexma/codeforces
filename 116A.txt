#include <iostream>

using namespace std;

int main()
{
    int n, i, max = 0, c = 0;
    cin >> n;
    while(n--){
        cin >> i;
        c -= i;
        cin >> i;
        c += i;
        max = (c > max) ? c : max;
    }
    cout << max << endl;
}
