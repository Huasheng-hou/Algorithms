//
//  Question18.c
//  Algorithms
//
//  Created by shen on 2019/2/18.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question18.h"

void deleteNode(listNode ** pHead, listNode * pToBeDeleted) {
    
    if (*pHead == NULL || pToBeDeleted == NULL) return;
    if (*pHead == pToBeDeleted) { // 删除头节点
        
        free(*pHead);
        if (pToBeDeleted->pNext == NULL) {
            *pHead = NULL;
        } else {
            *pHead = pToBeDeleted->pNext;
        }
        return;
    }
    if (pToBeDeleted->pNext == NULL) { // 删除尾部节点
        
        listNode *node = *pHead;
        while (node != NULL && node -> pNext != pToBeDeleted) {
            node = node->pNext;
        }
        if (node == NULL) return;
        node->pNext = NULL;
        free(pToBeDeleted);
        return;
    }
    listNode *nextNode = pToBeDeleted->pNext;
    pToBeDeleted->m_nValue = nextNode->m_nValue; // 删除中间节点
    pToBeDeleted->pNext = nextNode->pNext;
    free(nextNode);
    nextNode = NULL;
}

void deleteDuplicateNodes(listNode *pHead) {
    
}
