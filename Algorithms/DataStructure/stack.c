#include "stack.h"

#define MAX_SIZE 40

struct Stack
{
	void ** _s_top;
	int _s_size;
	void ** _s_backStore;
};

// void * pop(stack * inputStack); // 出栈
// bool push(stack * inputStack, void * item); // 入栈

// bool freeStack(stack * inputStack); // 释放stack

stack * newStack() {

	struct Stack * stack = malloc(sizeof(stack));

     stack->_s_backStore = malloc(sizeof(void *) * MAX_SIZE);
	stack->_s_top = stack->_s_backStore - 1;
	stack->_s_size = 0;

	return stack;
}

void * pop(stack * inputStack) {

	if (inputStack->_s_size <= 0) return NULL;

	void *tmp = *inputStack->_s_top;
	inputStack->_s_top --;
	inputStack->_s_size --;

	return tmp;
}

bool push(stack *inputStack, void * item) {

	if (inputStack->_s_size >= MAX_SIZE) return false;

	inputStack->_s_top ++;
	*inputStack->_s_top = item;
	inputStack->_s_size ++;

	return true;
}
