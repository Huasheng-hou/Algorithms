//
//  graph.c
//  algo
//
//  Created by apple on 2019/6/6.
//  Copyright © 2019 apple. All rights reserved.
//

#include "graph.h"

int CreateDGGraph(MGraph *G) {
    return 0;
}

int CreateDNGraph(MGraph *G) {
    return 0;
}

int CreateUDGGraph(MGraph *G) {
    return 0;
}

int CreateUDNGraph(MGraph *G) {
    
    printf("input your vertex number and arc number\n");
    scanf("%d%d", &(G->vexnum), &(G->arcnum));
    // 输入顶点
    printf("input your vertexs, total number:%d\n", G->vexnum);
    for (int i = 0; i < G->vexnum; i ++) scanf("%d", G->vexs + i);
    // 设初值
    for (int i = 0; i < G->vexnum; i ++) {
        for (int j = 0; j < G->vexnum; j ++) {
            
            G->arcs[i][j].adj   = INT_MAX;
            G->arcs[i][j].info  = NULL;
        }
    }
    
    int v1, v2, w;
    for (int k = 0; k < G->arcnum; k ++) {
        
        printf("input your arc, number %d\n", k);
        scanf("%d%d%d", &v1, &v2, &w);
        G->arcs[v1-1][v2-1].adj = w;
        G->arcs[v2-1][v1-1].adj = w;
    }
    
    return 0;
}

int CreateGraph(MGraph *G) {
    
    printf("input your graph kind:DG-0,DN-1,UDG-2,UDN-3\n");
    scanf("%d", &(G->kind));
    switch (G->kind) {
        case DG:    return CreateDGGraph(G);
        case DN:    return CreateDNGraph(G);
        case UDG:   return CreateUDGGraph(G);
        case UDN:   return CreateUDNGraph(G);
        default:    return -1;
    }
    return 0;
}

void DFSRecursively(MGraph *G, int v, bool * visited) {
    
    for (int i = 0; i < G->vexnum; i ++) {
        
        if ((i + 1) == v) continue;
        if (G->arcs[v-1][i].adj < INT_MAX) {
            
            if (!visited[i]) {
                
                printf("->%d", i+1);
                visited[i] = true;
                DFSRecursively(G, i+1, visited);
            }
        }
    }
}

void DFS(MGraph *G, int v) {
    
    bool * visited = calloc(G->vexnum, sizeof(bool));
    visited[v-1] = true;
    printf("%d", v);
    
    DFSRecursively(G, v, visited);
    printf("\n");
}

int CreateUDGALGraph(ALGraph *G) {
    return 0;
}

int CreateUDNALGraph(ALGraph *G) {
    return 0;
}

int CreateDGALGraph(ALGraph *G) {
    return 0;
}

int CreateDNALGraph(ALGraph *G) {
    return 0;
}

int CreateALGraph(ALGraph *G) {
    
    printf("input your graph kind:DG-0,DN-1,UDG-2,UDN-3\n");
    scanf("%d", &(G->kind));
    switch (G->kind) {
        case DG:    return CreateDGALGraph(G);
        case DN:    return CreateDNALGraph(G);
        case UDG:   return CreateUDGALGraph(G);
        case UDN:   return CreateUDNALGraph(G);
        default:    return -1;
    }
    return 0;
}
