// What is a Function in C++?
// A function in C++ is a block of code written by the programmer to perform a specific task. E.g. function to calculate the area of a square. A function executes only when it is called. It is an important aspect of code reusability and understandability. You can divide your program into as many functions as you want to solve a difficult task.


// There are two types of functions in C++:
//1. Standard Library Functions: Inbuilt functions in C++
//2. User-defined Functions: Created by users




// C++ User-defined Functions
// In C++, a programmer can create any function by himself to perform any task e.g. function to calculate the area of a square. A user-defined function groups code to perform a specific task and that group of code is given a name (identifier). When a programmer invokes his created function in any part of the program, the body of that function executes.


// There are some aspects of a user-defined function in C++. They are
// 1. Function Declaration
// 2. Function Call
// 3. Function Definition
// 4. Function Parameters
// 5. Function Prototype
// 6. return statement

// returnType functionName (parameter1, parameter2,...) {
//  // function body 
// }



// Function Call in C++
// As mentioned above, a function executes only when it is called. When you create/declare a function, it gets saved for use in the future.


// Example of Multiple Function Calls 


#include <iostream>
using namespace std;
void welcomeFunction() {
 cout << "Welcome to ScholarHat\n";
}
int main() {
 
 // function call 
 welcomeFunction(); 
 welcomeFunction(); 
 welcomeFunction(); 
 return 0;
} 


// Function Definition in C++
// The body of the function is known as the function definition.


// function declaration
// void welcomeFunction() {
//  cout << "Welcome to ScholarHat"; //function definition
// }


// Call by value in C++
// In call by value, original value is not modified.

// In call by value, value being passed to the function is locally stored by the function parameter in stack memory location. If you change the value of function parameter, it is changed for the current function only. It will not change the value of variable inside the caller method such as main().

// EX:-
#include <iostream>  
using namespace std;  
void change(int data);  
int main()  
{  
int data = 3;  
change(data);  
cout << "Value of the data is: " << data<< endl;  
return 0;  
}  
void change(int data)  
{  
data = 5;  
}  


// Call by reference in C++
// In call by reference, original value is modified because we pass reference (address).

// Here, address of the value is passed in the function, so actual and formal arguments share the same address space. Hence, value changed inside the function, is reflected inside as well as outside the function.

// Note: To understand the call by reference, you must have the basic knowledge of pointers.


// EX:-

#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 int x=500, y=100;    
 swap(&x, &y);  // passing value to function  
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}    

// Recursion is a magical concept in the world of programming. It is a technique that allows a function to perform a fascinating feat - calling itself. Picture a function as if it were a magical creature looking into a mirror. When it sees its reflection, something magical happens. It creates another mirror, and then another, and it keeps going on like a chain reaction. Each mirror shows the same thing - the creature and its reflection. It's a bit like when you stand between two mirrors, and you see your image repeating again and again, but in this case, the function keeps making more mirrors of itself, like a never-ending magical mirror show. This self-replicating quality is what makes recursion both enigmatic and profoundly significant in the realm of programming.


// C++ Recursion Example


#include<iostream>   
    using namespace std;   
    int main()   
    {   
    int factorial(int);   
    int fact,value;   
    cout<<"Enter any number: ";   
    cin>>value;   
    fact=factorial(value);   
    cout<<"Factorial of a number is: "<<fact<<endl;   
    return 0;   
    }   
    int factorial(int n)   
    {
    if(n<0)   
    return(-1); /*Wrong value*/   
    if(n==0)   
    return(1); /*Terminating condition*/   
    else   
    {   
    return(n*factorial(n-1));    
    }   