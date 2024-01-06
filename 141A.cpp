#include <iostream>
#include <string>

using namespace std;

int main(){
	int chars[26] = {0};
	string a, b, c;
	cin >> a >> b >> c;

	for(char i : a){
		chars[i - 'A']++;
	}
	for(char i : b){
		chars[i - 'A']++;
	}
	for(char i : c){
		chars[i - 'A']--;
	}
	for(int i : chars){
		if(i != 0){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
