#ifndef GRAPHY_H
#define GRAPHY_H
#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include<algorithm>
using  namespace std;
const int maxn=105;//定义图最大定点个数
struct Edge{
    int from,to;
    int weight;
};


class Graphy
{
private:
    int m,n;//分别表示定点数和边数
    int numEdge;//已经添加的边的条数

    bool vis[maxn];

    Edge e[maxn*maxn];
    int f[maxn];

public:
    long long  dis[maxn];
    int mp[maxn][maxn];

    int primeLog[maxn];
    int primenum=0;
    int primeSum=0;//记录Prime算法的最小值

    vector<Edge> kruskalLog;//记录kruskal的运算过程
    vector<int> graphyAdj[maxn];//存储邻接表

public:
    void setMN(int mm,int nn);//设置顶点个数和边的个数
    bool addEdge(int from ,int to,int weight);//在图中添加边
    bool deleteEdge(int from ,int to);//在图中删除边
    int getNumPoint();//获取定点数
    int getNumEdge();//获取总的边数
    int getAddEdge();//获取已经添加的边的条数
    void dfs(int s);//广度优先搜索判断连通性
    void vis_cls();//重置vis矩阵
    bool check_connectivity();//检查当前图的连通性
    void prime(int start);//使用prime算法生成最小生成树
    void kruskal();//使用kruskal算法生成最小生成树
    int dijkstra(int u,int v);//使用dijkstraa算法求最短距离
    void init();//初始化

    int find(int x);

    Graphy();


};

#endif // GRAPHY_H
