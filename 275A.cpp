#include <iostream>

using namespace std;

int main()
{
    int press[9];
    for(int i = 0; i < 9; ++i)
        cin >> press[i];
    
    for(int i = 0; i < 9; ++i){
        int tog = press[i];
        if(i > 2)
            tog += press[i - 3];
        if(i < 6)
            tog += press[i + 3];
        if(i % 3 < 2)
            tog += press[i + 1];
        if(i % 3 > 0)
            tog += press[i - 1];
        cout << (1 - tog%2);
        if(i % 3 == 2)
            cout << endl;
    }
}
