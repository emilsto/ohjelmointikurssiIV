#include <iostream>
#include <stack>

using namespace std;



int main(){


    stack<int> nums;
    int n;
    cout<<"Syota alkuluku: ";
    cin>>n;

    int i = 2;
    while (n != 1) {
        if (n % i == 0) {
            nums.push(i);
            while (n % i == 0) {
                n = n / i;
            }
        }
        i++;
    }
 
    while (!nums.empty()) {
        cout<<nums.top() << " ";
        nums.pop();
    }

    return EXIT_SUCCESS;
}