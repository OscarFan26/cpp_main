// Made By OscarFan
// Date:  2022/7/2 上午 08:59
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
// FILE NAME: easy_clip_with_arr.cpp
//
# include <iostream>
# include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> m >> n;
    int arr[101][101] = {};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }
    cout << arr[0][0] << " ";
    for (int i = 1; i < n; i++) {
        int x = 0;
        int y = i;
        while (x < m && y >= 0) {
            cout << arr[x][y] << " ";
            x++;
            y--;
        }
    }
    for (int i = 1; i < m; i++) {
        int x = i;
        int y = n - 1;
        while (x < m && y >= 0) {
            cout << arr[x][y] << " ";
            x++;
            y--;
        }
    }
    return 0;
}