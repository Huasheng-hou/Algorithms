//
//  main.m
//  algo
//
//  Created by apple on 2019/6/6.
//  Copyright © 2019 apple. All rights reserved.
//

#include "graph.h"
#include "RotateArray.h"
#include "utils.h"
#include "Question57.h"

int main(int argc, const char * argv[]) {
    
    // insert code here...
    NSLog(@"Hello, World!");
    MGraph *graph = malloc(sizeof(MGraph));
    
    freopen(kpath("Graph4"),"r",stdin);
    
    CreateGraph(graph);
    DFS(graph, 1);
    
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    findNumbersWithSum(array, 10, 11);
    
    return 0;
}
