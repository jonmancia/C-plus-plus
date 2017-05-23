#include <iostream>
using namespace std;

char getGrade();

int main()
{
  char grade = getGrade();
  cout << "You grade is " << grade;
  return 0;
}

char getGrade()
{
  char grade;
  
  cout << "Please enter your letter grade: ";
  cin >> grade;
  grade = toupper(grade);
  
  while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F')
  {
    cout << "Invalid grade. Please enter a letter grade {A,B,C,D,F}";
    cin >> grade;
    grade = toupper(grade);
  }
  
  return grade;
}