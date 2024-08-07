#include <iostream>

int main ()
{
  // Print each number in the range specified by two integers.

  int low =0, high=0; //set the value of low and high

  std::cout<<"A program to print the number between the specified two integers \n"<< "Enter the specific two integers :"<<std::endl; 
  std::cin >> low >> high ; //users input 

  while (low != high)
  {
    low ++ ;// increment the value of low
    std::cout << low << std::endl; 
  }

  return 0;
}