#include <iostream>
using namespace std;
// Main program
int main(){
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +,-, *, /
    cin >> op;
    // It allow user to enter the operands
    cin >> num1 >> num2;
    // Switch statement begins
    
    switch (op)
    {
    // if user enter +
    case '+':
        cout << num1 +  num2;
        break;
    // if user enter -
    case '-':
        cout << num1 - num2;
        break;
    // if user enter *
    case '*':
        cout << num1 * num2;
        break;
    // if user enter /
    case '/':
        cout << num1 / num2;
        break;
    // if the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Effor! operator is not correct";
    } // switch statement ends
    return 0;
}

