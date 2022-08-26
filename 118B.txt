#include <iostream>

using namespace std;

int main() {
    int h;
    cin >> h;
    for(int i = 0; i < 2 * h + 1; ++i){
        // opener spaces
        int r = (h < i) ? 2 * h - i : i;
        for(int j = h - r; j; --j)
            cout << "  ";
        
        // numbers
	for(int j = 0; j < r * 2; ++j)
            cout << ((j > r) ? 2 * r - j : j) << ' ';
        cout << 0 << endl;
    }
}
