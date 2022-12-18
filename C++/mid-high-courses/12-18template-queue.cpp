/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    for (int i = 1; i <= 10; i++)
        q.push(i);
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    int sum = 0;
    while (!q.empty()) {
        sum += q.front();
        cout << q.front() << " ";
        q.pop();
        
    }
    cout << endl << sum;
    return 0;
}
