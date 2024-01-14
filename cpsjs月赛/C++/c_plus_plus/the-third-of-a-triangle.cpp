// Made By OscarFan
// Date:  7/23/2022 9:25 AM
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
// FILE NAME: the-third-of-a-triangle.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <cmath>
# include <iomanip>
# include <algorithm>

using namespace std;

int main() {
    // 求三角形的第三边
    int a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << hypot(a, b) << endl;
    return 0;
}
