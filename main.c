#include <stdio.h>
#include "DataStructure/queue.h"

int main()
{
   // printf() displays the string inside quotation
   printf("Fuck World!\n");

   queue *aQueue = newQueue();
   
   enqueue(aQueue, (void *)0x00);
   enqueue(aQueue, (void *)0x01);
   enqueue(aQueue, (void *)0x02);
   enqueue(aQueue, (void *)0x03);

   printf("dequeued number is:%p\n", dequeue(aQueue));
   printf("dequeued number is:%p\n", dequeue(aQueue));
   printf("dequeued number is:%p\n", dequeue(aQueue));
   printf("dequeued number is:%p\n", dequeue(aQueue));

   return 0;
}