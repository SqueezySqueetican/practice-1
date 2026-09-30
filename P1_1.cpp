#include <iostream>
#include <string>
using namespace std;

int main()
{
    float T_cel, T_far;
    string input;
    
    cout << "Enter 'S' to stop the program.\n\n";
    
    while(true)
    {
        cout << "Enter Temperature in Celsius: ";
        cin >> input;
        
        if (input == "S" || input == "s")
        {
            break;
        }
        
        T_cel = stof(input);
        T_far = T_cel * 9.0 / 5.0 + 32;
        cout << "Temperature in Fahrenheit = " << T_far << endl << endl;
    }
    
    return 0;
}