//
//  RotateArray.c
//  algo
//
//  Created by apple on 2019/7/6.
//  Copyright © 2019 apple. All rights reserved.
//

#include "RotateArray.h"

void inverseArray(int * array, int length) {
    
    if (array == NULL || length <= 0) return;
    for (int i = 0; i < length / 2; i ++) {
        swap(array + i, array + length - i - 1);
    }
}

void rotateArray(int * array, int length, int shift) {
    
    if (array == NULL || length <= 0) return;
    if (shift == length) return;
    shift = shift % length;
    
    if (shift < 0) shift = length + shift;
    
    int counter = 0;
    for (int i = 0; i < shift - 1; i++) {
        int cursor = shift + i, tmp = array[i];
        while (cursor != i) {
            
            swap(&tmp, array + cursor);
            cursor = (cursor + shift) % length;
            counter ++;
        }
        swap(&tmp, array + cursor);
        counter ++;
        if (counter >= length) break;
    }
}

void rotateArrayByInverse(int * array, int length, int shift) {
    
    if (array == NULL || length <= 0) return;
    if (shift == length) return;
    shift = shift % length;
    
    if (shift < 0) shift = length + shift;
    inverseArray(array, length - shift);
    inverseArray(array + length - shift, shift);
    inverseArray(array, length);
}
