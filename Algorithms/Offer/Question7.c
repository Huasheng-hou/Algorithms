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
    
    binaryTreeNode *root = malloc(sizeof(binaryTreeNode));
    root->m_nValue = preOrder[0];
    for (int i = 0; i < length; i ++) {
        
        if (inOrder[i] == root->m_nValue) {
            
            root->m_pLeft = rebuildBinaryTree(preOrder + 1, inOrder, i);
            root->m_pRight = rebuildBinaryTree(preOrder + i + 1, inOrder + i + 1, length - i - 1);
            break;
        }
    }
    
    return root;
}
