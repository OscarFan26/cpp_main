// Made By OscarFan
// Date:  8/6/2022 10:45 AM
//       _..._
//    .-'_..._''.
//  .' .'      '.\
//   .'
//   .                .-.          .-.
//| |                 | |          | |
//| |             ,---| |---.  ,---| |---.
//. |             `---| |---'  `---| |---'
// \ '.          .    | |          | |
//  '. `._____.-'/    `-'          `-'
//   `-.______ /
//           `
// TYPE:   C++
// FILE NAME: 0806-practice--bucket-practice-1.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <iomanip>
# include <vector>
# include <cctype>
# include <ctime>
# include <cmath>
# include <algorithm>

using namespace std;

int main() {
    // 桶排序练习1
    int n;
    cin >> n;
    int a[1001] = {};
    for (int i = 0; i < n; i++) {
        int t_n;
        cin >> t_n;
        a[t_n]++;
    }
    sort()
    for (int i = 1000; i >= 0; i--)
        for (int j = 0; j < a[i]; j++)
            cout << i << " ";
    return 0;
}