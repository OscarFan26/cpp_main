/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-26 11:44:46
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
using namespace std;

int main(){
    // 加密: 都是数字， 先将一个数字+5， %10得到余数
    // 然后奇偶为swap,就是第一位和第二位互换，等等
    int raw_arr[10] = {};
    for (int i = 0; i < 10; i++){
        cin >> raw_arr[i];
        raw_arr[i] = (raw_arr[i] + 5) % 10;
    }
    for (int i = 0; i < 5; i++)
        swap(raw_arr[(i+1)*2-2], raw_arr[(i+1)*2-1]);
    for (int i = 0; i < 10; i++)
        cout << raw_arr[i] << " ";
    return 0;
}
