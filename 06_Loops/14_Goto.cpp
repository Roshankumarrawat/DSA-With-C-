// The C++ goto statement is also known as jump statement. It is used to transfer control to the other part of the program. It unconditionally jumps to the specified label.

// It can be used to transfer control from deeply nested loop or switch case label.

#include <iostream>  
using namespace std;  
int main()  
{  
ineligible:    
         cout<<"You are not eligible to vote!\n";    
      cout<<"Enter your age:\n";    
      int age;  
      cin>>age;  
      if (age < 18){    
              goto ineligible;    
      }    
      else    
      {    
              cout<<"You are eligible to vote!";     
      }         
}  