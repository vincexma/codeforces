#include <iostream>
#include <vector>

using namespace std;

int main(){
    int r, c;
    cin >> r >> c;

    int fr = 0, fc = c;
    vector<bool> fc_v(c, false);

    for(int i = 0; i < r; ++i){
        bool clear = true;
        for(int j = 0; j < c; ++j){
            char k;
            cin >> k;
            if(k == 'S'){
                clear = false;
                fc -= !fc_v[j];
                fc_v[j] = true;
            }
        }
        fr += clear;
    }
    cout << (fr * c + fc * r - fc * fr) << endl;
}