#include <iostream>
using namespace std;

/**************************************************************************************
* This program will prompt the user to enter a number to find all the multiples of such
* number below 100. Then, the program will add all the multiples of that number
* and will return the total.
****************************************************************************************/
int promptForNumber();

int main()
{
  int sum = promptForNumbers();
  cout << "The Sum is " << sum;
  
  return 0;
}

int promptForNumber()
{
  int num;
  cout << "What multiples are we adding? ";
  cin >> num;

  for (int i = 100; i > 1; i--)
    if (i % num == 0)
      num
      
  return sum;
}