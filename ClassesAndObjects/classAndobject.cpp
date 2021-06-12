#include <iostream>
#include <string.h>
	
using namespace std;

class student 
{
    public :
        // Attributes
        int rollNumber; 
        char studentName[50];

        // method
        void displayStudentInfo()
        {
            cout <<  "The details of student name is :" << studentName ;
            cout <<  " Roll number:" << rollNumber << endl;
        }
};

int main()
{
    // Creating an object
    student s1;
    student s2;
    
    // Updates Attributes
    s1.rollNumber = 4;
    strcpy(s1.studentName, "Harrin Riza");

    s2.rollNumber = 5;
    strcpy(s1.studentName, "Lal Bosco");

    // Call the method
    s1.displayStudentInfo();
    s2.displayStudentInfo();
}