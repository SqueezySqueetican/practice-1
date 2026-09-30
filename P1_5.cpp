#include <iostream>
using namespace std;

int main() 
{
    int a;
    float b;
    
    cout << "Enter value for a (integer): ";
    cin >> a;
    
    cout << "Enter value for b (float): ";
    cin >> b;
    
    float result1 = a / b; 
    cout << "Result (float): " << result1 << endl;
    
    int result2 = (int)result1;
    cout << "Result (int): " << result2 << endl;
    
    return 0;
}