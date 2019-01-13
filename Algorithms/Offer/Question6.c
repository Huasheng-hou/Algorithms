//
//  Question6.c
//  Algorithms
//
//  Created by 华生侯 on 2019/1/12.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question6.h"

void printLinkedList_Reversely(listNode *list) {
    
    if (list == NULL) return;
    stack *aStack = newStack();
    
    while (list->pNext != NULL) {
        push(aStack, list->content);
    }
    printf("list content pointer is:%p", list->content);
    
    void *tmp = pop(aStack);
    while (tmp != NULL) {
        
        printf("list content pointer is:%p", tmp);
        tmp = pop(aStack);
    }
}
