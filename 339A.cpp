#include <iostream>
#include <string>
using namespace std;

int main()
{
    string e;
    cin >> e;
    int arr[3] = {0, 0, 0};
    int p_ct = e.size()/2;
    for(int i = 0; i < e.size(); ++++i){
        arr[(e[i] - '1')]++;
    }
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < arr[i]; ++j){
            cout << ((char)('1' + i));
            if(p_ct--) cout << '+';
        }
    }
    cout << endl;
}
