//
//  LinkedList.h
//  Algorithms
//
//  Created by 华生侯 on 2019/1/12.
//  Copyright © 2019 华生侯. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>
#include <stdbool.h>

struct ListNode {
  
    void * content;
    struct ListNode * pNext;
};

typedef struct ListNode listNode;

bool addToTail(listNode *list, void * valuePointer); // 向尾部添加节点

#endif /* LinkedList_h */
