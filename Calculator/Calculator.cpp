// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    
    float number1, number2, result;
    char operation, repeat;

    do
    {
        cout << "Enter the first number,operator and second number: ";
        cin >> number1 >> operation >> number2;
        switch (operation)
        {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        default:
            cout << "Invalid operator!";
            break;
        }
        cout << number1 << " " << operation << " " << number2 << " = " << result << endl;
        cout << "Do you want to continue? (y/n): ";

        cin >> repeat;
    } while (repeat == 'y');

    return 0;
}


