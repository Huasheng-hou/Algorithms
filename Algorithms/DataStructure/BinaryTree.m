//
//  BinaryTree.m
//  Algorithms
//
//  Created by 华生侯 on 2019/2/17.
//  Copyright © 2019 华生侯. All rights reserved.
//

#include "BinaryTree.h"

void printPreOrder(binaryTreeNode *root) {
    
    if (root == NULL) return;
    printf("%d\n", root->m_nValue);
    
    printPreOrder(root->m_pLeft);
    printPreOrder(root->m_pRight);
}

void printInOrder(binaryTreeNode *root) {
 
    if (root == NULL) return;
    if (root->m_pLeft != NULL) printInOrder(root->m_pLeft);
    printf("%d\n", root->m_nValue);
    if (root->m_pRight != NULL) printInOrder(root->m_pRight);
}

void printPostOrder(binaryTreeNode *root) {

    if (root == NULL) return;
    if (root->m_pLeft != NULL) {
        printPostOrder(root->m_pLeft);
    }
    if (root->m_pRight != NULL) {
        printPostOrder(root->m_pRight);
    }
    printf("%d\n", root->m_nValue);
}
