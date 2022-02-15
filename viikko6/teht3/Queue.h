#pragma once

#include "Utility.h"


typedef char Queue_entry;


const int maxqueue = 500; 

class Queue {
public:
   Queue();
   bool empty() const;
   int size() const;
   Error_code serve();
   Error_code append(const Queue_entry &item);
   Error_code retrieve(Queue_entry &item) const;

protected:
   int count;
   int front, rear;
   Queue_entry entry[maxqueue];
};