#include <stack>
#include <iostream>
#include <string>

using namespace std;


int main()

{

   bool flag = true;
   string s;
   int n;
   double item;
   stack<double> numbers;  //  declares and initializes a stack of numbers
   stack<char> letters; // stores letters
   stack<char> lettersReverse; //stores reversed 

   cout << " Type in an integer n followed by n decimal numbers." << endl
        << " The numbers will be printed in reverse order." << endl;
   cin  >> s;


   for (int i = 0; i < s.length(); i++) {
      letters.push(s.at(i));
      lettersReverse.push(s.at(i));
   }

    for (int i = 0; i < s.length(); i++) {
        if(s.at(i) != lettersReverse.top()){
            flag = false;
            break;
        }
        lettersReverse.pop();
    }

   cout << endl << endl;
   while (!letters.empty()) {
      cout << letters.top() << " ";
     // lettersReverse.push(letters.top());
      letters.pop();
   }

   if(flag){
       cout <<" <-- That is a palindrome!";
   }
   else {
       cout << " <-- That is NOT a palindrome!";
   }



   cout << endl;


}