#include <iostream>
 
using namespace std;

int main(){
    int start, digits[4];
    cin >> start;

    bool done = false;
    start += 1;
    while(!done){
        digits[0] = (start / 1000);
        digits[1] = (start / 100) % 10;
        digits[2] = (start / 10) % 10;
        digits[3] =  start % 10;
        if(digits[0] == digits[3] || digits[1] == digits[3] || digits[2] == digits[3]){
            start += 1;	
	    continue;
        }
        if(digits[0] == digits[2] || digits[1] == digits[2]){
            start += 10 - digits[3];
            continue;
        }
        if(digits[0] == digits[1]){
            start += 100 - digits[3] - 10 * digits[2] + 1;
            continue;
        }
        done = true;
    }
    cout << start << endl;
}
