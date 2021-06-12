#include <iostream>
#include <string.h>
	
using namespace std;

class student 
{
    public :
        int rollNumber;
        char studentName[50];
};

int main()
{
    // Creating an object
    student s1;
    student s2;
    
    s1.rollNumber = 4;
    strcpy(s1.studentName, "Harrin Riza");

    s2.rollNumber = 5;
    strcpy(s1.studentName, "Lal Bosco");

    cout <<  "The details of 1st student name is :" << s1.studentName ;
    cout <<  " Roll number:" << s1.rollNumber << endl;

    cout << "The details of 2nd student name is :" << s2.studentName;
    cout <<  " Roll number:" << s1.rollNumber << endl;
}