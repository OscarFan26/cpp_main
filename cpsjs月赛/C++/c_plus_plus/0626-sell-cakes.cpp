/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-26 09:22:11
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
using namespace std;

int main(){
    // 卖饼干
    int target, count = 0;
    cin >> target;
    int sml = 0, mid = 0, big = 0;
    // 10B-5KG  4B-2KG 8B-1KG
    for (int i = 0; i <= 10; i++){
        for (int j = 0; j <= 4; j++){
            for (int k = 0; k <= 8; k++){
                if (i * 5 + j * 2 + k == target){
                    count++;
                    sml = k;
                    mid = j;
                    big = i;
                    printf("%d %d %d\n", big, mid, sml);
                }
            }
        }
    }
    if (!count) cout << "NO"
    return 0;
}
