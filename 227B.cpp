#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, unsigned int> indicies;
    unsigned int n, m, v = 0, p = 0;

    cin >> n;
    indicies.reserve(n);
    for (unsigned int i = 0; i < n; i++){
        int a;
        cin >> a;
        indicies[a] = i;
    }

    cin >> m;
    while(m--){
        int q;
        cin >> q;
        v += indicies[q] + 1;
        p += n - indicies[q];
    }
    cout << v << ' ' << p << endl;
    return 0;
}
