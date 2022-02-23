#include <iostream>
#include "Queue.h"
#include "Stack.h"

using namespace std;

int sellStack(Stack &stocks, int currentPrice);
int sellQue(Queue &que, int currentPrice);

int main()
{  
   Queue stocks;
   Stack stackstock;
   char retriver;
   int toBePurchased = 100;
   int janPrice = 10;
   int aprPrice = 30;
   int junPrice = 20;
   int sepPrice = 50;
   int novPrice = 30;
   int profitStack, profitQue;

   //Jan purchases
   for (int i=0; i < toBePurchased; i++){
   stocks.append('a');
   stackstock.push('a');
   }

   //Apr purchases
   for (int i=0; i < toBePurchased; i++){
   stocks.append('b');
   stackstock.push('b');
   }

   profitStack = sellStack(stackstock, junPrice);
   profitQue = sellQue(stocks, junPrice);

   cout << profitStack << " June sales profit (stack)" <<endl;

   cout << profitQue<< " June sales profit (Que)" <<endl;

   

   //Sep purchases
   for (int i=0; i < toBePurchased; i++){
   stocks.append('c');
   stackstock.push('c');
   }
   char temp;

   profitStack = profitStack + sellStack(stackstock, novPrice);
   profitQue = profitQue + sellQue(stocks, novPrice);

   cout << profitStack << " total sales profit (stack)" <<endl;

   cout << profitQue<< " total sales profit (Que)" <<endl;



   return 0;
}



int sellStack(Stack &stocks, int currentPrice)
{
   int profit = 0;
   char retriver;
   for(int i = 0; i < 100; i++)
   {
      stocks.top(retriver);
      if (retriver == 'a')
      {
         profit = profit + (currentPrice - 10);
      }
      if (retriver == 'b')
      {
         profit = profit + (currentPrice - 30);
      }
      if (retriver == 'c')
      {
         profit = profit + (currentPrice - 50);
      }
      stocks.pop();
   }
   return profit;
}

int sellQue(Queue &que, int currentPrice)
{
   int profit = 0;
   char retriver;
   for(int i = 0; i < 100; i++)
   {
      que.retrieve(retriver);
      if (retriver == 'a')
      {
         profit = profit + (currentPrice - 10);
      }
      if (retriver == 'b')
      {
         profit = profit + (currentPrice - 30);
      }
      if (retriver == 'c')
      {
         profit = profit + (currentPrice - 50);
      }
      que.serve();
   }
   return profit;
}

// koodia varastossa / hautausmaalla
/*
   while(!stackstock.empty()){
      stackstock.top(temp);
      cout << temp << " ";
      stackstock.pop();
   }
   while(!stocks.empty()){
      stocks.retrieve(temp);
      cout << temp << " ";
      stocks.serve();
   }

   // a = price of stock in jun, b = price of stock in nov
void sellStocks(Queue &stocks,int tobeSold, int &bankQue, char month){
   char retriver;
   for (int i = 0; i < tobeSold; i++){
         stocks.retrieve(retriver);
      if (month == 'a')
      {
         bankQue = bankQue + 20;
      }
      else if (month == 'b')
      {
         bankQue = bankQue + 30;
      }
      stocks.serve();
   }
}

// a = price of stock in jun, b = price of stock in nov
void sellStocksStack(Stack &stackofStock, int tobeSold, int &bankQue, char month){
   char retriver;
   for (int i = 0; i < tobeSold; i++){
         stackofStock.top(retriver);
      if (month == 'a')
      {
         bankQue = bankQue + 20;
      }
      else if (month == 'b')
      {
         bankQue = bankQue + 30;
      }
      stackofStock.pop();
   }
}


   cout << "bank value FIFO (que): "<< bankQue <<endl;
   cout << "bank value of LIFO (stack): " << bankStk <<endl;


*/