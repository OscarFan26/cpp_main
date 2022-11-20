/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <iostream>
#include <cstdio>
using namespace std;

int a[100][100] = {0}, t = 0;            
bool b[100][100] = {0};                  
int h[8] = {1, 2, 2, 1, -1, -2, -2, -1}; 
int z[8] = {2, 1, -1, -2, 2, 1, -1, -2}; 
int search(int, int, int);               
int print();  
bool do_print = false;                           

int main()
{
    a[1][1] = 1; //从一开始
    b[1][1] = 1; //已经走过
    search(1, 1, 2);
    return 0;
}

int search(int i, int j, int n)
{
    int x, y, q; // x为横,y为纵
    if (n > 25) {
        if (!do_print) {
            print();
            do_print = true;
        }
        return 0;
    }
    for (q = 0; q <= 7; q++)
    { 
        x = i + h[q];
        y = j + z[q];
        if ((!b[x][y]) && x >= 1 && x <= 5 && y >= 1 && y <= 5)
        {
            b[x][y] = 1; //已经使用
            a[x][y] = n;
            search(x, y, n + 1);
            b[x][y] = 0; //回溯
            a[x][y] = 0;
        }
    }
}

int print()
{
    t++;
    if (t <= 5)
    {
        for (int p = 1; p <= 5; p++)
        {
            for (int q = 1; q <= 5; q++)
                printf("%5d", a[p][q]); // 虽然这样输出不符合题目要求但是强迫症友好
            cout << endl;
        }
    }
    else if (t > 5)
        return 0;
}