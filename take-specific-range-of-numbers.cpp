#include <iostream>
using namespace std;

int
main ()
{
  int x;

  do
    {
      cout << "Please enter a number between 1 and 10" << endl;
      cin >> x;
    }
  while (x < 1 || x > 10);

  if (x <= 3)
    {
      cout << "Small" << endl;
    }
  else if (x <= 6)
    {
      cout << "Medium" << endl;
    }
  else
    {
      cout << "Large" << endl;
    }

  return 0;
  }
