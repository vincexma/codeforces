#include <iostream>

using namespace std;

int main() {
    int five = 0;
    int zero = 0;
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x == 5)
            ++five;
        else
            ++zero;
    }

    if(zero == 0){
        cout << -1 << endl;
        return 0;
    }

    if(five < 9){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < five/9; ++i)
        cout << "555555555";
    for(int i = 0; i < zero; ++i)
        cout << '0';
    cout << endl;
}
