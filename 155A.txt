#include <iostream>

using namespace std;

int main()
{
    int n, max, min, c = 0, i;
    cin >> n >> max;
    min = max;
    while(--n){
        cin >> i;
        if(i > max){
            max = i;
            ++c;
        }
        else if(i < min){
            min = i;
            ++c;
        }
    }
    cout << c << endl;
    return 0;
}
