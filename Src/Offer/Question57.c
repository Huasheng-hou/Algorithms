//
//  Question57.c
//  algo
//
//  Created by apple on 2019/7/5.
//  Copyright © 2019 apple. All rights reserved.
//

#include "Question57.h"

void findNumbersWithSum(int * array, int length, int sum) {
    
    if (array == NULL || length <= 0) return;
    int head = 0, tail = length - 1;
    while (true) {
        
        int result = array[head] + array[tail];
        if (result == sum) {
            printf("%d %d\n", array[head], array[tail]);
            break;
        } else if (result < sum) {
            head++;
        } else {
            tail--;
        }
        if (head >= length || tail <= 0 || head >= tail) break;
    }
}
