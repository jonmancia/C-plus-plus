#include <iostream>
using namespace std;

//Function Prototypes
void getGrades(int grades[], int numGrades);
int averageGrades(const int grades[], int numGrades);


// Main caller
int main()
{
  //Variable initialization
  int grades[10];
  int numGrades = 10;

  getGrades(grades, numGrades);
  int average = averageGrades(grades, numGrades);
  cout << "Average Grade: " << average << "%";
  

  return 0;
}

// Function which prompts grades from user
void getGrades(int grades[], int numGrades)
{
  for (int gradeCount = 0; gradeCount < numGrades; gradeCount++)
  {
    cout << "Grade " << gradeCount + 1 << ":";
    cin >> grades[gradeCount];
  }
  return;
}

//Function whose job is to return the average of all grades
int averageGrades(const int grades[], int numGrades)
{
  int sum = 0;
  for (int count = 0; count < numGrades; count++)
  {
    sum += grades[count];
  }
  return sum / numGrades;
}