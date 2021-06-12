#include<iostream>
using namespace std;

class student
{
    protected :
        int age;
};

class samplechild : public student
{
    public :
        void display(int a)
        {
            age = a;
            cout<< "Age = " << age << endl;
        }
};

int main()
{
    int age_input;
    
    samplechild child;

    cout<<"Enter your age\n";
    cin >> age_input;
    
    child.display(age_input);
}
