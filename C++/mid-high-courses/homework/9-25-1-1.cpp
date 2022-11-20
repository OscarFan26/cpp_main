/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

bool is_not_prime(int n) {
    for (int i = 0; i * i < n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}

int main(){
    // 题目名称：聪明的八戒（四）
    // 题目描述：已知   ：
    // 1.翠兰藏在了一座宝塔的某一层，八戒从第0层开始搜索。
    // 2.上一层塔需要6s，下一层塔需要4s，搜寻一层需要5s。
    // 3.八戒要搜索n个楼层，必须按照给定的楼层顺序依次搜寻。
    // 4.若到达某一层搜寻结束所用的总时间数与楼层数之和为合数，则认为翠兰极有可能出现在该层。
    // 输入描述：这回我们每次输入x组数据，每组数据包括一个数据n以及n个层数。直到输入的n=0时，表示输入结束。
    // 输出描述：输出这x组数据的结果，分行展示。
    int inputs[1000][1000] = {};
    int rows = 0;
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; i++) cin >> inputs[rows][i];
        rows++;
    }
    int present_floor = 0;
    int time_already_cost = 0;
    bool is_output = false;
    for (int i = 0; i < rows; i++)
    {
        for (int j : inputs[i]) {

            if (j > present_floor) {
                time_already_cost += (j - present_floor) * 4 + 5;
                present_floor = j;
            } else if (j < present_floor) {
                time_already_cost += (present_floor - j) * 6 + 5;
                present_floor = j;
            } 
            if (is_not_prime(time_already_cost + present_floor)) {
                cout << present_floor << " ";
                is_output = true;
                break;
            }
        }
        if (!is_output) {
            cout << "NO" << endl;
            is_output = false;
        } else {
            cout << endl;
            is_output = false;
        }
    }
    return 0;
}
