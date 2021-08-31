#include "Graphy.h"

Graphy::Graphy(){
    init();
}
void Graphy::init(){
    m=0;
    n=0;
    for(int i=0;i<maxn;++i){
        vis[i]=0;
        graphyAdj[i].clear();
        for(int j=0;j<maxn;++j){
            mp[i][j]=INT_MAX;
        }
    }
}
void Graphy::setMN(int a,int b){
    m=a,n=b;
    numEdge=0;
}
bool Graphy::addEdge(int from, int to, int weight){
    //检查边是否存在
    if(mp[from][to]!=INT_MAX){
        return false;
    }
    mp[from][to]=weight;
    mp[to][from]=weight;
    graphyAdj[from].push_back(to);
    graphyAdj[to].push_back(from);
    numEdge++;
    return true;
}
bool Graphy::deleteEdge(int from, int to){
   if(mp[from][to]==INT_MAX){
       return false;
   }
   mp[from][to]=INT_MAX;
   mp[to][from]=INT_MAX;


   int i=0;
   for( i=0;i<graphyAdj[from].size();++i){
       if(graphyAdj[from][i]==to){
           break;
       }
   }
   vector<int>::iterator it=graphyAdj[from].begin()+i;
   graphyAdj[from].erase(it);
   for(i=0;i<graphyAdj[to].size();++i){
       if(graphyAdj[to][i]==from){
           break;
       }
   }
   it=graphyAdj[to].begin()+i;
   graphyAdj[to].erase(it);

   numEdge--;
}
//获取顶点数
int Graphy::getNumPoint(){
    return m;
}
//获取边数
int Graphy::getNumEdge(){
    return n;
}
//获取已经添加的边数
int Graphy::getAddEdge(){
    return numEdge;
}
//使用深度优先搜索确定连通性
void Graphy::dfs(int s){
    vis[s]=true;
    for(int i=1;i<=m;++i)
        if(mp[s][i]!=INT_MAX&&!vis[i])
            dfs(i);
}
//重置vis矩阵
void Graphy::vis_cls(){
    for(int i=0;i<=m;++i)
        vis[i]=false;
}
//检查连通性
bool Graphy::check_connectivity(){
    vis_cls();
    dfs(1);
    for(int i=1;i<=m;++i)
        if(!vis[i]){
            vis_cls();
            return false;
        }
    vis_cls();
    return true;
}
//使用prime算法生成最小生成树
void Graphy::prime(int start){
    //prime树需要有起点
    int index=start;

    primeSum=0;
    primenum=0;
    for(int i=0;i<maxn;++i) vis[i]=0,dis[i]=0;
    vis[start]=1;
    primeLog[primenum++]=start;
    for(int i=1;i<=m;++i){
        dis[i]=mp[start][i];
    }
    for(int i=1;i<m;++i){
        int minn=INT_MAX;
        for(int j=1;j<=m;++j){
            if(!vis[j] && dis[j]<minn){
                minn=dis[j];
                index=j;
            }
        }
        vis[index]=true;
        primeSum+=minn;
        primeLog[primenum++]=index;
        for(int j=1;j<=m;++j){
            if(!vis[j] && dis[j]>mp[index][j]){
                dis[j]=mp[index][j];
            }
        }

    }
}
bool cmp( Edge a, Edge b){
    return a.weight<b.weight;
}
int Graphy::find(int x){
    if(x!=f[x]) x=find(f[x]);
    return x;
}
//使用kruskal算法生成最小生成树
void Graphy::kruskal(){
     //把邻接矩阵转换一下方便排序
    int cnt=0;//边数
    for(int i=1;i<=m;++i){
        for(int j=i+1;j<=m;++j){
            if(mp[i][j]!=INT_MAX){
                e[cnt].from=i;
                e[cnt].to=j;
                e[cnt++].weight=mp[i][j];
            }
        }
    }

    //开始进行kruskal算法
    int mxn=0;
    kruskalLog.clear();
    for(int i=0;i<=m;++i){
        f[i]=i;
    }
    sort(e,e+cnt,cmp);
    for(int i=0;i<cnt;++i){
        int f1=find(e[i].from);
        int f2=find(e[i].to);
        if(f1!=f2){
            if(mxn<e[i].weight) mxn=e[i].weight;
            f[f1]=f2;
            kruskalLog.push_back(e[i]);
        }
    }


}

//使用dijkstraa算法求最短距离
int Graphy::dijkstra(int u,int v){

   for(int i=1;i<=m;++i){
       vis[i]=0;
       dis[i]=mp[u][i];
   }
   int tmp,k;

   vis[u]=1;
   dis[u]=0;
   for(int i=1;i<=m;++i){
        tmp=INT_MAX;
        for(int j=1;j<=m;++j){
            if(!vis[j]&&dis[j]<tmp)tmp=dis[k=j];
        }
        if(tmp==INT_MAX) break;
        vis[k]=1;
        for(int j=1;j<=m;++j){
            if(!vis[j]&&dis[j]>dis[k]+mp[k][j])dis[j]=dis[k]+mp[k][j];
        }

   }

        if(dis[v]>=INT_MAX) return -1;
        return dis[v];
}


