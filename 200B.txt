#include <iostream>

using namespace std;

int main()
{
    int num;
    int tot = 0;

    cin >> num;
    for(int i = 0; i < num; ++i){
        int d;
        cin >> d;
        tot += d;
    }
    cout << ((double) tot / num) << endl;
    
    return 0;
}
