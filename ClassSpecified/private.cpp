#include<iostream>
using namespace std;

class student
{
    private :
        int age;
    public :
        void display(int a)
        {
            age = a;
            cout << " Age = "<< endl;
        } 
};

int main()
{
    int age_input;
    
    student s1;

    cout << " Enter your age:\n ";
    cin >> age_input;

    s1.display(age_input);

    //Note : Since we use private function the variable cannot be directly accessed by the main function.

    return 0;
}