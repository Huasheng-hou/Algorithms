//
//  Question3.c
//  Algorithms
//
//  Created by apple on 2019/6/5.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question3.h"

void printRepeatedNumber(int * arr, int length) {
    
    if (arr == NULL || length <= 0) return;
    
    int *hashArr = calloc(length, sizeof(int));
    
    for (int i = 0; i < length; i ++) {
        
        int value = arr[i];
        if (value < 0 || value >= length) return;
        
        if (hashArr[value]) {
            printf("repeated number is:%d\n", value);
            return;
        } else {
            hashArr[value] = 1;
        }
    }
}

void printRepeatedNumber2(int *arr, int length) {
    
    if (arr == NULL || length <= 0) return;
    
    for (int i = 0; i < length; i ++) {
        
        int value = arr[i];
        if (value < 0 || value >= length) {
            printf("invalid number!\n");
            return;
        }
        while (arr[i] != i) {
            if (arr[arr[i]] == arr[i]) {
                printf("repeated number is:%d\n", arr[i]);
                return;
            } else {
                swap(arr + i, arr + arr[i]);
            }
        }
    }
}
