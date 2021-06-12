# Access Specifiers in C++
The access modifiers of C++ are public, private, and protected. The access modifiers of C++ allows us to determine which class members are accessible to other classes and functions, and which are not. One of the main features of object-oriented programming languages such as C++ is data hiding.Data hiding refers to restricting access to data members of a class. This prevents other functions and classes from tampering with the class data. However, it is also important to make some member functions and member data accessible so that the hidden data can be manipulated indirectly.

### Public  :
	The public keyword is used to create public members. The public members are 
accessible from any part of the program.

`public.cpp` Example code of public

# Private :
The private keyword is used to create private members. The private members can only be accessed from within the class. However, friend classes and  friend functions can access private members.  

`private.cpp`: Example code of private

# Protected :
The protected keyword is used to create protected members. The protected members can be accessed within the class and from the derived class.

`protected.cpp` Example code of protected
