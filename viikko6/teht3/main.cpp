#include <iostream>
#include "Queue.h"

using namespace std;


int main()
{  
   Queue stocks;
   char retriver;
   int toBePurchased = 100;
   int toBeSold = 100;
   int bank = 0;

   //Jan purchases
   for (int i=0; i < toBePurchased; i++){
   stocks.append('a');
   }

   //Apr purchases
   for (int i=0; i < toBePurchased; i++){
   stocks.append('b');
   }

   //Sep purchases
   for (int i=0; i < toBePurchased; i++){
   stocks.append('c');
   }

   //sell first onez
   for (int i=0; i < toBeSold; i++){
      stocks.retrieve(retriver);
      if (retriver == 'a'){
         bank = bank + 20;
      }
      stocks.serve();
   }
   
   cout << bank;


   return 0;
}

