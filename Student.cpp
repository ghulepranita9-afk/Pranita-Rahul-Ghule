#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    string div;
    string dept;

public:
    void getInfo() // funtion decalration 
    {
        cout << "Enter roll no:" << endl;
        cin >> rollno;

        cout << "Enter a student name:" << endl;
        cin >> name;

        cout << "Enter a division:" << endl;
        cin >> div;

        cout << "Enter a dept:" << endl;
        cin >> dept;
    }

public:
    void showInfo()
    {
        cout << "Roll no of the student" << rollno << endl;
        cout << "student name" << name << endl;
        cout << "Division of student" << div << endl;
        cout << "Dept of student" << dept << endl;
    }
};

int main()
{
    student object[10];

    for (int i = 0; i < 9; i++)
    {
        cout << "Information of student" << i + 1;
        object[i].getInfo();
     
    }
    for (int i = 0; i < 9; i++)
    {
        cout << "Display Information of student" << i + 1;
        object[i].showInfo();
        
    }

    

    
}    