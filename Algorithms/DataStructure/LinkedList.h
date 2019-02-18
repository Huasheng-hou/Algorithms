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
    int m_nValue;
    struct ListNode * pNext;
};

typedef struct ListNode listNode;

bool addToTail(listNode *list, void * valuePointer); // 向尾部添加节点
bool insert_Tail_LinkedList(listNode *pHead, int value); // 向尾部添加节点，整数表示

void printFromHead(listNode *pHead);

#endif /* LinkedList_h */
