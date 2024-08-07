#include <iostream>

int main()
{
  //Write a program that uses a while to sum the numbers from 50 to 100.

  int sum = 0, val = 50;

  while (val<=100)
  {
    sum += val; //sum = sum + val
    val++; // increment
  }

  std::cout<<"sum of 50 till 100 is " << sum << std::endl;

  return 0;
}