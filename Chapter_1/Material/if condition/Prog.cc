#include <iostream>

int main()
{
  //currVal is the number we’re counting; we’ll read new values into val
  int currVal = 0 , val = 0 ;
  //read first number and ensure that we have data to process
  if (std::cin >> currVal){
    int cnt = 1; // store the count for the current value we're processing
    while (std::cin >> val) { // read the remaining numbers
      if(val == currVal)      // if the value are the same add 1 to cnt
        ++cnt;
      else{ // otherwise, print the count for the previous value
        std::cout << currVal << "occurs" << cnt << "times" << std::endl;
        currVal = val; // remember the new value reset the counter
        cnt = 1;
      }
    } //while loop ends here remember to print the count for the last value in the file
    std::cout << currVal << "occurs" << cnt << "times" << std::endl;
  }// outermost if statement ends here

  return 0;
}