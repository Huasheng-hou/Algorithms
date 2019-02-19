//
//  Question27.c
//  Algorithms
//
//  Created by shen on 2019/2/19.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question27.h"

void mirrorBinaryTree(binaryTreeNode **tree) {
    
    if (tree == NULL || *tree == NULL) {
        return;
    }
    if ((*tree)->m_pLeft == NULL && (*tree)->m_pRight == NULL) return;
    if ((*tree)->m_pLeft != NULL) {
        mirrorBinaryTree(&(*tree)->m_pLeft);
    }
    if ((*tree)->m_pRight != NULL) {
        mirrorBinaryTree(&(*tree)->m_pRight);
    }
    binaryTreeNode *tmp = (*tree)->m_pLeft;
    (*tree)->m_pLeft = (*tree)->m_pRight;
    (*tree)->m_pRight = tmp;
}
