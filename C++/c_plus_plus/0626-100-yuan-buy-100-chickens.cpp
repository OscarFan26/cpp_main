/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-26 09:06:59
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
using namespace std;

// 百元买百鸡问题(5元3元1元)
int main(){
    int big = 0, mid = 0, sml = 0;
    for (int i = 0; i <= 100; i++){
        for (int j = 0; j <= 100; j++){
            for (int k = 0; k <= 100; k++){
                if (5*i + 3*j + k / 3 == 100 && i + j + k == 100 && k % 3 == 0){
                    big = i;
                    mid = j;
                    sml = k;
                    printf("%d %d %d\n", big, mid, sml);
                }
            }
        }
    }
}
