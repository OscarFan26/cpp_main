// Made By OscarFan
// Date:  8/6/2022 10:29 AM
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
// FILE NAME: 0806-sort--bucket-sort.cpp
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
    // 桶排序
    int n;
    cin >> n;
    int a[10001] = {};
    for (int i = 0; i < n; i++) {
        int t_n;
        cin >> t_n;
        a[t_n]++;
    }
    for (int i = 0; i < 10001; i++)
        for (int j = 0; j < a[i]; j++)
            cout << i << " ";
    
    return 0;
}