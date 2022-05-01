#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if(num%2){
        cout << -1 << endl;
        return 0;
    }
    for(int i = 1; i <= num; ++i){
        cout << (i + ((i % 2) ? 1 : -1)) << ' ';
    }
    cout << endl;
    return 0;
}
