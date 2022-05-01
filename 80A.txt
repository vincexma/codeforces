#include <iostream>

using namespace std;

bool is_prime(unsigned int x){
    if(x % 2 == 0 && x > 2) return false;
    for(unsigned int i = 3; i*i < x + 1; i += 2)
        if(x % i == 0)
            return (x == 3);
    return (x != 9);
}

int main()
{
    unsigned int x, y;
    cin >> x >> y;
    if(!is_prime(y)){
        cout << "NO\n";
        return 0;
    }
    for(unsigned int i = x + 1; i < y; ++i){
        if(is_prime(i)){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
