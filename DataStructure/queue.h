#ifndef POINT_H
#define POINT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Queue;

typedef struct Queue queue;

queue * new_Queue(); //创建对象

void * dequeue(queue * inputQueue); // 出队列
bool enqueue(queue * inputQueue, void * item); // 入队列

bool freeQueue(queue * inputQueue); // 释放queue

#endif
