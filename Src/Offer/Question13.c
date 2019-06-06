//
//  Question13.c
//  Algorithms
//
//  Created by shen on 2019/2/18.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question13.h"
#include "Utils.h"

static int max_row = 99;
static int max_column = 99;

bool robotNextStep(int row, int column, bool ** visited, int threshold, int *count) {
    
    if (row < 0 || column < 0 || visited == NULL  // 边界条件
        || threshold < 0 || count == NULL) {
        return false;
    }
    if (row > max_row || column > max_column) return false;
    
    if (row / 10 + row % 10 + column / 10 + column % 10 > threshold) return false;
    
    if (visited[row][column]) {
        return false;
    }
    *count += 1;
    visited[row][column] = true;
    
    robotNextStep(row, column - 1, visited, threshold, count);
    robotNextStep(row, column + 1, visited, threshold, count);
    robotNextStep(row - 1, column, visited, threshold, count);
    robotNextStep(row + 1, column, visited, threshold, count);
        
    return false;
}

int robotMovingRange(int threshold) {
    
    if (threshold <= 0) return 0;
    
    int count = 0;
    bool **visited = alloc2DArray(max_row + 1, max_column + 1);
    robotNextStep(0, 0, visited, threshold, &count);
    
    return count;
}
