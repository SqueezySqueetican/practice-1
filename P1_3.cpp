#include <iostream>
using namespace std;

int main() {
    #define PI 3.14159
    float r;
    
    cout << "Enter radius: ";
    cin >> r;
    
    float area = PI * r * r;
    float circumference = 2 * PI * r;
    
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;
    
    return 0;
}