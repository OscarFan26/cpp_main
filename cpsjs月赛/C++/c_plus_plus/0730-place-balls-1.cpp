// Made By OscarFan
// Date:  7/30/2022 9:14 AM
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
// FILE NAME: 0730-place-balls-1.cpp
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

int count(int m, int n){
    if (m == 0 || n == 1)
        return 1;
    if (n > m)
        return count(m, m);
    else
        return count(m, n - 1) + count(m - n, n);
}

int main(){
    int m, n;
    cin >> m >> n;
    cout << count(m, n);
    return 0;
}
