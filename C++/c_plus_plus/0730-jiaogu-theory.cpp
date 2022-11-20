// Made By OscarFan
// Date:  7/30/2022 10:29 AM
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
// FILE NAME: 0730-jiaogu-theory.cpp
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

int steps;

int jiaogu(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) { cout << n << " "; steps++; jiaogu(n / 2); }
    else { cout << n << " "; steps++; jiaogu(n * 3 + 1); }
}

int main() {
    // 角谷定理
    int n;
    cin >> n;
    cout << jiaogu(n) << endl;
    cout << "STEPS=" << steps;
//    int steps = 0;
//    while (n > 1) {
//        if (n % 2 == 0) {
//            n /= 2;
//            cout << n << " ";
//            steps++;
//        } else {
//            n = n * 3 + 1;
//            cout << n << " ";
//            steps++;
//        }
//    }
//    cout << endl << "STEPS=" << steps;
    return 0;
}