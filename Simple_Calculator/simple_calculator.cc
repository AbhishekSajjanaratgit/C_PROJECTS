/*
  Name: CALCULATOR v1.0
  Author: Abhishek Sajjanar
  Date: 13-01-25 01:49 AM
  Description: A simple calculator that can add, subtract multiply, divide, and calculate the factorial.
*/

#include<iostream>
using namespace std;

unsigned int factorial(int a){
    int val = 1;
    for (int r = a; r > 0; r--){
        val = val * r;
    }
    return val;
}

int main(){

    double first_value, second_val;
    unsigned int option_val;
    double result;


    cout << "Enter the first_value :" ;
    cin >> first_value;

    looop :
    cout << "OPTIONS : \n 1] + \n 2] - \n 3] / \n 4] * \n 5] ! \n OPTION_SELECTED:";
    cin >> option_val;

    switch (option_val)
    {
    case 1:
        cout << "Enter the second_val:";
        cin >> second_val;
        result = first_value + second_val;
        break;

    case 2:
        cout << "Enter the second_val:";
        cin >> second_val;
        result = first_value - second_val;
        break;

    case 3:
        cout << "Enter the second_val:";
        cin >> second_val;
        result = first_value / second_val;
        break;

    case 4:
        cout << "Enter the second_val:";
        cin >> second_val;
        result = first_value * second_val;
        break;

    case 5:
        result = factorial(first_value);
        break;

    case 6:
        exit(0);
    
    default:
        cout << "Enter the correct value :\n";
        goto looop;
        break;
    }

    cout << "The answer is :" << result;

    return 0;
}