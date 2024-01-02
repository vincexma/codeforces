#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word, upper = "", lower = "";
    cin >> word;
    
    int bal = 0;
    for(char i : word){
        if(!(i < 'A') && !(i > 'Z')){
            upper += i;
            lower += (char)(i - 'A' + 'a');
            --bal;
        }
        else if(!(i < 'a') && !(i > 'z')){
            upper += (char)(i - 'a' + 'A');
            lower += i;
            ++bal;
        }
        else{
            upper += i;
            lower += i;
        }
    }
    
    cout << ((bal < 0) ? upper : lower);
}