#include <iostream>
#include <string>

using namespace std;

int main()
{
    int s, t;
    string order;
    cin >> s >> t >> order;

    bool settled;
    while(t-- && !settled){
	settled = true;
        for(int i = 0; i < s - 1; ++i){
            if(order[i] == 'B' && order[i + 1] == 'G'){
		settled = false;

                order[i] = 'G';
                order[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << order << endl;
}