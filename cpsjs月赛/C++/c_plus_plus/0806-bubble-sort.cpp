// Made By OscarFan
// Date:  8/6/2022 11:27 AM
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
// FILE NAME: 0806-bubble-sort.cpp
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
    // classic: bubble sort
    int n;
    cin >> n;
    int a[1001] = {};
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n-1; j++)
            if (a[j] > a[j+1]) swap(a[j], a[j+1]);
    for (int i & a) cout << a <<    " ";
    return 0;
}