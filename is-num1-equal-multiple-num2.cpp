#include <iostream>

using namespace std;

int
main ()
{
  int num1, num2;

  cout << "Enter two integers"<< endl;
  cin >> num1>>num2;

  if (num1 % num2 == 0)
    {
      cout << num1 << " is a multiple of " << num2;
    }
  else
    {
      cout << num1 << " is NOT a multiple of " << num2;

    }
  return 0;
}