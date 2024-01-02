#include <iostream>
 
using namespace std;
 
int main()
{
    int xsum = 0, ysum = 0, zsum = 0;
    int vecs, x, y, z;
    cin >> vecs;
    while(vecs--){
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }
    cout << ((xsum == 0 && ysum == 0 & zsum == 0) ? "YES\n" : "NO\n");
}
