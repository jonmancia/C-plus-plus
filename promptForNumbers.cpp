#include <iostream>
using namespace std;

/******************************
* This prompt will prompt the user
* for numbers to add to a total sum
* the program will then close once the hits -1.
* The challenge here is that the -1 should not subtract
* from the sum value.
*******************************/
int promptForNumbers();

int main()
{
  int sum = promptForNumbers();
  cout << "The Sum is " << sum;
  
  return 0;
}

int promptForNumbers()
{
  //display instructions
  cout << "Please enter a collection of integer values. When\n"
       << "\tyou are done, enter -1.\n";
  
  int sum;
  int value;
  
  //perfom do the loop
  do
  {
    //promp for value
    cout << ">";
    cin >> value;
    //logic to not have the -1 be accounted within the program's sum
    if (value != -1)
      sum += value;
  }
  while (value != -1);
  
  return sum;
}