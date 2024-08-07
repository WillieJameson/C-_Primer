#include <iostream>

int main()
{
    //Write a program that uses a while to sum the numbers from 50 to 100 in for loop

  int sum = 0;

  for (int val = 50 ; val<=100; ++val)
    sum += val; //sum = sum + val

  std::cout<<"sum of 50 till 100 is " << sum << std::endl;

  return 0;
}