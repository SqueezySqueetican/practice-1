#include <iostream>
#include <string> 
using namespace std;

int main()
{
    float score;
    string grade;  
    cout << "Input here (0-100)";
    cin >> score;
    
    if (score >= 97)
    {
        grade = "A+";
    }
    else if (score >= 95)
    {
        grade = "A";
    }    
    else if (score >= 92)
    {
        grade = "A-";
    } 
    else if (score >= 87)
    {
        grade = "B+";
    }
    else if (score >= 85)
    {
        grade = "B";
    }
    else if (score >= 82)
    {
        grade = "B-";
    }
    else if (score >= 77)
    {
        grade = "C+";
    }
    else if (score >= 75)
    {
        grade = "C";
    }
    else if (score >= 72)
    {
        grade = "C-";
    }
    else if (score >= 67)
    {
        grade = "D+";
    }
    else if (score >= 65)
    {
        grade = "D";
    }
    else if (score >= 62)
    {
        grade = "D-";
    }
    else
    {
        grade = "F";
    }
    
    cout << "Grade: " << grade << endl;
    
    return 0;  
}