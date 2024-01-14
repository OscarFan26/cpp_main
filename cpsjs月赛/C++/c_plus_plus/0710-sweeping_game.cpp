// Made By OscarFan
// Date:  2022/7/2 上午 08:03
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
// FILE NAME: sweeping_game.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    //  扫雷：给出雷的分布情况，输出每个无雷区旁边的雷的数量
    int lines, rows;
    cin >> lines >> rows;
    char arr[lines][rows];
    for (int i = 1; i <= lines; i++){
        for (int j = 1; j <= lines; j++) cin >> arr[i][j];
    }
    for (int i = 1; i <= lines; i++){
        for (int j =  1 ; j <= lines; j++){
            if (arr[i][j] != '*'){
                int count = 0;
                if (arr[i-1][j-1] == '*') count++;
                if (arr[i-1][j] == '*') count++;
                if (arr[i-1][j+1] == '*') count++;
                if (arr[i][j-1] == '*') count++;
                if (arr[i][j+1] == '*') count++;
                if (arr[i+1][j-1] == '*') count++;
                if (arr[i+1][j] == '*') count++;
                if (arr[i+1][j+1] == '*') count++;
                cout << count;
            } else if (arr[i][j] == '*') cout << '*';
        }
        cout << endl;
    }
    return 0;
}