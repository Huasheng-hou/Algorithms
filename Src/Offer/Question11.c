//
//  Question11.c
//  Algorithms
//
//  Created by shen on 2019/2/18.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question11.h"

int findMinInRotatedArray(int * array, int length) {
    
    if (array == NULL || length <= 0) return 0;
    if (length == 1) return array[0];
    if (length == 2) {
        
        if (array[0] > array[1]) {
            return array[1];
        } else {
            return array[0];
        }
    }
    int middle = length / 2;
    if (array[middle] < array[middle - 1]) {
        return array[middle];
    } else if (array[middle + 1] < array[middle]) {
        return array[middle + 1];
    } else {
        
        if (array[middle] < array[0]) {
            return findMinInRotatedArray(array, middle);
        } else {
            return findMinInRotatedArray(array+middle+1, length - middle - 1);
        }
    }
}
