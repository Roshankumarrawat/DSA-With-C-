// Switch Staements

// // The switch statement in C++ is a potent control structure that enables you to run several code segments based on the result of an expression. It offers a sophisticated and effective substitute for utilizing a succession of if-else-if statements when you have to make a decision between several possibilities.

#include <iostream>  
using namespace std;  
int main () {  
       int num;  
       cout<<"Enter a number to check grade:";    
       cin>>num;  
           switch (num)    
          {    
              case 10: cout<<"It is 10"; break;    
              case 20: cout<<"It is 20"; break;    
              case 30: cout<<"It is 30"; break;    
              default: cout<<"Not 10, 20 or 30"; break;    
          }    
    }    