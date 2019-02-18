//
//  LinkedList.c
//  Algorithms
//
//  Created by 华生侯 on 2019/1/12.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "LinkedList.h"
#include <stdlib.h>

listNode * newNode() {
    
    listNode *node = calloc(1, sizeof(listNode));
    return node;
}

bool addToTail(listNode *list, void * valuePointer) {
    
    if (!list || list == NULL) return false;
    while (list->pNext != NULL) {
        list = list->pNext;
    }
    list->pNext = newNode();
    list->pNext->content = valuePointer;
    
    return true;
}

bool insert_Tail_LinkedList(listNode *pHead, int value) {
    
    if (pHead == NULL) return false;
    while (pHead->pNext != NULL) {
        pHead = pHead->pNext;
    }
    pHead->pNext = newNode();
    pHead->pNext->m_nValue = value;
    
    return true;
}

void printFromHead(listNode *pHead) {
    
    if (pHead == NULL) return;
    
    while (pHead != NULL) {
        kPrint(pHead->m_nValue);
        pHead = pHead->pNext;
    }
}
