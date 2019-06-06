//
//  Question32.c
//  Algorithms
//
//  Created by shen on 2019/2/19.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question32.h"

void printChildNodes_Core(queue **nodeQueue) {
    
    if (nodeQueue == NULL || *nodeQueue == NULL) return;
    binaryTreeNode *node = dequeue(*nodeQueue);
    queue *subNodeQueue = newQueue();
    
    while (node != NULL) {
        
        kPrint(node->m_nValue);
        if (node->m_pLeft != NULL) enqueue(subNodeQueue, node->m_pLeft);
        if (node->m_pRight != NULL) enqueue(subNodeQueue, node->m_pRight);
        node = dequeue(*nodeQueue);
    }
    *nodeQueue = subNodeQueue;
}

void printBinaryTreeTopDown(binaryTreeNode * root) {
    
    if (root == NULL) return;
    queue *nodeQueue = newQueue();
    enqueue(nodeQueue, root);
    
    while (queueSize(nodeQueue) > 0) {
        printChildNodes_Core(&nodeQueue);
    }
}
