// Made By OscarFan
// Date:  2022/7/2 上午 08:50
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
// FILE NAME: interesting_arr.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[101][101] = {};
    for (int k = 1; k <= n; k++){
        for (int i = k; i <= 2*n-k; i++){
            for (int j = k; j <= 2*n-k; j++) arr[i][j] = k;
        }
    }
    for (int i = 1; i <= 2*n-1; i++){
        for (int j = 1; j <= 2*n-1; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}