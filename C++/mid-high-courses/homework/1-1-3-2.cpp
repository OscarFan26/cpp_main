#include <bits/stdc++.h>
using namespace std;

int get_one_count( int n ) {
    int s1 = 0;
    do {
        if ( n % 2 == 1 ) s1++;
        n = n / 2;
    } while ( n != 0 );
    return s1;
}

int get_num( int n ) {
    // turn INT n into BINARY
    int s1   = get_one_count( n );
    int pres = n;
    while ( true ) {
        pres++;
        int cnt = get_one_count( pres );
        if ( cnt == s1 ) return pres;
    }
}

int main() {
    /*
    题目名称：数字1的打包
    题目描述：给定一个正整数n，（n由十进制转换为二进制后，把其中1的个数打成个包）比n大的正整数m，使得m与n的二进制表示中有相同数目的1。
    输入描述：若干行，每行一个数n（1<=n<=1000000）,输入 0 则结束。
    输出描述：若干行对应的值。

    样例输入：
    1
    2
    3
    4
    78
    0
    样例输出：
    2
    4
    5
    8
    83

    说明：例如最后一个数据，n是78，它的二进制为1001110，包含4个1，那么最小的比n大的并且二进制表示中只包含4个1的数是83，其二进制为1010011，所以83就是答案。
    */
    int n[ 10000001 ];
    int ptr = 0;
    while ( true ) {
        int x;
        cin >> x;
        if ( !x ) break;
        n[ ptr ] = x;
        ptr++;
    }
    // 对于每一个数
    // 转化二进制 => 统计1的个数 => 向上搜索 => 得出数字
    for ( int i = 0; i < ptr; i++ ) { cout << get_num( n[ i ] ) << endl; }
    return 0;
}
