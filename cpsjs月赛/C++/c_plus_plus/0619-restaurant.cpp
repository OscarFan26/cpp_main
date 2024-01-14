// Made By OscarFan
// Date:  2022/6/19 上午 10:54
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
// FILE NAME: 0619-restaurant.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 有30人去餐馆，付费500元，收费规则：男人：30元，女人：20元，小孩：10元。
    // 输出所有可能的人员分配情况
    int man, woman, boy;
    //man+woman+boy=30;
    for (man = 1; man <= 30; man++){
        for (woman = 1; woman <= (30 - man); woman++) {
            boy = 30 - man - woman;
            if (30 * man + 20 * woman + 10 * boy == 500)
                printf("%d %d %d\n", man, woman, boy);
        }
    }
    return 0;
}