**********************************************************\
* Author: Jonmancia
* Title: Car Expenses Calc
* Version: 1.0
**********************************************************\
#include <iostream>
using namespace std;

// Initializes program

float getPeriodicCost();
float getUsageCost();
void display(float periodicCost, float costUsage);
float promptDevalue();
float promptInsurance();
float promptParking();
float promptMileage();
float promptGas();
float promptRepairs();
float promptTires();

// Starts the program
int main()
{
  float periodicCost = getPeriodicCost();
  float costUsage = getUsageCost();
  display(periodicCost, costUsage);
  
  return 0;
}

// Gets the periodicCost
float getPeriodicCost()
{
  float periodicCost;
  periodicCost = promptDevalue();
  periodicCost += promptInsurance();
  periodicCost += promptParking();
  return periodicCost;
}
// prompt user to input vehicle devalue amount
float promptDevalue()
{
  cout << "What is the monthly devalue? ";
  float cost;
  cin >> cost;
  return cost;
}
// prompt user to input insurance per month payment
float promptInsurance()
{
  cout << "What is the monthly insurance payment? ";
  float cost;
  cin >> cost;
  return cost;
}
// prompt user to input parking payment
float promptParking()
{
  cout << "How much to you pay a month on parking? ";
  float cost;
  cin >> cost;
  return cost;
}
// gathers all inputs to deliver to the display function
float getUsageCost()
{
  float costUsage;
  float cost;
  int mileage;
  
  mileage = promptMileage();
  cost = promptGas();
  cost *= mileage;
  cost += promptRepairs();
  cost += promptTires();
  costUsage = cost;
  return costUsage;
}
// prompt user to input mileage usage
float promptMileage()
{
  cout << "What's your monthly mileage? ";
  float mileage;
  cin >> mileage;
  return mileage;
}
// prompt user to input gas price per gallon
float promptGas()
{
  cout << "How much is gas per gallon? ";
  float cost;
  cin >> cost;
  return cost;
}
// prompt user to input repair expenses
float promptRepairs()
{
  cout << "What's your monthly cost of repairs? ";
  float cost;
  cin >> cost;
  return cost;
}
// prompt user to input tire expenses
float promptTires()
{
  cout << "What's your monthly expense on tires? ";
  float cost;
  cin >> cost;
  return cost;
}
//displays the results of all user inputs
void display(float periodicCost, float costUsage)
{
  cout << endl;
  cout << endl;
  cout << "\t" << "Your periodic cost is $" << periodicCost << endl;
  cout << "\t" << "Your actual usage cost is $" << costUsage; 
  return;
}


