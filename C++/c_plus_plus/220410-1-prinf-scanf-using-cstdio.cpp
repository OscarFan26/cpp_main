// <-> Made By OscarFan <->
// <-  Description:
/*
 * Using printf and scanf to print out and input.
*/
// ->
// Hope there are no bugs in this file.
#include <iostream>
#include <cstdio>
using namespace std;

// printf and scanf -> cstdio
// printf("format&str", sth)
// scanf("format", target)
/*
 * x 不常用，- 常用, 大部分也适用于scanf()的format.
 *
 * d	   -    以十进制形式输出带符号整数(正数不输出符号)
 * o	   x    以八进制形式输出无符号整数(不输出前缀0)
 * x,X     x    以十六进制形式输出无符号整数(不输出前缀Ox)
 * u	   x    以十进制形式输出无符号整数
 * f	   x    以小数形式输出单、双精度实数
 * e,E     x    以指数形式输出单、双精度实数
 * g,G     x    以%f或%e中较短地输出宽度输出单、双精度实数
 * c	   -    输出单个字符
 * s	   -    输出字符串
 * p	   x    输出指针地址
 * lu      x    32位无符号整数
 * llu     x    64位无符号整数
 * f       -    输出十进制实数，一般对应float类型，也可以是double类型
 * lf      -    输出十进制实数，一般对应double类型，也可以是float类型
 * %       x    输出百分号（%）
 * ld, lld ?    输出 long, long long... OMG
-----------------------------------------------------------
* \\  => '\'
* \t  => 4spcs => tab
* \n  => 换行
* My Question: \r => 光标移至这行的头上？
*/
#include <string>

int main(){
    int num = 10;
    string str = "KO";
    double dbl = 1.001001;
    long long lng = 1029384756473839;
    string hello_world = "This is a <string> Hello World!";
    printf("%s\n", "Hello World"); // %s字符串，后面跟字符串
    printf("%s\n", hello_world.c_str()); // 引用string类变量时要跟.c_str(),
    printf("%.3lf: %s, %d: %c, %s: %c\n", 1.0, "a string", 10293, 'c', "string, not char", 'c');
    printf("a num: %d, a string: %s, a double, %lf, a long long: %lld\n", num, str.c_str(), dbl, lng);
//    ------------------------------------------------------------------------------------------------------------------
    int a;
    printf("%s", "Let's us practice some inputs!");
    printf("I need a num(integer): ");
    scanf("%d", &a);  // scanf后面变量前一定要加`&`!!!
    printf("\nIt's %d\n", a);  // %d是整数，后面跟整数
    string another;
    printf("I need a string: ");
    scanf("%s", &another[0]);
    printf("\nYour input: %s\n", another.c_str());
    printf("\nOK, the last one.\nI need a very long int: ");
    long long lnglng;
    scanf("%lld", &lnglng);
    printf("Your long long is: %lld\n", lnglng);
    printf("Good, see you l8tr.");
    return 0;
}
