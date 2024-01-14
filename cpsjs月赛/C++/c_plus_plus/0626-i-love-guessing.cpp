/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-26 10:25:40
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
using namespace std;

int main(){
    // 利用0, 1, 2, 3组成一个各个位不重复的三位数
    // 输出所有可能都组合方式，最后输出个数
    int count = 0;
    for (int i = 1; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            for (int k = 0; k <= 3; k++){
                if (j == k || j == i || k == i) continue;
                printf("%d%d%d ", i, j, k);
                count++;
            }
        }
    }
    cout << endl <<count;
}
