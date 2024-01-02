#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> tv_q;
    int n, m;
    cin >> n >> m;

    while(n--){
        int x;
        cin >> x;
        tv_q.push(x);
    }

    int s = 0;
    while(m-- && tv_q.top() < 0){
        s += tv_q.top();
        tv_q.pop();
    }

    cout << -s;
}