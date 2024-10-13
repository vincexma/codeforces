// Bus to Penjamo

#include <iostream>

using namespace std;

int sln(){
    int n, rows, vacant, total = 0, pair = 0, single = 0;
    cin >> n >> rows;
    while(n--) {
        int even_family, family;
        cin >> family;
        even_family = (family >> 1) << 1;
        
        pair += even_family;
        total += family;
        single += (even_family != family);
    }

    vacant = (rows << 1) - total;

    return pair + ((vacant < single) ? vacant : single);
}

int main()
{
    int n;
    cin >> n;
    while(n--){
        cout << sln() << endl;
    }
    return 0;
}