#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    char op;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Error: division by zero" << endl;
        }
        else
        {
            cout << num1 / num2 << endl;
        }
        break;
    default:
        cout << "Error: invalid operator" << endl;
    }
    return 0;
}