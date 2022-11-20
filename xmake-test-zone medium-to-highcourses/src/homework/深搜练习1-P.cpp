
#include<bits/stdc++.h>
using namespace std;
int ex,ey,bx,by;
int n,m,maps[66][66];
int dx[5]= {-1,1,0,0};
int dy[5]= {0,0,-1,1};
int way[999][3]= {0};
bool is[100][100];
bool flag;
bool check(int x,int y)
{
    if(!maps[x][y])return false;
    if(x<1||x>n||y<1||y>m)return false;
    return true;
}
void dfs(int dep,int x,int y)
{
    int tx,ty;
    if(x==ex&&y==ey)
    {
        cout<<'('<<bx<<","<<by<<')';//输出路径
        for(int i=1; i<dep; i++)
            cout<<"->"<<'('<<way[i][1]<<","<<way[i][2]<<')';
        cout<<endl<<endl;
        flag=true;
        return;
    }
    else{
        for(int i=1;i<=4;i++){
            tx=x+dx[i];
            ty=y+dy[i];
            if(check(tx,ty)&&!is[tx][ty]){
                way[dep][1]=tx;
				way[dep][2]=ty;
                is[tx][ty]=true;
                dfs(dep+1,tx,ty);
                is[tx][ty]=false;
            }
        }
    }
}
int main()
{
    cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>maps[i][j];
	cin>>bx>>by;
	cin>>ex>>ey;
	dfs(1,bx,by);
	if(!flag) cout<<"-1"<<endl;
	return 0;
 
}
