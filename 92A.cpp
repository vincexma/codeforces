#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    m %= (n * (n + 1) / 2);
    for(int i = 1; i < m + 1; ++i){
        m -= i;
    }
    cout << m << endl;
}
