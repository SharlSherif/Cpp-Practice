#include <iostream>
using namespace std;

int main()
{
   int num1, num2, temp;
   cout << "Enter two integers" <<endl;
   cin >> num1 >> num2;
   if(num1 > num2) {
     temp = num1;
     num1 = num2;
     num2 = temp;
     cout << "Swapped num1 is " << num1 << " and num2 is " <<num2;
   }
    return 0;
}
