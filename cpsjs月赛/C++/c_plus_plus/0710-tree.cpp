/*
 * @OscarFan 制作 : 
 * @Date: 2022-07-01 17:26:44
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
// 给你若干个数据（2000-2018）,输出数量最多的年份
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, pmax = 0;
    cin >> n;
    int max[n] = {}, j = 0, max_index = 0;
    int count[19] = {};
    for (int i = 0; i < n; i++){ 
        int j = 0;
        cin >> j;
        count[j % 2000]++;
    }

    for (int i = 0; i < 19; i++){
         if (count[i] > pmax){
             pmax = count[i];
             for (int j = 0; j < n; j++){
                 max[j] = 0;
                 max_index = 0;
             }
             max[0] = i + 2000;
             max_index++;
         } else if (count[i] == pmax){
             max[max_index] = i + 2001;
             max_index++;
         }
     }
     for (int i = 0; i < n; i++){
         if (!max[i]) break;
         printf("%d\n", max[i]);
     }
    return 0;
}
