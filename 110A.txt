#include <iostream>
#include <string>

using namespace std;

int main()
{
    int lucky_count = 0;
    string num; //while(cin >> char)?
    cin >> num;
    for(char i : num)
        lucky_count += (i == '4' || i == '7');
    cout << ((lucky_count == 4 || lucky_count == 7) ? "YES\n" : "NO\n");
    return 0;    
}
