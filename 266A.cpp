#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    cin >> line >> line;
    
    int rem = 0;
    for(int i = 1; i < line.size(); ++i){
        rem += (line[i - 1] == line[i]);
    }
    cout << rem << endl;
}
