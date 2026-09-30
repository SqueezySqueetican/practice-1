#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int choice = 0; 
    cout << "1. Print Hello\n";
    cout << "2. Show Date & Time\n";
    cout << "3. Exit\n";
    
    while (choice != 3) {
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "\n";
        
        switch (choice){
            case 1:
                cout << "Hello! How are you?\n\n";
                break;    
            case 2:
                time_t now = time(0);
                cout << "Date & Time: " << ctime(&now) << endl;
                break;
            case 3:
                cout << "Goodbye!\n";
                break;
        }
    }
    return 0;
}