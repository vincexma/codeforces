#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user;
    int count = 0;
    bool set[26] = {false};
    cin >> user;
    if (user == ""){
        cout << "IGNORE HIM" << endl;
        return 0;
    }
    for(char i : user){
        set[i - 'a'] = true;
    }
    for(bool i : set){
        count += i;
    }
    if(count % 2){
        cout << "IGNORE HIM" << endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}