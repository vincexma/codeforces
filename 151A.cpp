#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    nl = (k * l) / nl;
    k = c * d;
    l = p / np;

    nl = (nl > k) ? k : nl;
    nl = (nl > l) ? l : nl;
    cout << (nl / n);

    return 0;
}