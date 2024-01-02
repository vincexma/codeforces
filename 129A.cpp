#include <iostream>

using namespace std;

int main()
{
    int n, tot = 0, o = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int in;
        cin >> in;
        tot += in;
        o += (in % 2);
    }
    cout << ((tot % 2) ? o : (n - o)) << endl;
    return 0;
}
