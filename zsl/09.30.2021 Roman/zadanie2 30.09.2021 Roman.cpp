/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
class Rectangle{
    public:
        float sideA,sideB;
        
        inline float inline_area(float sideA, float sideB){
        return sideA*sideB;    
      };
    inline float inline_circuit(float sideA, float sideB){
        return 2*sideA+2*sideB; 
    }};
int main(int argc, char** argv)
{ 
  setlocale(LC_CTYPE, "polish");
  
  Rectangle prostokat;
  cout<<"Pole prostokąta wynosi: "<<prostokat.inline_area(6,9)<<"cm^2\n"
  <<"Obwód prostokąta wynosi: "<<prostokat.inline_circuit(6,9)<<"cm\n";
    
    return 0;
}
