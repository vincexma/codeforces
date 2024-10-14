#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user;
    int count = 0;
    bool set[26] = {false};
    cin >> user;
    for(char i : user){
        count += !set[i - 'a'];
        set[i - 'a'] = true;
    }
    if(count % 2){
        cout << "IGNORE HIM" << endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}