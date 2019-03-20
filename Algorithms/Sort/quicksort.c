//
//  quicksort.c
//  Algorithms
//
//  Created by shen on 2019/2/19.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "quicksort.h"

int quickSort_partition(int * array, int length) {
    
    if (length <= 1) return 0;
    int *pivot = array; // 选择用于分区的点
    int increment = 1;
    for (int i = 1; i < length; i ++) {
        
        if (array[i] < *pivot) { // 小于基准点的数从左顺序放置
            swap(array + increment, array + i);
            increment ++;
        }
    }
    swap(pivot, array + increment - 1);
    
    return increment - 1;
}

void quickSort(int * array, int length) {
    
    if (length <= 1) return;
    int p = quickSort_partition(array, length);
    quickSort(array, p);
    quickSort(array+p+1, length-p-1);
}
