#include <iostream>
#include "Queue.h"

using namespace std;

void help();
char get_command();
bool do_command(char c, Queue &test_queue);

int main()
{
    Queue test_queue;
    help();
    while (do_command(get_command(), test_queue));
    return 0;
}

void help()
/*
Post: A help screen for the program is printed, giving the meaning of each
      command that the user may enter.
*/

{
   cout << endl
        << "This program allows the user to enter one command" << endl
        << "(but only one) on each input line." << endl
        << "For example, if the command S is entered, then" << endl
        << "the program will serve the front of the queue." << endl
        << endl

        << " The valid commands are:" << endl
        << "A - Append the next input character to the extended queue" << endl
        << "S - Serve the front of the extended queue" << endl
        << "R - Retrieve and print the front entry." << endl
        << "# - The current size of the extended queue" << endl
        << "C - Clear the extended queue (same as delete)" << endl
        << "P - Print the extended queue" << endl
        << "H - This help screen" << endl
        << "Q - Quit" << endl

        << "Press <Enter> to continue." << flush;

   char c;
   do {
      cin.get(c);
   } while (c != '\n');
}

bool do_command(char c, Queue &test_queue)
/*
Pre:  c represents a valid command.
Post: Performs the given command c on the Extended_queue test_queue.
      Returns false if c == 'q', otherwise returns true.
Uses: The class Extended_queue.
*/

{
   bool continue_input = true;
   Queue_entry x;
   Queue print_queue;
   switch (c) {

    case 'a':
      cout << "Enter a character to be appended: " << endl;
      cin>>x;
      test_queue.append(x);
      break;

    case 's':
        if(test_queue.serve() == underflow){
            cout << "Queue is empty." <<endl;
        }

      break;

   case 'r':
      if (test_queue.retrieve(x) == underflow)
         cout << "Queue is empty." << endl;
      else
         cout << endl
              << "The first entry is: " << x
              << endl;
      break;

   case '#':
        //todo
        cout << test_queue.size() <<endl;
      break;

    case 'c':
      if (test_queue.empty() == true)
         cout << "Queue is already empty." << endl;
      else
         while(!test_queue.empty()){
             test_queue.serve();
         }
      break;

    case 'p':
      if (test_queue.empty() == true)
         cout << "Queue empty, nothing to print." << endl;
      else
       print_queue = test_queue;
         while(!print_queue.empty()){
             print_queue.retrieve(x);
             cout<< x << " ";
             print_queue.serve();
         }
         cout << endl;
      break;

   case 'h':
     help();
   break;   

   case 'q':
      cout << "Extended queue demonstration finished." << endl;
      continue_input = false;
      break;
    //  Additional cases will cover other commands.
   }
   return continue_input;
}

char get_command()
{
    char x;
    cout << endl;
    cout <<"Give command: ";
    cin>>x;
    return x;
}