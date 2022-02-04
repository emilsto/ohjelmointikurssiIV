#include <iostream>
#include <stack>
using namespace std;


int main(){


    int value = 1; // value of integers
    int temp = 0; //temp for comparison
    stack<int>values; // stack to hold values

    cout <<"Enter integers of increasing value: " <<endl;


    //enter values and check for increasing value
    while(true){
        cin >> value;
        if(temp > value){
            break; // if smaller than previous value, exit
        }
        temp = value;
        values.push(value);
    }

    //print stack
    while(!values.empty()){
        cout << values.top() << " ";
        values.pop();
    }
    return EXIT_SUCCESS;
}


