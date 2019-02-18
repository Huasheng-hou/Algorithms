//
//  Question8.c
//  Algorithms
//
//  Created by shen on 2019/2/18.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question8.h"

binaryTreeNode * nextInOrderNode(binaryTreeNode *node) {
    
    if (node == NULL) return NULL;
    // 1. 从右子树中寻找下一个节点
    if (node->m_pRight != NULL) {
        
        binaryTreeNode *subTree = node->m_pRight;
        while (subTree->m_pLeft != NULL) {
            subTree = subTree->m_pLeft;
        }
        return subTree;
    } else if (node->m_pParent != NULL) {
        
        
        if (node->m_pParent->m_pLeft == node) {
            return node->m_pParent;
        } else {
            
            binaryTreeNode *parentNode = node->m_pParent;
            while (parentNode->m_pParent != NULL && parentNode == parentNode->m_pParent->m_pRight) {
                parentNode = parentNode->m_pParent;
            }
            return parentNode->m_pParent;
        }
    }
    return NULL;
}
