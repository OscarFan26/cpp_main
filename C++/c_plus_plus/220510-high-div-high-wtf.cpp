#include <iostream>
#include <cstring>  // bypass
#include <string>
# include <cstdlib>
#include <cstdio>   // bypass
#include <vector>   // bypass
#include <algorithm>// bypass
using namespace std;

// 高精度数字 除以 高精度数字
/*
>  1. 倒序存储 => save_arr | 19 ~ 26
-  2. 模拟减法 => divide | 
-  3.5  辅助  => || <copy_arr>  28 ~ 39
                || <compare>   41 ~ 53
-  3.9  减法  =>  minus_arrs || 
-  3. 输出
*/

void save_arr(int a[]){
    // 倒序存储 - 将会调用两次
    string s; // #include <string>
    cin >> s; // 输入
    a[0] = s.length(); // 这就是为什么第一位要留空
    // 存储
    for (int i = 1; i <= a[0]; i++) a[i] = s[a[0]-i] - '0';
}

void copy_arr(int from[], int to[], int start){
    /**
     * @介绍: 复制数组内容
     * @参数: 从from数组复制到to数组，从start开始复制
     * @返回: 无返回值
     */    
    for (int i = 1; i <= from[0]; i++){
        to[i+start-1] = from[i]; // 复制from数组到to数组
    }
    to[0] = from[0] + start - 1; 
    // 记录复制完的位数，这样divide函数才能正常进行下去
}

int compare(int a[], int b[]){
    /**
     * @介绍: 比较数组
     * @参数: 两个数组
     * @返回: 返回数字-1, 0, 1
     */    
    // 如果a数组＞b数组，返回1；小，返回-1；等，返回0
    if (a[0] > b[0]) return 1; 
    else if (a[0] < b[0]) return -1;
    for (int i = a[0]; i > 0; i--){
        if (a[i] > b[i]) return 1;
        else if (a[i] < b[i]) return -1;
    }
    return 0;
}

void minus_arrs(int a[], int b[]){
    /**
     * @介绍: 高精度减法
     * @参数: 两个数组
     * @返回: 无返回值
     */    
    int flag = compare(a, b); // 比较数组
    if (flag == 0) a[0] = 0; // 相等，不用减法
    else if (flag == 1) {  // 这样减法才有意义
        for (int i = 1; i <= a[0]; i++){ // 减法就不需介绍了
            if (a[i] < b[i]) {
                a[i+1]--;
                a[i] += 10;
            }
            a[i] -= b[i];
        }
        while (a[a[0]] == 0 && a[0] > 0) a[0]--; // 去除前导0
    } 
}

void divide(int a[], int b[], int c[]){
    /**
     * @介绍:  模拟减法 
     * @参数:  a: 被除数, b: 除数, c: 商
     * @返回:  无返回值
     */    
    /*
        为什么要倒序存储呢？
        因为 高精度减法 我们学过，高精度减法是需要倒序输入的， 
        所以为了方便 高精度减法，我们要倒序存储。
    */
    int temp[1001]; // 一个临时的数组，存放除数，保护除数
    c[0] = a[0] - b[0] + 1; // 求最大的位数
    for (int i = c[0]; i > 0; i--){  // 开始模拟减法
        memset(temp, 0, sizeof(temp));  // 将temp清零
        copy_arr(b, temp, i);  // 将除数复制到temp
        while (compare(a, temp) >= 0){  // 如果a大于等于temp，则a减去temp
            // 为啥 ≥ 0 呢？ 因为compare这个自定义函数的返回值将会是-1， 0， 1
            c[i]++; // 记录减的次数，就是商
            minus_arrs(a, temp); // 减法，被除数a减去除数temp
        }
    }
    while (c[0] > 0 && c[c[0]] == 0) c[0]--; // 去除前面的0
    // c[0]--;
}

void output(int a[]){
    /**
     * @介绍: 输出结果列表
     * @参数: 一个数组
     * @返回: 无返回值
     */    
    // 比较好理解吧？
    if (a[0] == 0) cout << 0 << endl; // 长度为7零的话就输出0
    else {
        for (int i = a[0]; i > 0; i--){
            cout << a[i];
        }
    }
}

int main(){
    int a[1001]={}, b[1001]={}, c[1001]={};
    save_arr(a); save_arr(b); // 输入被除数与除数
    divide(a, b, c);
    output(c);
    // cout << " ";
    output(a);


    system("pause");
    return 0;
}
