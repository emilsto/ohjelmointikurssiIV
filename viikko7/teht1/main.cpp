#include <iostream>
#include "Queue.h"
#include "Stack.h"

using namespace std;


int main()
{  
   Queue first;
   Queue second;
   bool flag = false;

   char str[20];

   cin.getline(str,20);

   //push elements left of : to first queue and right to second queue
   for (char a : str)
   {
      if(a == ':')
      {
         flag = true;
      }
      if(!flag)
      {
         first.append(a);
      }
      if(a == '\0'){
         break;
      }
      else if (flag)
         second.append(a); 
   }
   //pop the : off
   second.serve();

   if(!flag)
   {
      cout << "No colon on the line.";
      return 0;
   }
   if(first.size() > second.size())
   {
      cout << "The left part (before the colon) is longer than the right.";
      return 0;
   }
   else
   {
      cout << "The right part (after the colon) is longer than the left.";
      return 0;
   }
   

   for(int i = 0; i < first.size(); i++)
   {
      while()
   }
   



   return 0;
}
