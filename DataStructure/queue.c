#include "queue.h"

#define MAX_SIZE 40

int a;

struct Queue
{
	void ** _q_front;
	void ** _q_rear;
	int _q_size;
	void ** _q_backStore;
};

queue * newQueue() {

	struct Queue * queue = malloc(sizeof(queue));

	queue->_q_backStore = malloc(sizeof(void *) * MAX_SIZE);
	queue->_q_front = queue->_q_backStore;
	queue->_q_rear = queue->_q_backStore - 1;
	queue->_q_size = 0;

	return queue;
}

void * dequeue(queue * inputQueue) {

	if (inputQueue->_q_size <= 0) return NULL;

	void *tmp = *(inputQueue->_q_front);
	inputQueue->_q_front ++;
	inputQueue->_q_size --;
	return tmp;
}

bool enqueue(queue * inputQueue, void * item) {

	if (inputQueue->_q_size >= MAX_SIZE) return false;
	inputQueue->_q_rear ++;
	if ((inputQueue->_q_rear - inputQueue->_q_backStore) >= MAX_SIZE) {

		inputQueue->_q_rear -= MAX_SIZE;
	}
	*inputQueue->_q_rear = item;
	inputQueue->_q_size ++;
	// printf("dequeued number is:%p\n", item);

	return true;
}

bool freeQueue(queue * inputQueue) {

	return false;
}
