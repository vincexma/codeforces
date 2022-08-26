#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for(int r = 0; r < n; ++r){
        for(int c = 0; c < n; ++c){
            cout << ((r == c) ? k : 0) << ' ';
        }
        cout << endl;
    }
    
}
