/***********************************************************************        
* Program:                                                                      
*    Project 07, Calendar                                                       
*    Brother Honeycutt, CS124                                                   
* Author:                                                                       
*    Jonathan A. Mancia                                                         
* Summary:                                                                      
*    This program will allow the user to input a month and year and will        
*    display a calendar for the month and year provided by the user.            
*                                                                               
*    Estimated:  4 hours                                                        
*    Actual:     4  hrs                                                         
*      Working with logical operators and expressions while calling other       
*      functions within functions.                                              
************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

// Global Initialization
#define MAX_FILE_CHARACTERS 1024
#define MAX_FILE_WORDS 154

// Function Prototypes
void getFilename(char FILENAME[]);
int readFile(char FILENAME[], char fileText[][256]);
void askQuestion(char fileText[], int numWords);

/*********************************
* This function will initialize the program.
**********************************/
int main()
{
  /****************************
  * Variable initialization
   ****************************/
   
  // Main File Name Variable
  char FILENAME[256];
  int numWords = 0;
  // Text coming from the file
  char fileText[MAX_FILE_WORDS][256];
  
  // Function calls
  getFilename(FILENAME);
  readFile(FILENAME, fileText);
  //askQuestion(fileText, MAX_FILE_CHARACTERS);

  return 0;
}
/***************************************************************
* This function gets reads the file and saves it into a string array.
****************************************************************/
int readFile(char FILENAME[], char fileText[][256])
{
  //READ FILE
  ifstream fin(FILENAME);
  if(fin.fail())
    cout << "Unable to open file." << endl;

  //LOOP and assign file data to string array
  int numWords = 0;
  while(numWords < 256 && fin >> fileText[numWords])
  {
    askQuestion(fileText[numWords], numWords);
    numWords++;
  }

  fin.close();
  return numWords;
}

void getFilename(char FILENAME[])
{
  //Ask for filename
  cout << "Please enter the filename of the Mad Lib: ";
  cin >> FILENAME;
}

void askQuestion(char fileText[], int numWords)
{
  char answer[256];
  cout << fileText << endl;
  if(fileText[0] != '<' || !isalpha(fileText[1]))
    return;

  cout << "\t" << toupper(fileText[1]);
  for(int iText = 0; iText < numWords && fileText[iText] != '>'; iText++)
  {
    if(fileText[iText] == '_')
      cout << " ";
    cout << fileText[iText];
  }
  cout << ": ";
  cin >> answer;
}