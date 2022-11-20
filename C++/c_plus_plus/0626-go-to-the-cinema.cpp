/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-26 10:44:43
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
using namespace std;

int main(){
    // 有七个人去看电影，有三个电影，但是时间重合，输出所有排列方案
    // 注: 0 0 7 == 0 7 0 == 7 0 0
    // 要去除重复！！！
    int count = 0;
    for (int i = 0; i <= 7; i++){
        for (int j = i; j <= 7; j++){
            for (int k = j; k <= 7; k++){
                if (i + j + k != 7) continue;
                printf("%d %d %d\n", i, j, k);
                count++;
            }
        }
    }
    return 0;
}
