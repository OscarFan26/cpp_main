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
//    �齱
    srand(time(0));
    int num = rand() % 10;
    if (num >= 8) cout << "һ�Ƚ�";
    else if (num >= 5) cout << "���Ƚ�";
    else cout << "���Ƚ�";
    return 0;
}