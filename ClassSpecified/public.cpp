#include<iostream>
using namespace std;

class student
{
    public :
        int age;

    void displayage()
    {
        cout<< "Age : " << age << endl;
    }
};

int main()
{
	student s1;
	
	cout << "Enter your age\n";
	cin >> s1.age;

	s1.displayage();

	return 0;
}