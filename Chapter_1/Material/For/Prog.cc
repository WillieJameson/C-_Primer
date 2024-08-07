#include <iostream>

int main()
{
  int sum = 0;

  // sum value from 1 through 10 inclusive 

  for (int val = 0 ; val<=10 ; ++val)
    sum += val;
  
  std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;

  return 0 ;

  /*
  the difference between for loop and while loop is that
  the use case of for loop is when u need to loop the function immediately without variable outside the for loop
  meanwhile the use case for wile loop is when u need to validate the condition with the variable outside the while loop
   */
}