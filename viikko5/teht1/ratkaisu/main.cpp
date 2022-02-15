#include <iostream>
using namespace std;

#include "Stack.h"




class friendlyClass {
public:
	Error_code copy_stack_c(Stack& dest, Stack& source)
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

private:
	
    friend class Stack;
};

 
int main()
{
	Stack copy;
	char cp;
	Stack original;
	char og;
	friendlyClass frendi;




	//fill stack with something
	for(int i= 0; i < 10; i++){
		original.push('a');
	}
	
	frendi.copy_stack_c(copy, original);

		//cout copy stack
		while (!copy.empty()) {
		copy.top( og );
		cout << og;
		copy.pop();
	}



/*
	//copy stack
	original.copy_stack(copy, original);

	//cout og stack
	while (!original.empty()) {
		original.top( og );
		cout << og;
		original.pop();
	}
	cout << endl;


	//cout copy stack
		while (!copy.empty()) {
		copy.top( og );
		cout << og;
		copy.pop();
	}
*/





	return EXIT_SUCCESS;
}
