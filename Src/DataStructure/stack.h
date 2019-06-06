#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack;

typedef struct Stack stack;

stack * newStack(void); // 创建对象

void * pop(stack * inputStack); // 出栈
bool push(stack * inputStack, void * item); // 入栈

bool freeStack(stack * inputStack); // 释放stack
