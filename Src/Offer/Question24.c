//
//  Question24.c
//  Algorithms
//
//  Created by 华生侯 on 2019/2/18.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question24.h"

void reverseLinkedList(listNode ** pHead) {
    
    if (*pHead == NULL || (*pHead)->pNext == NULL) return;
    
    listNode *nextNode = (*pHead)->pNext->pNext;
    (*pHead)->pNext->pNext = *pHead;
    *pHead = (*pHead)->pNext;
    (*pHead)->pNext->pNext = NULL;
    
    while (nextNode != NULL) { // 1次遍历，逐个翻转，时间复杂度 O(n)
        
        listNode *tmpNode = nextNode;
        nextNode = nextNode->pNext;
        
        tmpNode->pNext = *pHead;
        *pHead = tmpNode;
    }
    return;
}
