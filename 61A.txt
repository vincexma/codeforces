#include <iostream>
#include <string>
using namespace std;

int main()
{
    string bits;
    cin >> bits;
    for(char i : bits){
        char j;
        cin >> j;
        cout << !(i == j);
    }
    cout << endl;
}
