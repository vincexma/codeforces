#include <iostream>

using namespace std;

int main(){
	int size, incr, num_students = 0, num_teams = 0;
	cin >> size >> incr;
	for(int i = 0; i < size; ++i){
		int curr;
		cin >> curr;
		if(curr + incr < 6){
			num_students++;
			if(num_students == 3){
				num_teams++;
				num_students = 0;
			}
		}
	}
	cout << num_teams << endl;
}
