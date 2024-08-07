#include <iostream>

int main()
{
  // we write std::endl, to skip a line and buffer the code. So the code can run immediately without waiting the next code.
  //command clang++ -std=C++11 Prog.cc, is to install what is essential in C++ version 11 to our compiler
  

  // Prompt user to enter two numbers
  std::cout << "Enter two numbers:" << std::endl;
  int v1=0 , v2=0 ; // variables to hold the input we read
  std::cin >> v1 >> v2; // read the input
  std::cout << "The sum of" << v1 << "and" << v2 << "is" << v1+v2 << std::endl;

  return 0;

}
