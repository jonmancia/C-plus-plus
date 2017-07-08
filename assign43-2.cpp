#include <iostream>
#include <string>
using namespace std;

int main(int argc, char * argl[])
{
  string fileName;
  // Prompt if fileName was not submitted as an argument
  if (argc > 2)
    cout << "Unexpected error while opening file"
         << " file may contain more than 1 parameters\n";
  else
    if (argc == 1)
    {
      cout << "What is the file name?";
      cin >> fileName;
    }
    else
      fileName = argl[1];

  cout << "Your file name is " << fileName << endl; 
  return 0;
}