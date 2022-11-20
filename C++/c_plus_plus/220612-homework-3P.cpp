// Made By OscarFan
// Date:   2022/6/12 上午 11:52
//       _..._                                                                       
//    .-'_..._''.                                                                    
//  .' .'      '.\                                                                   
//   .'                                                                              
// . '                              .-.                              .-.                 
//| |                           | |                              | |                 
//| |                       ,--| |---.                      ,---| |---.             
//. '                       `---| |---'                      `---| |---'             
// \ '.          .               | |                              | |                 
//  '. `._____.-'/            `-'                              `-'                 
//   `-.______ /                                                                    
//           `                                                                     
//                                                                            
//    No Bugs forever~~~
//    Description:
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
//    输入一个十进制数字，将其转换为m进制的数字并输出
//    输入：n,m 代表要将十进制的数字n转换为m进制的数字（m<=16)
//    输出：一个m进制的数字
    int target, m;
    cin >> target >> m;
    int sum = 0;
    int pointer = 0;
    string arr[1001];
    while (target) {
        if ((target % m ) >= 10) arr[pointer++] = (target % m) + 'A' - 10;
        else arr[pointer++] = target % m + '0';
        target /= m;
    }
    for (int i = pointer - 1; i >= 0; i--)
        cout << arr[i];
    return 0;
}