#include <bits/stdc++.h>
using namespace std;

int isPrime(int x)
{
    int i;
    int flat = 1;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[20]; //输出时的数组
    int i = 2, j;
    a[1] = 1;
    a[2] = 2;
    int flag = 0; 
    while (1)
    {
        flag = 1;
        for (j = 1; j < i; j++) //数字不能重复，所以如果和前面的数字有重复则不符合
        {
            if (a[j] == a[i])
            {
                flag = 0;
                break;
            }
        }
        if (!isPrime(a[i - 1] + a[i])) flag = 0;
        if (flag == 1 && i == n && isPrime(a[1] + a[n])) //如果前面的都满足，且n个数都放完了，因为是个环，所以还要判断第一个数和最后一个数相加是否是素数，符合则输出
        {
            for (j = 1; j < n; j++)
                printf("%d ", a[j]);
            printf("%d\n", a[n]);
        }
        if (flag == 1 && i < n) //还没放到最后一个数，则i++，
        {                       
            a[++i] = 1;
            continue;
        }
        while (a[i] == n && i > 0)
            i--;    // 如果a[i]==n了，依旧不符合，改前面一个数字
        if (i > 0)
        {
            a[i] += 1; //前面设置的是从1开始，不符合则加1
            if (a[1] == 2)
                return 0; //因为是个环，第一个数到了2就有重复了，所以到了2就结束
        }
        if (i == 0)
            break;
    }
    return 0;
}