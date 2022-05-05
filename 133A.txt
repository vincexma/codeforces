#include <iostream>
#include <string>

using namespace std;

int main()
{
    string code;
    cin >> code;
    for(char i : code){
        if(i == 'H' || i == 'Q' || i == '9'){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
