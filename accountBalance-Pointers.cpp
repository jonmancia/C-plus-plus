#include <iostream>
#include <iomanip>
using namespace std;

// Function which asks for user input
// void date(float * pAccount, float * person1, float * person2)
// {
//   float dinnerCost;
//   float movieCost;
//   float icecreamCost;

//   cout << "Cost of the date:" << endl;
//   cout << "\t" << "Dinner:" << setw(4) << "";
//   cin >> dinnerCost;
//   cout << "\t" << "Movie:" << setw(5) << "";
//   cin >> movieCost;
//   cout << "\t" << "Ice cream:" << setw(1) << "";
//   cin >> icecreamCost;
  
//   if (person1 > person2)
//   {
//     *pAccount = &person1;
//   }
//   else
//   {
//     *pAccount = &person2;
//   }
//   return;
// }
// Function which initiates the program
int main()
{
  float person1Balance;
  float person2Balance;
  float dinnerCost;
  float movieCost;
  float icecreamCost;
  float * pBalance;

  cout << "What is Sam's balance? ";
  cin >> person1Balance;
  cout << "What is Sue's balance? ";
  cin >> person2Balance;

  if (person1Balance > person2Balance)
  {
    pBalance = &person1Balance;
  }
  else
  {
    pBalance = &person2Balance;
  }

  cout << "Cost of the date:" << endl;
  cout << "\t" << "Dinner:" << setw(4) << "";
  cin >> dinnerCost;
  cout << "\t" << "Movie:" << setw(5) << "";
  cin >> movieCost;
  cout << "\t" << "Ice cream:" << setw(1) << "";
  cin >> icecreamCost;

  *pBalance -= dinnerCost + movieCost + icecreamCost;

  cout << "Sam's balance: $" << person1Balance << endl;
  cout << "Sue's balance: $" << person2Balance << endl;

  return 0;
}
// void d(float * person1Balance, float * person2Balance, float * dinnerCost,
//                   float * movieCost, float * icecreamCost)
// {
//   // Variable Initialization

//   cout << "What is Sam's balance? ";
//   cin >> *person1Balance;
//   cout << "What is Sue's balance? ";
//   cin >> *person2Balance;
//   cout << "Cost of the date:" << endl;
//   cout << "\t" << "Dinner:" << setw(4) << "";
//   cin >> *dinnerCost;
//   cout << "\t" << "Movie:" << setw(5) << "";
//   cin >> *movieCost;
//   cout << "\t" << "Ice cream:" << setw(1) << "";
//   cin >> *icecreamCost;
//   return;
// }

// void date(float * pAccount, float * person1Balance, float * person2Balance, float * pDinnerCost, float * pMovieCost, float * pIcecreamCost)
// {
//   if (*person1Balance > *person2Balance)
//   {
//     *pAccount = *person1Balance;
//     // cout << "Sam's balance: " << "$" << *pAccount << endl;
//     // cout << "Sue's balance: " << "$" << *person2Balance << endl;
//   }
//   else
//   {
//     *pAccount = *person2Balance;
//     // cout << "Sam's balance: " << "$" << *person1Balance << endl;
//     // cout << "Sue's balance: " << "$" << *pAccount << endl;
//   }

  
//   return;
// }

// /***********************************
// * This function will initialize the
// * program
// ************************************/
// int main()
// {
//   float person1Balance;
//   float person2Balance;
//   float dinnerCost;
//   float movieCost;
//   float icecreamCost;

//   const float * pPerson1Balance = &person1Balance;
//   const float * pPerson2Balance = &person2Balance;
//   const float * pDinnerCost = &dinnerCost;
//   const float * pMovieCost = &movieCost;
//   const float * pIcecreamCost = &icecreamCost;

//   float * pAccount;

//   askQuestions(pPerson1Balance, pPerson2Balance, pDinnerCost, pMovieCost, pIcecreamCost);
//   date(pAccount, pPerson1Balance, pPerson2Balance, pDinnerCost, pMovieCost, pIcecreamCost);
  
//   return 0;
// }