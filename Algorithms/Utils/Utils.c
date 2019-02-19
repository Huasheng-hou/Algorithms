//
//  Utils.c
//  Algorithms
//
//  Created by shen on 2019/2/18.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Utils.h"
#include "strings.h"

bool ** alloc2DArray(int row, int column) {
    
    bool ** matrix = (bool **)malloc(row * sizeof(bool *));
    matrix[0] = calloc(row * column, sizeof(bool));
    for (int i = 1; i < row; i ++) {
        matrix[i] = matrix[0] + i * column;
    }
    return matrix;
}

char * strcpyAndAllocate(char *des, const char *src) {
    
    char * buffer = malloc(strlen(des) + strlen(src) + 1);
    strcpy(buffer, des);
    strcat(buffer, src);
    return buffer;
}

void swap(int * a, int * b) {
    
    if (a == b) return;
    *a = (*a)^(*b);
    *b = (*a)^(*b);
    *a = (*a)^(*b);
}
