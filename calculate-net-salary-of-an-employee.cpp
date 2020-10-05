#include <iostream>

using namespace std;

int
main ()
{
  float salary, tax, netSalary, taxValue;
  cout << "Please enter your salary!\n";
  cin >> salary;
  cout << "Enter your tax percentage\n";
  cin >> tax;
  taxValue = salary * tax / 100;

  netSalary = salary - taxValue;

  cout << "Your net salary is " << netSalary<<"\n";

  if (netSalary >= 8000)
    {
      cout << "High";
    }
  else if (netSalary <= 5000)
    {
      cout << "Moderate";
    }
  else if (netSalary <= 3000)
    {
      cout << "Low";
    }

  return 0;
}
