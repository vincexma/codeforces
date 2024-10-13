// Kar Salesman
// Wrong answer on pretest 3

#include <iostream>

using namespace std;

int sln(){
    int n, x, r, m = 0, t = 0;
    cin >> n >> x;
    while(n--) {
        int i;
        cin >> i;
        t += i;
        if (i > m){
            m = i;
        }
    }
    r = t - (x * m);
    if (r > 0){
        return m + (r / x) + (r % x != 0);
    }
    return m;
}

int main()
{
    int n;
    cin >> n;
    while(n--){
        cout << sln() << endl;
    }
    return 0;
}