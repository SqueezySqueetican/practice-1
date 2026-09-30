#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;
    
    cout << "Enter num1: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter num2: ";
    cin >> num2;
    
    float result;
    bool valid = true;
    
    switch (op)
    {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
            
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
            
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
            
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed!\n";
                valid = false;
            }
            break;
    }
    
    return 0;
}