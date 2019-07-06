//
//  mergesort.c
//  Algorithms
//
//  Created by shen on 2019/2/19.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "mergesort.h"

void mergeSort_Core(int * array, int length1, int length2) {
    
    int index1 = 0, index2 = 0;
    int *array2 = array + length1;
    for (int i = 0; i < length1 + length2; i++) {
        
        if (array[index1] < array2[index2]) {
            
        } else {
            
        }
    }
}

void mergeSort(int * array, int length) {
    
    if (array == NULL || length <= 1) return;
    
    mergeSort(array, length / 2);
    mergeSort(array + length / 2, length - length / 2);
//    mergeSort_Core(array, length / 2, array + length / 2, length - length / 2);
}
