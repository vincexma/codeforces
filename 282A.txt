#include <iostream>

using namespace std;

int main() {
    int n, x = 0;
    char i;
    cin >> n;
    while(n--){
        cin >> i >> i;
        if(i == '+'){
            ++x;
        }
        if(i == '-'){
            --x;
        }
        cin >> i;
    }
    cout << x << endl;
}
