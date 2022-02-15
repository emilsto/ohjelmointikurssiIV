#include <iostream>
using namespace std;

#include "Utility.h"
#include "Stack.h"

Error_code Stack::push(const Stack_entry &item)
/*
Pre:  None.
Post: If the Stack is not full, item is added to the top
      of the Stack.  If the Stack is full,
      an Error_code of overflow is returned and the Stack is left unchanged.
*/

{
   Error_code outcome = success;
   if (count >= maxstack)
      outcome = overflow;
   else
      entry[count++] = item;
   return outcome;
}


Error_code Stack::pop()
/*
Pre:  None.
Post: If the Stack is not empty, the top of
      the Stack is removed.  If the Stack
      is empty, an Error_code of underflow is returned.
*/

{
   Error_code outcome = success;
   if (count == 0)
      outcome = underflow;
   else --count;
   return outcome;
}


Error_code Stack::top(Stack_entry &item) const
/*
Pre:  None.
Post: If the Stack is not empty, the top of
      the Stack is returned in item.  If the Stack
      is empty an Error_code of underflow is returned.
*/

{
   Error_code outcome = success;
   if (count == 0)
      outcome = underflow;
   else
      item = entry[count - 1];
   return outcome;
}


bool Stack::empty() const
/*
Pre:  None.
Post: If the Stack is empty, true is returned.
      Otherwise false is returned.
*/

{
   bool outcome = true;
   if (count > 0) outcome = false;
   return outcome;
}


Stack::Stack()
/*
Pre:  None.
Post: The stack is initialized to be empty.
*/
{
   count = 0;
}

int Stack::size() const // Return the number of entries in the stack.
{
	return count;
}



Error_code Stack::copy_stack(Stack &dest, Stack &source)

{
   Error_code outcome = success;
   dest = source;
   return outcome;
}

Error_code Stack::copy_stack_b(Stack &source, Stack &dest)
{
   Error_code outcome = success;

   //stacks temp and dest, dest => copied stack
   Stack temp;
   char tempItem;

	while (!source.empty()) {
		source.top(tempItem);
		temp.push(tempItem);
		source.pop();
	}
   //inee
   	while (!temp.empty()) {
		temp.top(tempItem);
		dest.push(tempItem);
		temp.pop();
	}

   return outcome;
}
