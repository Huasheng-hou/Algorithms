#include <stdio.h>
#include "DataStructure/queue.h"
#include "DataStructure/stack.h"

int main()
{
   // printf() displays the string inside quotation
   printf("Fuck World!\n");

   // void ** p1 = malloc(sizeof(void *) * 80);
   // void ** p2 = malloc(sizeof(void *) * 80);
   // queue *aQueue = newQueue();
   stack *aStack = newStack();
   
   // enqueue(aQueue, (void *)0x00);
   // enqueue(aQueue, (void *)0x01);
   // enqueue(aQueue, (void *)0x02);
   // enqueue(aQueue, (void *)0x03);

   // printf("dequeued number is:%p\n", dequeue(aQueue));
   // printf("dequeued number is:%p\n", dequeue(aQueue));
   // printf("dequeued number is:%p\n", dequeue(aQueue));
   // printf("dequeued number is:%p\n", dequeue(aQueue));

   // push(aStack, (void *)0x04);
   // push(aStack, (void *)0x05);
   // push(aStack, (void *)0x06);
   // push(aStack, (void *)0x07);

   // printf("poped number is:%p\n", pop(aStack));
   // printf("poped number is:%p\n", pop(aStack));
   // printf("poped number is:%p\n", pop(aStack));
   // printf("poped number is:%p\n", pop(aStack));

   // freeQueue(aQueue);

   return 0;
}