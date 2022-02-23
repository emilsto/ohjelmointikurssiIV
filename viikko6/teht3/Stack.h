#ifndef _STACK_H
#define _STACK_H

#include "Utility.h"

// Section 2.2:

typedef char Stack_entry;

const int maxstack = 500;   //  small value for testing

class Stack {
public:
   Stack();
   bool empty() const;
   Error_code pop();
   Error_code top(Stack_entry &item) const;
   Error_code push(const Stack_entry &item);
   Error_code copy_stack(Stack &dest, Stack &source);
   Error_code copy_stack_b(Stack &source, Stack &dest);

private:
   int count;
   Stack_entry entry[maxstack];
};
#endif