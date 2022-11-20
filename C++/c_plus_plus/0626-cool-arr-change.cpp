/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-26 11:18:19
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
using namespace std;


int main(){
    int len, move;
    cin >> len >> move;
    int arr[len+move] = {};
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    for (int i = len - 1; i >= 0; i--)
        arr[i + move] = arr[i];
    for (int i = 0; i < move; i++)
        arr[i] = arr[len + i];
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    return 0;
}
