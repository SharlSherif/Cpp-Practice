#include <iostream>
using namespace std;

int
main ()
{
  int x, fact = 1;

  cout << "Enter an integer"<<endl;
  cin >> x;

  if (x == 0)
    {
      cout << "Factorial of 0 is " << fact<<endl;
    }
  else if (x < 0)
    {
      cout << "Factorial doesn't exist for a negative integer"<<endl;
    }
  else
    {
      for (int k = x; k >= 1; k--)
	{
	  cout << k<<endl;
	  fact *= k;
	}
      cout << "Factorial of " << x << " is " << fact<<endl;
    }

  return 0;
}
