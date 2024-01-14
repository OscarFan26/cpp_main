/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){

    /*
    二叉排序树(bstA.cpp)
    【题目描述】
    以左右孩子表示法输入一棵二叉树，请判断其是否是二叉排序树(Binary Sort Tree,简称BST)；
    BST的性质如下：
    1、空树是一个BST
    2、左子树所有结点的值均严格小于根结点的值
    3、右子树所有结点的值均严格大于根结点的值
    4、左右子树都是BST(递归定义)
    5、不存在任何重复元素

    【输入格式】
    一共有T组测试数据，每组测试数据的格式如下：
    第一行一个正整数n，表示给定的树的节点的数目，规定节点编号 1~n；
    接下来n行，每行4个正整数i、k、L、R，分别表示节点编号、节点的值、左孩子编号、右孩子编号;
    如果不存在左 / 右孩子，则以0表示。
    每组测试数据之间有一个空白行，不影响输入。
    【输出格式】
    T行，若当前测试数据为BST，输出YES，否则输出NO。
    注意都是大写字母。

    【样例输入】
    2

    6
    1 5 2 3
    2 3 4 0
    3 7 5 6
    4 1 0 0
    5 6 0 0
    6 8 0 0

    6
    1 5 2 3
    2 3 4 0
    3 7 5 6
    4 4 0 0
    5 6 0 0
    6 8 0 0
    【样例输出】
    YES
    NO
    */
    int n;
    cin >> n;
    int arr[n][4] = {};
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    for (int i = 0; i < t; i++) {
        if (arr[i][2] != 0 && arr[arr[i][2] - 1][1] >= arr[i][1]) {
            cout << "NO" << endl;
            continue;
        }
        if (arr[i][3] != 0 && arr[arr[i][3] - 1][1] <= arr[i][1]) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
    
        return 0;
}
