#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    int f, t;
    cin >> f >> t;
    int mj = (t > k) ? f - t + k : f;
    while(--n){
        cin >> f >> t;
        int j = (t > k) ? f - t + k : f;
        mj = (mj < j) ? j : mj;
    }
    cout << mj << endl;

    return 0;
}
