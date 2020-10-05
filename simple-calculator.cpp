#include <iostream>

using namespace std;

int
main ()
{
  char n;
  int x, y, r;

  cout << "Enter first number\n";
  cin >> x;

  cout << "Enter operator\n";
  cin >> n;
  cout << "Enter second number\n";
  cin >> y;

  switch (n)
    {
    case '+':
      r = x + y;
      break;
    case '-':
      r = x - y;
      break;
    case '%':
      r = (int) x % int (y);
      break;
    case '/':
      r = (int) x / int (y);
      break;
    default:
      cout << "Please enter a valid operator \n";
      break;
    }

  cout << "The result is " << r;
};
