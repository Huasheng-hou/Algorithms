//
//  LinkedList.c
//  Algorithms
//
//  Created by 华生侯 on 2019/1/12.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "LinkedList.h"
#include <stdlib.h>

bool addToTail(listNode *list, void * valuePointer) {
    
    if (!list || list == NULL) return false;
    while (list->pNext != NULL) {
        list = list->pNext;
    }
    list->pNext = malloc(sizeof(listNode));
    list->pNext->content = valuePointer;
    
    return true;
}
