// User-defined structures in C++ allow you to create your own data types by grouping together 
// variables of different types under a single name. A structure is a way to organize and 
// represent a collection of related data members. These data members can be of different types, 
// and they are grouped together under a common name, called the structure name.

// The basic syntax for defining a structure is as follows:

// struct MyStruct {
//     // Data members (variables)
//     int member1;
//     double member2;
//     char member3;
//     // ... (can have more members of different types)
// };

// Example (creating point with coordinates on the x and y axis):

#include <iostream>
using namespace std;

// Define a structure named Point
struct Point {
    int x;
    int y;
};

int main() {
    // Create variables of type Point
    Point p1;
    Point p2;

    // Access and modify data members
    p1.x = 5;
    p1.y = 10;

    p2.x = 3;
    p2.y = 8;

    // Print values
    cout << "Point 1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "Point 2: (" << p2.x << ", " << p2.y << ")" << endl;

    return 0;
}

// Structures are very similar as concepts to classes in CPP. The similarities and differences are:
// Similarities:

// Both structures and classes allow you to define your own data types.
// Both can contain data members of different types.
// Both can have member functions (methods).


// Differences:

// Access Control:

// In a structure, by default, all members are public.
// In a class, by default, all members are private.
// You can, however, explicitly specify the access control for members using public, private, 
// or protected keywords in both structures and classes.

// Inheritance:

// In a class, you can specify the access level for inherited members (public, private, or 
// protected).
// In a structure, the default access level for inherited members is public.
// Member Functions:

// In a class, member functions and data members can have access specifiers (public, private, 
// or protected).
// In a structure, member functions and data members are public by default.
// Additional Features:

// Classes can have additional features like inheritance, polymorphism, and access specifiers 
// for member functions.

// When to choose structure over class:

// The choice between a structure and a class in C++ depends on the specific requirements and 
// design considerations of your program. Both structures and classes serve as user-defined data 
// types, and in many cases, the decision may come down to personal preference or coding 
// conventions. However, here are some considerations that might influence your choice:

// Default Member Access:

// 1. If you want all members to be public by default and don't need to enforce encapsulation, 
// a structure may be more convenient. Structures, by default, have all members public.

// 2. Simple Data Aggregation:
// If your goal is to aggregate a collection of related data without much behavior (methods), 
// a structure might be simpler and more intuitive.

// 3.Plain Old Data (POD):
// If your data structure is a "Plain Old Data" type without complex behavior or encapsulation 
// needs, a structure might be a more natural choice.

// 4. C Compatibility:
// If you are interacting with C code or need to maintain compatibility with C structures, 
// using a C++ structure might be a cleaner and more straightforward choice.