/*小明在玩一个消除游戏。有 
 个 
 的木块一字排开，编号分别是 
。每一块木块有一个类别，分别是 'a' 或者 'c'，其中 'a' 类的木块数量是 'c' 类的木块数量的 
 倍。每一次操作，可以选择满足“要求”的 
 个 'a' 类木块和 
 个 'c' 类木块，一起消除，然后在消除的地方放上挡板。这里说到的“要求”，是指对于想要选择消除的 
 块木块中的任意两块，它们之间没有挡板。

小明玩不太好这个游戏，他来求助你，你能够帮助他吗？

输入
第一行两个整数 
，表示木块的数量和 
，保证 
 是 
 的倍数。

第二行一个长度为 
 的字符串，每个字符都是 'a' 或者 'c'，依次表示木块的类别。

输出
输出 
 行，每行 
 个递增的正整数，表示一次消除的木块的编号。

数据保证一定有解。如果有多个解，任意输出一个解即可。*/
#include <bits/stdc++.h>
