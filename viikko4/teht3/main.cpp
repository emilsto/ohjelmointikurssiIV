#include <stack>
#include <iostream>
#include <string>

using namespace std;



int main()

{

   string s;
   stack<char> letters; // stores letters


   cout << " Type in a word to reverse it" << endl;
   cin  >> s;

   cout << endl << endl;
   while (!letters.empty()) {
      cout << letters.top() << " ";
     // lettersReverse.push(letters.top());
      letters.pop();
   }


   cout << endl;
}