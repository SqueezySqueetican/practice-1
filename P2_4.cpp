#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    
    cout << "\nNumber: " << number << endl;
    cout << "--------------------------------\n";
    
    if (number > 0)
    {
        cout << "Positive" << endl;
    }
    else if (number < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
    
    if (number % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    
    return 0;
}