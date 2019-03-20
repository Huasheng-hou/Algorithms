//
//  RedBlackTree.h
//  Algorithms
//
//  Created by shen on 2019/2/20.
//  Copyright © 2019 华生侯. All rights reserved.
//

#ifndef RedBlackTree_h
#define RedBlackTree_h

#include <stdio.h>

//typedef enum : int {
//    nodeColorRed,
//    nodeColorBlack,
//} nodeColor;

struct RBTreeNode {
    
    int m_nValue;
    
    struct BinaryTreeNode * m_pParent;
    struct BinaryTreeNode * m_pLeft;
    struct BinaryTreeNode * m_pRight;
};

typedef struct BinaryTreeNode binaryTreeNode;


#endif /* RedBlackTree_h */
