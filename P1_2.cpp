#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    string input;
    
    cout << "Enter 'Stop' to stop the program.\n";
    
    while(true)
    {
        cout << "Enter a character: ";
        cin >> input;
        
        if (input == "Stop" || input == "stop" || input == "STOP")
        {
            cout << "Program terminated." << endl;
            break;
        }
        
        ch = input[0];
        cout << "Character: " << ch << ", ASCII value: " << (int)ch << endl << endl;
    }
    
    return 0;
}
