// Made By OscarFan
// Date:  7/23/2022 10:24 AM
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
// FILE NAME: count-valid-char-in-a-string-using-std-lib-cctype.cpp
//
# include <iostream>
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
    string str;
    int total_count = 0, letters_count = 0, number_count = 0;
    getline(cin, str);
    for (char i : str) {
        if (isalnum(i)) {
            total_count++;
            if (isalpha(i)) letters_count++;
            else if (isdigit(i)) number_count++;
        }
    }
    printf("%d %d %d", total_count, letters_count, number_count);
    return 0;
}