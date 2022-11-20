// Made By OscarFan
// Date:  7/23/2022 11:24 AM
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
// FILE NAME: the-best-choice.cpp
//
# include <iostream>
# include <iomanip>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <cctype>
# include <ctime>
# include <cmath>
# include <algorithm>

using namespace std;

int main() {
    // 求出性价比->排序
    vector<double> vec; // 储存性价比
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        vec.push_back(a / b);
    }
    sort(vec.begin(), vec.end(), greater<double>());
    for (double d : vec) { cout << fixed << setprecision(3) << d << ' '; }
    return 0;
}