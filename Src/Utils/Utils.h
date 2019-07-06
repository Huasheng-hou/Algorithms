//
//  Utils.h
//  Algorithms
//
//  Created by shen on 2019/2/18.
//  Copyright © 2019 华生侯. All rights reserved.
//

#ifndef Utils_h
#define Utils_h

#include <stdio.h>

#define kPrint(x)   printf("result is:%d\n", x)
#define FILE_PATH   "/Users/apple/Develop/Algorithms/Src/TestCases/"

bool ** alloc2DArray(int row, int column);
char * strcpyAndAllocate(char *des, const char *src);

void swap(int * a, int * b); // 交换两个 int 值
char * kpath(char * filename);

// * 打印数组
void printArray(int * array, int length);

#endif /* Utils_h */
