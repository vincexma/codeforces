#include <iostream>
 
using namespace std;
 
int main()
{
    int bit = 0, pos = -1;
    while(bit == 0){
        cin >> bit;
        pos++;
    }
    
    cout <<  (abs(pos%5 - 2) + abs(pos/5 - 2)) << endl;
}
