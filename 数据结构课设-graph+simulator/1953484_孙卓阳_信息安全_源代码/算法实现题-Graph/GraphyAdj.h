#ifndef GRAPHYADJ_H
#define GRAPHYADJ_H
//边表结点
typedef struct EdgeNode {
    //顶点对应的下标
    int adjvex;
    //指向下一个邻接点
    struct EdgeNode *next;
} edgeNode;

//顶点表结点
typedef struct VertexNode {
    //顶点数据
    char data;
    //边表头指针
    edgeNode *firstedge;
} VertexNode, AdjList[100];

//集合
typedef struct {
    AdjList adjList;
    //顶点数和边数
    int numVertexes, numEdges;
} GraphAdjList;
class AdjacencyList {
public:

    void CreateALGraph(GraphAdjList *G);

    void ShowALGraph(GraphAdjList *G);

    void Test();
};
#endif // GRAPHYADJ_H
