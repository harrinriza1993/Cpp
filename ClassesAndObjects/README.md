CLASS AND OBJECTS

CLASS :
		Class is a blueprint for creating objects, providing initial values for state(member variables or attributes) and implementations of behaviour(member functions or methods).
A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair of curly braces. A class definition must be followed either by a semicolon or a list of declarations.

Syntax :
		class classname
		{
			attributes;
			methods;
		};
Example :
		class student
		{
			int rollnumber;
			studentname();
		}

OBJECTS :
		An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated. A class provides the blueprints for objects, so basically an object is created from a class.

Declaration :
		classname object1;
		classname object2;

Example :
		student s1;
		student s2;
	student is the class name, s1 and s2 are the objects.

Example program for class and object :
	#include<iostream>
	
	using namespace std

	class student 
	{
		public :
		int roll no;
		student_name();
};

	int main()
	{
		student s1;
		student s2;
		
		s1.rollno = 4;
		s2.rollno = 5;

		cout<< “The details of 1st student is : “ << s1.rollno <<endl;
		cout<< “The details of 1st student is : “ << s2.rollno <<endl;
}

