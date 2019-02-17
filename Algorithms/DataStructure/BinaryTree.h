//
//  BinaryTree.h
//  Algorithms
//
//  Created by 华生侯 on 2019/2/17.
//  Copyright © 2019 华生侯. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

struct BinaryTreeNode {
    
    int m_nValue;
    struct BinaryTreeNode * m_pLeft;
    struct BinaryTreeNode * m_pRight;
};

typedef struct BinaryTreeNode binaryTreeNode;

void printPreOrder(binaryTreeNode *root);   // 前序遍历
void printInOrder(binaryTreeNode *root);    // 中序遍历
void printPostOrder(binaryTreeNode *root);  // 后序遍历

#endif /* BinaryTree_h */
