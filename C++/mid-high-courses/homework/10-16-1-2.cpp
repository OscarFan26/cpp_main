/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
	/*
	【问题描述】
	小 X 想要学游泳。 这天，小 X 来到了游泳池，发现游泳池可以用 N 行 M 列的格 来表示，每个格 的面积 都是 1，且格 内水深
	相同。 由于小 X 刚刚入门，他只能在水深相同的地方游泳。为此，他把整个游泳池看成若干片 区域，如果两个格 相邻 （上下左右
	四个方向）且水深相同，他就认为它们属于同一片区域。 小 X 想知道最大的一片区域面积是多少，希望你帮帮他。
	输入：
	第一行包含用一个空格隔开的两个整数 N,M。 接下来 N 行，每行包含 M 个 1 到 9 的数字，表示每个格 的水深。
	输出：
	第一行包含一个整数，表示最大的一片区域面积
	【样例输入】
	3 3
	1 2 4
	2 2 4
	1 5 2
	【样例输出】
	3

	WARNING: NO VECTOR, 回溯
	*/
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++){
			int t = 0;
			for (int k = 0; k < n; k++)
				for (int l = 0; l < m; l++)
					if (a[k][l] == a[i][j])
						t++;
			ans = max(ans, t);
		}
	cout << ans - 1 << endl;

	return 0;
}
