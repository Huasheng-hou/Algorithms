//
//  Question7.c
//  Algorithms
//
//  Created by 华生侯 on 2019/2/17.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "Question7.h"

binaryTreeNode * rebuildBinaryTree(int * preOrder, int * inOrder, int length) {
    
    if (preOrder == NULL || inOrder == NULL || length <= 0) {
        
        return NULL;
    }
    
    binaryTreeNode *root = calloc(1, sizeof(binaryTreeNode));
    root->m_nValue = preOrder[0];
    for (int i = 0; i < length; i ++) {
        
        if (inOrder[i] == root->m_nValue) {
            
            root->m_pLeft = rebuildBinaryTree(preOrder + 1, inOrder, i);
            root->m_pRight = rebuildBinaryTree(preOrder + i + 1, inOrder + i + 1, length - i - 1);
            
            if (root->m_pLeft != NULL) {
                root->m_pLeft->m_pParent = root;
            }
            if (root->m_pRight != NULL) {
                root->m_pRight->m_pParent = root;
            }
            break;
        }
    }
    
    return root;
}
