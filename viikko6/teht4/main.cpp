#include <iostream>
#include "Queue.h"
#include "Stack.h"

using namespace std;

int sellStack(Stack &stocks, int currentPrice);
int sellQue(Queue &que, int currentPrice);

int main()
{  
   Queue q;
   Stack s;
   char retriver;

   //fill stack with some content
   for(int i = 0; i < 10; i++)
   {
      s.push('x');
   }

   //A
   // move items from stack to que
   while (!s.empty())
   {
      s.top(retriver);
      q.append(retriver);
      s.pop();
   }

   //B
   //move items to stack from que
   while(!q.empty())
   {
      q.retrieve(retriver);
      s.push(retriver);
      q.serve();
   }

   //C
   //Empty one Stack onto the top of another Stack in such a way that the entries that were in the first Stack keep the same relative order.

   Stack first, second;
   Queue helper;

   //fill first stack
   for(int i = 0; i < 5; i++)
   {
      first.push('x');
   }
   for(int i = 0; i < 5; i++)
   {
      first.push('a');
   }

   //move to queue
   while(!first.empty())
   {
      first.top(retriver);
      helper.append(retriver);
      first.pop();
   }

   //move to second stack
   while(!helper.empty())
   {
      helper.retrieve(retriver);
      second.push(retriver);
      helper.serve();
   }

   //print the new stack
   while(!second.empty())
   {
      second.top(retriver);
      cout<< retriver;
      second.pop();
   }

   //D
   //Empty one Stack onto the top of another Stack in such a way that the entries that were in the first Stack are in the reverse of their original order.

   //fill
   for(int i = 0; i < 5; i++)
   {
      first.push('x');
   }
   for(int i = 0; i < 5; i++)
   {
      first.push('a');
   }

   //put in
      while(!first.empty())
   {
      first.top(retriver);
      second.push(retriver);
      first.pop();
   }

   //E
   // Use a local Stack to reverse the order of all the entries in a Queue.
   
   //fill stack with some content
   for(int i = 0; i < 5; i++)
   {
      s.push('a');
   }
      for(int i = 0; i < 5; i++)
   {
      s.push('b');
   }


   // move items from stack to que
   while (!s.empty())
   {
      s.top(retriver);
      q.append(retriver);
      s.pop();
   }

   //move items to stack from que
   while(!q.empty())
   {
      q.retrieve(retriver);
      s.push(retriver);
      q.serve();
   }

   //F
   // Use a local Queue to reverse the order of all the entries in a Stack.

   //fill Queue with some content
   for(int i = 0; i < 5; i++)
   {
      q.append('a');
   }
      for(int i = 0; i < 5; i++)
   {
      q.append('b');
   }


   // move items from stack to que
   while (!q.empty())
   {
      q.retrieve(retriver);
      s.push(retriver);
      q.serve();
   }

   //move items to queue from stack
   while(!s.empty())
   {
      s.top(retriver);
      q.append(retriver);
      s.pop();
   }



   return 0;
}

/* Graveyard
   while(!first.empty())
   {
      first.top(retriver);
      cout<< retriver;
      first.pop();
   }


*/