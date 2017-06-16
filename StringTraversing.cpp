char text1[256];
  char text2[256];
  char * pText1 = text1;
  char * pText2 = text2;
  
  askTexts(pText1, pText2);
  bool yes = displayResults(pText1, pText2);
  
  cout << "Are the strings equal? ";
  if(yes)
  {
    cout << "Equal" << endl;
  }
  else
    cout << "Not Equal" <<endl;
  
  return 0;
}

void askTexts(char * pText1, char * pText2)
{
  
  cout << "Please enter text 1: ";
  cin.getline(pText1, 256);
  cout << "Please enter text 2: ";
  cin.getline(pText2, 256);
  
}

bool displayResults(char * pText1, char * pText2)
{
  char * p1 = pText1;
  char * p2 = pText2;
  
  for(p1, p2; tolower(*p1) == tolower(*p2) && *p1 && *p2; p1++, p2++)
  ;
  
  return (*p1 == *p2);