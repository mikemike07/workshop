#ifndef _CHENG_SHIH_QUEUE_PTR_TO_DOUBLE_H
#define _CHENG_SHIH_QUEUE_PTR_TO_DOUBLE_H

#include "list_ptr_to_double.h"

typedef NodePtr QueueNodePtr; // define QueueNodePtr

void enque( NodePtr *header, NodePtr *tail, double input ); // the prototype of enqueue
double deque( NodePtr *header, NodePtr *tail ); //  the prototype of dequeue

#endif
