#include <iostream>
using namespace std;

int
main ()
{
  int n[9], sum = 0, avg;
  cout << "Enter 10 integers " << endl;

  for (int k = 0; k <= 9; k++)
    {
      cin >> n[k];
    }
  cout << "------" << endl;

  for (int x = 9; x >= 0; x--)
    {
      sum += n[x];
      cout << n[x] << endl;
    }

  avg = sum / 10;
  cout << "The average is " << avg << endl;
  return 0;
}
