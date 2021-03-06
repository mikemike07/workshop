#ifndef _CHENG_SHIH_QUEUE_INT_H
#define _CHENG_SHIH_QUEUE_INT_H

#include "list_int.h"

typedef NodePtr QueueNodePtr; // define QueueNodePtr

void enque( NodePtr *header, NodePtr *tail, int input ); // the prototype of enqueue
int deque( NodePtr *header, NodePtr *tail ); //  the prototype of dequeue

#endif
