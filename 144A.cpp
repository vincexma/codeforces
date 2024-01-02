#include <iostream>

using namespace std;

int main()
{
    int runs, cand;
    int min, min_ind = 0, max, max_ind = 0;

    cin >> runs;
    cin >> cand;

    min = cand;
    max = cand;

    for(int i = 1; i < runs; ++i){
        cin >> cand;
        if(!(cand > min)){
            min = cand;
            min_ind = i;
        }
        if(cand > max){
            max = cand;
            max_ind = i;
        }
    }
    cout << (max_ind + (runs - min_ind - 1) - (min_ind < max_ind)) << endl;
    return 0;
}
