/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> q;
    for (int i = 1; i <= 5; i++)
        q.push_front(i);
    for (int i = 6; i <= 10; i++)
        q.push_back(i);
    cout << q.size() << endl;
    int sum = 0;
    while (!q.empty()) {
        sum += q.front();
        cout << q.front() << " ";
        q.pop_front();
    }
    cout << endl << sum;
    return 0;
}
