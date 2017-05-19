#include <iostream>
using namespace std;

// Prototypes
void prompt();
float computePay(float hourlyWage, float hoursWorked);
void display(float payLeft);

// function which initializes the program
int main()
{
  
  prompt();
  
  return 0;
}

// prompts user for  input
void prompt()
{
  float payLeft;
  float hoursWorked;
  float hourlyWage;
  
  cout << "Wage?\n";
  cin >> hourlyWage;
  cout << "Hours Worked?\n";
  cin >> hoursWorked;
  
  payLeft = computePay(hourlyWage, hoursWorked);
  
  display(payLeft);
  
  return;
}

// Function computes pay
float computePay(float hourlyWage, float hoursWorked)
{
  float payLeft = hourlyWage * hoursWorked;
  return payLeft;
}

void display(float payLeft)
{
  cout << "Your wage is... $" << payLeft;
  return;
}




