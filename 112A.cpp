#include <iostream>
#include <string>
using namespace std;

char lower(char a){
    if(!(a < 'A') && !(a > 'Z'))
        return a - 'A' + 'a';
    return a;
}

int main() {
    string t, b;
    cin >> t >> b;
    for(int i = 0; i < t.size(); ++i){
        if(lower(t[i]) != lower(b[i])){
            cout << ((lower(t[i]) > lower(b[i])) ? 1 : -1) << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
