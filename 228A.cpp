#include <iostream>

using namespace std;

int main()
{
    int l[4] = {0};
    int r = 0;
    for(int i = 0; i < 4; i++){
        cin >> l[i];
        for(int j = 0; j < i; j++){
            if(l[j] == l[i]){
                r++;
                break;
            }
        }
    }
    cout << r << endl;
    return 0;
}