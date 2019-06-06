//
//  Question6.m
//  Algorithms
//
//  Created by 华生侯 on 2019/1/12.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question6.h"
#import "HHStack.h"

void printLinkedList_Reversely(listNode *list) {
    
    if (list == NULL) return;
    HHStack *aStack = [[HHStack alloc] init];
    
    while (list != NULL) {
        [aStack push:list->m_nValue];
        list = list->pNext;
    }
    
    while (aStack.stackSize > 0) {
        
        printf("list node value is:%d\n", [aStack pop]);
    }
}
