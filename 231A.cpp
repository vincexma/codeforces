#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n, r = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if ((a + b + c) >> 1){
            r++;
        }
    }
    cout << r << endl;
    return 0;
}