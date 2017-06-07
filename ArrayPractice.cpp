#include <iostream>
using namespace std;

void promptNames(char names[][256]);

int main()
{
  char names[10][256];
  promptNames(names);
  for (int i = 0; i < 10; i++)
  {
    cout << names[i] << endl;
  }
  return 0;
}

void promptNames(char names[][256])
{
  for (int i = 0; i < 10; i++)
  {
    cout << "Name #" << i + 1 << ":";
    cin >> names[i];
  }
}