#include <iostream>
#include <iomanip>
using namespace std;

  

int main() 
{ 
    int a = 33; 
    int b = 0; 
    while (a >=0) 
      { 
         a |= b;                                                        //Complete this 
         b += a; 
     } 
     
     cout << "value of b " << b << endl;

}
  

