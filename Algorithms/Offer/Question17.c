//
//  Question17.c
//  Algorithms
//
//  Created by shen on 2019/2/18.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question17.h"
#include "Utils.h"
#include "string.h"

static const char * digits[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

void printToNDigits_Recursively(char *prefix, int n) {
    
    if (n < 1) return;
    
    unsigned long length = strlen(prefix);
    if (n == 1) {
        
        if (length > 0) printf("%s0\n", prefix);
        for (int i = 1; i <= 9; i ++) {
            printf("%s%d\n", prefix, i);
        }
    } else { // 递归打印数字
        
        if (length > 0) printToNDigits_Recursively(strcpyAndAllocate(prefix, "0"), n - 1);
        for (int i = 1; i <= 9; i ++) {
            
            printToNDigits_Recursively(strcpyAndAllocate(prefix, digits[i]), n - 1);
        }
    }
}

void printToMaxOfNDigits(int n) {
    
    if (n < 1) return;
    for (int i = 1; i <= n; i ++) {
        printToNDigits_Recursively("", i); // 打印不同位数的数字
    }
}
