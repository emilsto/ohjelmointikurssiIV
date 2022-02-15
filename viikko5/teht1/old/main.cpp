#include <iostream>
using namespace std;

#include "Stack.h"

int main()
{
	Stack copy;
	char cp;
	Stack original;
	char og;

	//fill stack with something
	for(int i= 0; i < 10; i++){
		original.push('a');
	}

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

	return EXIT_SUCCESS;
}
