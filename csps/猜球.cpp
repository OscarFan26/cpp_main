#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5006,M=4000006;
int n,m,cnt=0,p=0,t1,t2,t3,dis[N],v[N],head[N];
ll sum=0;
struct edge{int nxt,to,w;}e[M<<1];
struct xd{
   int z,i;
   bool operator < (const xd &a) const {return a.z<z;}
}tmp,nw;
priority_queue<xd> q;
inline void add(int u,int v,int w){e[++cnt].nxt=head[u],e[cnt].to=v,e[cnt].w=w,head[u]=cnt;}
void prim(){
    memset(dis,0x7f,sizeof(dis));
    dis[0]=0,tmp.z=0,tmp.i=0,q.push(tmp);
    while(!q.empty()){
       tmp=q.top(),q.pop();
       if(v[tmp.i]) continue;
       v[tmp.i]=1,++p,sum+=tmp.z;
       for(int i=head[tmp.i];i;i=e[i].nxt) if(!v[e[i].to]&&dis[e[i].to]>e[i].w) dis[e[i].to]=e[i].w,nw.i=e[i].to,nw.z=e[i].w,q.push(nw);
    } 
}
inline int read(){
   int T=0,F=1; char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-') F=-1; ch=getchar();}
   while(ch>='0'&&ch<='9') T=(T<<3)+(T<<1)+(ch-48),ch=getchar();
   return F*T;
}
int main(){
    n=read();
    for(int i=1;i<=n;++i) for(int j=i;j<=n;++j) t1=read(),add(i-1,j,t1),add(j,i-1,t1);
    prim(),printf("%lld\n",sum);
    return 0;
} 