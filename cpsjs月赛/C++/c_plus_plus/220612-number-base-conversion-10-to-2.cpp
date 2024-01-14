// Made By OscarFan
// Date:   2022/6/12 上午 09:21
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
//
# include <iostream>
using namespace std;

int main() {
    // 进制转换 10 => 2
    int target, arr[1001];
    cin >> target;
    int pointer = 0;
    while (target) {
        arr[pointer++] = target % 2;
        target /= 2;
    }
    for (int i = pointer - 1; i >= 0; i--)
        cout << arr[i];
    cout << endl;
    return 0;
}
