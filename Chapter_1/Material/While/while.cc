#include <iostream>


int main()
{
  //function to keep executing the while program as long the val is less than 10

  int sum = 0, val = 1 ;

  while (val <= 10){
    sum += val; // sum = sum + val 
    val++; // increment of the value of val or val = val + 1
  }

  std::cout<< "sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}