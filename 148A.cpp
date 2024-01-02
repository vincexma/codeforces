#include <iostream>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int c = 0;
    for(int i = 1; i <= d; ++i){
        if(i % k == 0)
            ++c;
        else if(i % l == 0)
            ++c;
        else if(i % m == 0)
            ++c;
        else if(i % n == 0)
            ++c;
    }
    cout << c << endl;

    return 0;
}
