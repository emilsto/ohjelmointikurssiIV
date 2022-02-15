#include <iostream>
using namespace std;

#include "Stack.h"

//a
bool full(Stack &s){
	return s.empty();
}

//b
Error_code pop_top(Stack &s, Stack_entry &t){
	t = s.top(t);
	s.pop();
}

//c
void clear(Stack &s){
		while (!s.empty()) {
		s.pop();
	}
}

//d
int size(Stack &s){
	return s.size();
}

//e
void delete_all(Stack &s, Stack_entry x){
	Stack temp;
	char rdr;
		while (!s.empty()) {
		s.top(rdr);
		if(rdr == x){
			s.pop();
		}
		else{
			temp.push(rdr);
		}
		s.pop();
	}
	s = temp;

}




int main()
{
	Stack copy;
	char cp;
	Stack original;
	char og;



	//fill stack with something
	for(int i= 0; i < 5; i++){
		original.push('a');
	}
	original.push('b');
	original.push('a');



	delete_all(original, 'b');
	

	
	
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
