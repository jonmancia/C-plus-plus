#include <iostream>
#include <fstream>
using namespace std;

void getFile(char fileName[]);
void readFile(char fileName[], char fileData[][3]);
void writeFile(char fileData[][3]);

int main()
{
  char FILENAME[256];
  char ticTac[5][3];
  getFile(FILENAME);
  readFile(FILENAME, ticTac);
  writeFile(ticTac);
  return 0;
}

void getFile(char fileName[])
{
  cout << "Enter source filename: ";
  cin >> fileName;
}

void readFile(char fileName[], char fileData[][3])
{
  ifstream fin(fileName);
  if(fin.fail())
    cout << "Something failed!" << endl;
  
  for(int row = 0; row < 5; row++)
  {
    for(int col = 0; col < 3; col++)
    {
      char blank = ' ';
      char dash = '-';
      if(row != 1 || row != 3)
      {
        fin >> fileData[row][col];
        if (fileData[row][col] == '.')
        fileData[row][col] = blank;
        if (row == 1 || row == 3)
        {
        fileData[row][col] = dash;
        }
      }
    cout << (row == 1 || row == 3 ? "--" : " ") << fileData[row][col] << (col == 2 ? "\n" : row == 1 || row == 3 ? "+" : " |");
      
    }
  }
  cout << endl;
  fin.close();
  return;
}

void writeFile(char fileData[][3])
{ 
  char outputFile[256];
  cout << "Enter destination filename: ";
  cin >> outputFile;

  ofstream fout(outputFile);
  if(fout.fail())
    cout << "Something went wrong!" << endl;
  for(int row = 0; row < 3; row++)
  {
    for(int col = 0; col < 3; col++)
    {
      fout << fileData[row][col] << (col == 2 ? "\n" : "\t");
    }
  }
  cout << "File Written" << endl;
  fout.close();
  return;
}