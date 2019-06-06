//
//  main.m
//  algo
//
//  Created by apple on 2019/6/6.
//  Copyright © 2019 apple. All rights reserved.
//

#include "graph.h"

int main(int argc, const char * argv[]) {
    
    // insert code here...
    NSLog(@"Hello, World!");
    MGraph *graph = malloc(sizeof(MGraph));
    
    freopen(kpath("Graph4"),"r",stdin);
    
    CreateGraph(graph);
    DFS(graph, 1);
    
    return 0;
}
