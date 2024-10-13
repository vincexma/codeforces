// Bus to Penjamo
// Wrong answer on pretest 2
// consider:
//    3 2
//    1 1 2
#include <iostream>

using namespace std;

int sln(){
    int n, r, h = 0;
    cin >> n >> r;
    while(n--) {
        int e, i;
        cin >> i;
        e = (i >> 1) << 1;
        
        h += e;
        r -= e >> 1;
        if(e != i){
            if(r > 0){
                r--;
                h++;
            }
            else{
                h--;
            }
        }
    }
    return h;
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