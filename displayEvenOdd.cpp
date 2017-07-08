#include <iostream>
using namespace std;

void displayEvenOdd(int values[], int num);

int main()
{
  int values[] = {20, 25, 23, 13, 2};
  int num = 5;
  displayEvenOdd(values, num);
  return 0;
}

void displayEvenOdd(const int values[], int num)
{
  int numEvenOdd[2] = {0, 0};

  for(int i = 0; i < num; i++)
  {
    if (values[i] % 2 == 0)
      numEvenOdd[1] += 1;
    else
      numEvenOdd[0] += 1;
  }

  cout << "Number even: "
       << numEvenOdd[0] << endl;
  cout << "Number odd: "
  <<  numEvenOdd[1] << endl;
  return;
}