#include "GraphyAdj.h"
#include "iostream"
using namespace std;

void AdjacencyList::CreateALGraph(GraphAdjList *G) {
    int i, j, k;
    edgeNode *e;
    cout << "输入顶点数和边数" << endl;
    //输入顶点数和边数
    cin >> G->numVertexes >> G->numEdges;
    //读入顶点信息，建立顶点表
    for (i = 0; i < G->numVertexes; i++)
    {
        //输入顶点信息
        cin >> G->adjList[i].data;
        //将边表置为空表
        G->adjList[i].firstedge = NULL;
    }
    //建立边表（头插法）
    for (k = 0; k < G->numEdges; k++)
    {
        cout << "输入边（vi,vj）上的顶点序号" << endl;
        cin >> i >> j;
        e = new EdgeNode;
        e->adjvex = j;
        e->next = G->adjList[i].firstedge;
        G->adjList[i].firstedge = e;

        e = new EdgeNode;

        e->adjvex = i;
        e->next = G->adjList[j].firstedge;
        G->adjList[j].firstedge = e;
    }
}

void AdjacencyList::Test() {
    cout << "ALL IS OK." << endl;
}

void AdjacencyList::ShowALGraph(GraphAdjList *G) {
    for (int i = 0; i < G->numVertexes; i++)
    {
        cout << "顶点" << i << ": " << G->adjList[i].data<<"--firstedge--";
        edgeNode *p = new edgeNode;
        p = G->adjList[i].firstedge;
        while (p)
        {
            cout<<p->adjvex<<"--Next--";
            p=p->next;
        }
        cout<<"--NULL"<<endl;
    }

}

