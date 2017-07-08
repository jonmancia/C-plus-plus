#include <iostream>
using namespace std;

int main(int argc, char * argl[])
{
  // Display the name of the program
  cout << "The name of the program is: "
       << argl[0] << endl;
  //Display how many parameters were passed
  cout << "There are a total of "
       << argc << " parameters."
       << endl;
  //Display contents of the parameters
  for (int i = 1; i < argc; i++)
   cout << "Parameter " << i << " is "
        << argl[i] << endl;
  return 0;
}