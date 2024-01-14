/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-26 09:44:23
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
using namespace std;

bool isPrime(int target){
    if (target == 1) return false;
    for (int i = 2; i <= target / 2; i++){
        if (target % i == 0) return false;
    }
    return true;
}

int main(){
    // 合数分解
    // 判断输入是否是质数

    int num; 
    cin >> num;
    if (isPrime(num)){
        cout << "NotPrime";
        return 0;
    }
    // 开始分解合数（短除法）
    int target_prime_num = 2;
    int all_results[num] = {};
    int present_result = num;
    int present_result_index = 0;
    while (present_result > 1){
        if (present_result % target_prime_num == 0){
            present_result /= target_prime_num;
            all_results[present_result_index] = target_prime_num;
            present_result_index++;
        } else { 
            if (isPrime(target_prime_num+1)){
                target_prime_num++;
            } else {
                for (int i = target_prime_num+1; i < num; i++){
                        if (isPrime(i)){
                            target_prime_num = i;
                            break;
                        }
                    }
                }
            }
        }
        cout << num << "=";
        for (int x = 0; x < present_result_index; x++)
            if (present_result_index - 1 == x)
                cout << all_results[x];
            else
                cout << all_results[x] << "*";
    
}
