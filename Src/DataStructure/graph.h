//
//  graph.h
//  algo
//
//  Created by apple on 2019/6/6.
//  Copyright © 2019 apple. All rights reserved.
//

#ifndef graph_h
#define graph_h

#include <stdio.h>

#define MAX_VERTEX_NUM      20

typedef enum : int {
    DG,
    DN,
    UDG,
    UDN
} GraphKind;

typedef struct ArcCell {
    int adj;    // * 顶点关系
    void * info; // 弧相关信息
} ArcCell, AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

typedef struct {
    int         vexs[MAX_VERTEX_NUM];
    AdjMatrix   arcs;
    int         vexnum, arcnum;
    GraphKind   kind;
} MGraph;

int CreateGraph(MGraph *G);

/**
 Depth-First Search

 @param v start vertex
 */
void DFS(MGraph *G, int v);

typedef struct ArcNode {
    int             adjVex;
    struct ArcNode  *nextArc;
} ArcNode;

typedef struct VNode {
    int         data;
    ArcNode     *firstarc;
} VNode, AdjList[MAX_VERTEX_NUM];

typedef struct {
    AdjList     vertices;
    int         vexnum, arcnum;
    int         kind;
} ALGraph;

int CreateALGraph(ALGraph *G);

#endif /* graph_h */
