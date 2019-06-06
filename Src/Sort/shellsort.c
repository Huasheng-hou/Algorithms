//
//  shellsort.c
//  Algorithms
//
//  Created by shen on 2019/2/19.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "shellsort.h"

void ShellSort_Core(int *array, int length, int h) {
    
    if (array == NULL || length <= 0 || h >= length || h < 1) {
        return;
    }
    // TO DO: 对每个间隔为 h 的子数组进行排序，共有 h 个这样的子数组
    for (int i = 0; i <= (length - h - 1); i++) {
        if (array[i + h] < array[i]) {
            swap(array + i, array + i + h);
        }
    }
}

void ShellSort(int *array, int length) {
    
    if (length <= 1 || array == NULL) return;
    int h = length / 2;
    while (h > 0) {
        ShellSort_Core(array, length, h);
        h = h / 2;
    }
}
