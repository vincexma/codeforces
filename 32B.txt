#include <iostream>

using namespace std;

int main()
{
    char b;
    while(cin >> b){
        if(b == '.'){
            cout << '0';
            continue;
        }
        cin >> b;
        if(b == '.')
            cout << '1';
        else
            cout << '2';
    }
}