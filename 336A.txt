#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int z = abs(x) + abs(y);
    if(x < 0)
        cout << -z << " 0 0 " << ((y < 0) ? -z : z) << endl;
    else
        cout << "0 " << ((y < 0) ? -z : z) << ' ' << z << " 0" << endl;
}
