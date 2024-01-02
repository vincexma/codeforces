#include <iostream>

using namespace std;

int main()
{
    int t, l, r, lc = 0, rc = 0;
    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> l >> r;
        lc += l;
        rc += r;
    }
    l = (lc > t / 2) ? (t - lc) : lc;
    r = (rc > t / 2) ? (t - rc) : rc;

    cout << (l + r) << endl;
    return 0;
}
