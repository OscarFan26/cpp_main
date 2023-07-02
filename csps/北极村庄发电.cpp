#include<bits/stdc++.h>
#define ll long long
#define eps 1e-5

using namespace std;

inline int read(){
    char ch=getchar();
    int res=0;
    while(!isdigit(ch))ch=getchar();
    while(isdigit(ch)) res=(res<<3)+(res<<1)+(ch^48),ch=getchar();
    return res;
}
struct node{
    int u,v;
    double w;
}e[250010];
int n,k,x[505],fa[250010],y[505],cnt;
inline bool cmp(node a,node b){
    return a.w+eps<b.w;
}
inline double calc(int a,int b){
    return sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
}
inline int find(int a){
    if(fa[a]!=a)fa[a]=find(fa[a]);
    return fa[a];
}
inline double kruskal(int m){
    for(int i=1;i<=n;i++)fa[i]=i;
    sort(e+1,e+cnt+1,cmp);
    int num=0;
    double ans=0;
    for(int i=1;i<=cnt;i++){
        int f1=find(e[i].u),f2=find(e[i].v);
        if(f1!=f2){
            ans=max(e[i].w,ans);
            fa[f1]=f2;
            num++;
        }
        if(num==m-1){
            break;
        }
    }
    if(num<m-1)return -1;
    return ans;
}
int main(){
    n=read(),k=read();
    for(int i=1;i<=n;i++){
        x[i]=read(),y[i]=read();
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            e[++cnt].u=i,e[cnt].v=j,e[cnt].w=calc(i,j);
        }
    }
    double er=kruskal(n-k+1);
    printf("%.2lf",er);
}

