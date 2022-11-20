// Made By OscarFan
// Date:  7/23/2022 9:56 AM
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
// FILE NAME: guess.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>
# include <ctime>


using namespace std;

int main() {
//    抽奖
    srand(time(0));
    int num = rand() % 10;
    if (num >= 8) cout << "一等奖";
    else if (num >= 5) cout << "二等奖";
    else cout << "三等奖";
    return 0;
}