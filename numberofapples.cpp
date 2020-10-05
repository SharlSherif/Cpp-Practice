#include <cstdlib>
#include <iostream>
using namespace std;

int main ()
{
  int NumberOfApples, NumberOfDozens, NumberOfExtraApples;
  cout << "Enter your number of apples:\n";
  cin >> NumberOfApples;

  NumberOfDozens = NumberOfApples/12;
  NumberOfExtraApples = NumberOfApples%12;
  
  cout << "Number of extra apples is : "<< NumberOfExtraApples<< "\n";
  cout << "Number of dozens is : "<< NumberOfDozens;
    return EXIT_SUCCESS;
}

